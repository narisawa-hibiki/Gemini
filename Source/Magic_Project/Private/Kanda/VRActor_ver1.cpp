// Fill out your copyright notice in the Description page of Project Settings.


#include "Kanda/VRActor_ver1.h"
#include "InputMappingContext.h"
#include "Magic/Onishi_MagicLauncher.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "Components/ArrowComponent.h" 
#include "EnhancedInputSubsystems.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Engine/Engine.h"
#include "IXRTrackingSystem.h"
#include "HeadMountedDisplay.h"
#include "Components/SplineComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include <array>
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "sato/MagicGameInstance.h"


// Sets default values
AVRActor_ver1::AVRActor_ver1() :
	magicData(nullptr),
	circle(nullptr)
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// StaticMeshComponent��ǉ����ARootComponent�ɐݒ肷��
	Player = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = Player;

	// SphereComponent�̒ǉ��Ɛݒ�
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	Sphere->SetupAttachment(Player);
	Sphere->SetSphereRadius(30.f);
	Sphere->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f), false);

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AVRActor_ver1::OnSphereBeginOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &AVRActor_ver1::OnSphereEndOverlap);

	// Camera��ǉ�����
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	Camera->SetupAttachment(Sphere);

	// Arrow��ǉ�����
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	Arrow->SetRelativeLocation(FVector(50.f, 0.f, 30.f));
	Arrow->SetupAttachment(Camera);
	//Arrow->SetHiddenInGame(false);// ���̍s�̃R�����g�A�E�g�����������Arrow��������悤�ɂȂ�܂����ύX��v���W�F�N�g�̍ċN�����K�v�ł�

	// �X�v�����O�A�[���R���|�[�l���g�̒ǉ��Ɛݒ�
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArm->TargetArmLength = 200.f;
	SpringArm->SetupAttachment(Camera);

	// ��̃e�X�g�p��Sphere��ǉ�����
	Sphere_HandTest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere_handtest"));
	UStaticMesh* HandMesh = LoadObject<UStaticMesh>(NULL, TEXT("/Game/Satou/Mesh/hand/source/hand"));
	Sphere_HandTest->SetStaticMesh(HandMesh);
	UMaterial* HandMeshMaterial = LoadObject<UMaterial>(NULL, TEXT("/Game/Satou/Mesh/hand/source/lambert2"));
	Sphere_HandTest->SetMaterial(0, HandMeshMaterial);
	Sphere_HandTest->SetupAttachment(SpringArm);

	// �`���[�W���̃i�C�A�K���R���|�[�l���g��ǉ�
	ChargingEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ChargingMagicEffectComponent"));
	ChargeFinishEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ChargeFinishEffectComponent"));
	ChargingEffect->SetupAttachment(Camera);
	ChargeFinishEffect->SetupAttachment(Camera);
	ChargingEffect->SetHiddenInGame(true);
	ChargeFinishEffect->SetHiddenInGame(true);

	// Input Mapping Context�uIMC_TestPad�v��ǂݍ���
	DefaultMappingContext = LoadObject<UInputMappingContext>(nullptr, TEXT("/Game/Kanda/Input/IMC_TestPad"));

	// Input Action�uIA_InputMove�v��ǂݍ���
	ControlMove = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_InputMove"));

	// Input Action �uIA_MagicCharge�v��ǂݍ���
	MagicCharge = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_ChargeMagic"));

	// Input Action�uIA_GoMagic�v��ǂݍ���
	ControlMagic = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_GoMagic"));

	// Input Action�uIA_Look�v��ǂݍ���
	LookAction = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_Look"));

	// Input Action�uIA_MoveAction�v��ǂݍ���
	MoveStart = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_MoveAction"));

	// �e�X�g�p
	{
		// ���ݎ����̎擾
		FDateTime Now = FDateTime::Now();
		FString FormattedTime = Now.ToString(TEXT("%Y_%m_%d__%H_%M"));

		MagicFilePath =
			FPaths::ProjectDir() / TEXT("CSVFile/Export/MagicData_" + FormattedTime + ".csv");
	}

}

// Called when the game starts or when spawned
void AVRActor_ver1::BeginPlay()
{
	Super::BeginPlay();

	//Add Input Mapping Context
	if (const APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	if (GEngine && GEngine->XRSystem.IsValid())
	{
		bool VRAllowed = GEngine->XRSystem->IsHeadTrackingAllowed();
		if (VRAllowed) {
			GEngine->XRSystem->SetTrackingOrigin(EHMDTrackingOrigin::Local);
		}
	}

	// �X�v���C�������x���ォ��擾�i������j �܂��A�v���C���[�̏����ʒu���Z�b�g
	SplineActor = Cast<APlayerWayRoad>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerWayRoad::StaticClass()));
	if (SplineActor) // ������null�`�F�b�N
	{
		FTransform transformTemp;
		transformTemp = SplineActor->GetSplineTransform(distance, 0.0f);
		FVector newLocation = FVector(transformTemp.GetLocation());
		SetActorLocation(newLocation);
	}
	IsInMagicZone = false;

	// ��Փx�ɂ��p�����[�^�[�̒����B���݂͂O�Ńm�[�}���A�P�Ńn�[�h
	UMagicGameInstance* MagicGame = Cast<UMagicGameInstance>(GetWorld()->GetGameInstance<UMagicGameInstance>());
	switch (MagicGame->Difficulty)
	{
	case 0:
		ArmUpAngle = 30.0f;
		Need_ArmUpDownCnt = 3;
		break;
	case 1:
		ArmUpAngle = 45.0f;
		Need_ArmUpDownCnt = 5;
		break;
	default:
		break;
	}

	// �C���X�^���X��
	//DeviceManager = NewObject<UDeviceThreadManager>(this);
	DeviceManager_ = Cast<UMagicGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()))->DeviceManager;
}

// Called every frame
void AVRActor_ver1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	//TimeAccumulator += DeltaTime;

	//if (TimeAccumulator >= Interval)
	//{

	VRInformation();
	SpawnMagicChargeEffect();
	DeviceRotateToAverage();
	// �f�o�C�X�̃s�b�`��SpringArm�̊p�x��ς���BSpringArm�̃��[��180�ɂ��Ă���̂ŁA�s�b�`�Ƀ}�C�i�X��������
	SpringArm->SetRelativeRotation(FRotator(-Final_Device_Rotate.Pitch, 180.f, 0));

	ArriveSplinePoint(StopPointNum);
	// �X�v���C���̏���ړ����Ă�������
	if (SplineActor && !isStop) // ������null�`�F�b�N&����~�����`�F�b�N
	{
		FTransform transformTemp;
		transformTemp = SplineActor->GetSplineTransform(distance, MoveSpeedPoint * DeltaTime);
		FVector newLocation = FVector(transformTemp.GetLocation());
		SetActorLocation(newLocation);
	}

	Final_Device_Rotate = DeviceManager_->GetLatestData();

	// �f�o�C�X�̊p�x��0�x�ȉ��ɂȂ�����       (�r����������)
	if (Final_Device_Rotate.Pitch < 0 && IsArmUp)
	{
		IsArmUp = false;
		ArmUpDownCnt++;
		DeviceGoMagic();
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			this,
			HandStar,									// �G�t�F�N�g
			Sphere_HandTest->GetComponentLocation(),	// Location
			FRotator(0, 0, 0),							// Rotation
			FVector(1.f),								// Scale
			true,										// bAutoDestroy(��{true)
			true,										// bAutoActivate
			ENCPoolMethod::None,
			true										// bPrecullCheck(�J�����O�`�F�b�N)
		);
		// ���@�w�ɂ���Ƃ��A���@���˂̌��ʉ��Ɣ��̂Ŗ��@�w�̏�ɂ��邩�`�F�b�N
		if (magicData == nullptr)
		{
			UGameplayStatics::PlaySound2D(this, HandDownSound);
		}
		//��̃}�e���A�����ς�鏈���B�K�v�Ȃ�R�����g�A�E�g���O������
		//UMaterial* HandMeshDownMaterial = LoadObject<UMaterial>(NULL, TEXT("/Game/Satou/Materials/M_Red"));
		//Sphere_HandTest->SetMaterial(0, HandMeshDownMaterial);
	}

	// �f�o�C�X�̊p�x��ArmUpAngle�ȏ�ɂȂ�����(�r���グ����)
	if (Final_Device_Rotate.Pitch > ArmUpAngle)
	{
		// ����������ŏ��̈�񂾂����ʉ���炷�i���낵���烊�Z�b�g�j
		if (IsArmUp == false)
		{
			UGameplayStatics::PlaySound2D(this, HandUpSound);
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(
				this,
				HandStar,									// �G�t�F�N�g
				Sphere_HandTest->GetComponentLocation(),	// Location
				FRotator(0, 0, 0),							// Rotation
				FVector(1.f),								// Scale
				true,										// bAutoDestroy(��{true)
				true,										// bAutoActivate
				ENCPoolMethod::None,
				true										// bPrecullCheck(�J�����O�`�F�b�N)
			);
		}
		IsArmUp = true;
		// ���@�w�ɂ���ꍇ�̓`���[�W�^�C����������
		if (IsInMagicZone)
		{
			ChargeMagic();
		}
		//��̃}�e���A�����ς�鏈���B�K�v�Ȃ�R�����g�A�E�g���O������
		//UMaterial* HandMeshUpMaterial = LoadObject<UMaterial>(NULL, TEXT("/Game/Satou/Materials/M_Green"));
		//Sphere_HandTest->SetMaterial(0, HandMeshUpMaterial);
	}

	// �r�����񐔈ȏ�グ���������瓮��
	if (ArmUpDownCnt >= Need_ArmUpDownCnt)
	{
		PlayerMoveStart();
		ArmUpDownCnt = 0;
	}

	UKismetSystemLibrary::PrintString(this, IsInMagicZone ? TEXT("IsInMagicZone = true") : TEXT("IsInMagicZone = false"), true, false, FColor::Red, 0.05f, NAME_None);
	//UKismetSystemLibrary::PrintString(this, IsArmUp ? TEXT("true") : TEXT("false"), true, false, FColor::Red, 0.05f, NAME_None);
	//UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("updownCNT = %d"), ArmUpDownCnt), true, false, FColor::Green, 0.05f, NAME_None);
	//UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("MagicScore = %d"), Magic_Score), true, false, FColor::Blue, 0.05f, NAME_None);
	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("MagicChargeTime = %f"), MagicChargeTime), true, false, FColor::Yellow, 0.05f, NAME_None);
}

// Called to bind functionality to input
void AVRActor_ver1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {

		// ControlBall��IA_Control��Triggered��Bind����
		EnhancedInputComponent->BindAction(ControlMove, ETriggerEvent::Triggered, this, &AVRActor_ver1::ControlPlayer);

		// ControlBall��IA_Control��Triggered��Bind����
		EnhancedInputComponent->BindAction(MagicCharge, ETriggerEvent::Triggered, this, &AVRActor_ver1::MouseChargeMagic);
		EnhancedInputComponent->BindAction(ControlMagic, ETriggerEvent::Completed, this, &AVRActor_ver1::GoMagic);

		// Look��IA_Look��Triggered��Bind����
		//EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AVRActor_ver1::Look);

		// MoveStart���o�C���h����
		//EnhancedInputComponent->BindAction(MoveStart, ETriggerEvent::Triggered, this, &AVRActor_ver1::kariPlayerMoveStart);
	}
}

void AVRActor_ver1::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AVRActor_ver1::ControlPlayer(const FInputActionValue& Value)
{
	// input��Value��Vector2D�ɕϊ��ł���
	const FVector2D V = Value.Get<FVector2D>();

	FVector PreLocation = GetActorLocation();

	FVector NewLocation = PreLocation + Sphere->GetComponentToWorld().TransformVectorNoScale(FVector(V.Y, V.X, 0.0f) * MoveSpeedPoint);

	SetActorLocation(NewLocation);
}

void AVRActor_ver1::ChargeMagic()
{
	MagicChargeTime += GetWorld()->GetDeltaSeconds();
	if (MagicChargeTime >= 2.0f && !Charged)
	{
		UKismetSystemLibrary::PrintString(this, TEXT("2byoutattayo!!!!!!!!!!!!!!!"), true, false, FColor::Cyan, 0.3f);
		Charged = true;
		UGameplayStatics::PlaySound2D(this, ChargeFinishSound);
	}
}

void AVRActor_ver1::MouseChargeMagic(const FInputActionValue& Value)
{
	if (const bool v = Value.Get<bool>() && IsInMagicZone) {
		MagicChargeTime += GetWorld()->GetDeltaSeconds();
		if (MagicChargeTime >= 2.0f && !Charged)
		{
			UKismetSystemLibrary::PrintString(this, TEXT("2byoutattayo!!!!!!!!!!!!!!!"), true, false, FColor::Cyan, 0.3f);
			Charged = true;
			UGameplayStatics::PlaySound2D(this, ChargeFinishSound);
		}
	}
}

// ���@������_�R���g���[���[�̂�
void AVRActor_ver1::GoMagic()
{
	if (magicData == nullptr) { return; }
	const int cnt = magicData->GetMagicCnt();

	UNiagaraSystem* f = magicData->GetFlyNiagaraSystem(0);
	UNiagaraSystem* d = magicData->GetDeathNiagaraSystem(0);
	UNiagaraSystem* ff = magicData->GetFlyNiagaraSystem(1);

	// ���@�̃`���[�W���Ԃ��v���ĉ��̖��@���o�������߂�
	// else�O�����瑽���j�����ꂽ�|�C���^�ud�v���g�����ƂɂȂ�̂ŃN���b�V������
	if (MagicChargeTime <= 2.0f)
	{
		CreateMagic(f, d);
		UGameplayStatics::PlaySound2D(this, NormalMagicSound);
	}
	else
	{
		CreateMagic(ff, d);
		UGameplayStatics::PlaySound2D(this, ChargeMagicSound);
	}

	//�`���[�W������
	MagicChargeTime = 0;
	FTimerHandle ResetHandle;
	GetWorldTimerManager().SetTimer(
		ResetHandle,
		this,
		&AVRActor_ver1::ResetCharged,
		2.0f,
		false
	);
	alreadyChargingMagicEffect = false;
	alreadyChargeFinishMagicEffect = false;
	ChargingEffect->SetHiddenInGame(true);
	ChargeFinishEffect->SetHiddenInGame(true);

	if (magicData->DecMagicCnt()) {
		UKismetSystemLibrary::PrintString(GEngine->GetWorld(), "magicCnt 0");
		magicData = nullptr;

		// ���@�w��j��
		circle->Ef_MagicCircle = nullptr;
		circle->Destroy();
	}
}

//�`���[�W���Z�b�g
void AVRActor_ver1::ResetCharged()
{
	Charged = false;
}
void AVRActor_ver1::SetMagicData(TSharedPtr<MagicDataTable> m_, AOnishi_MagicCircleParent* o_) {

	magicData = m_;
	circle = o_;
}

// ���@���΂�����
void AVRActor_ver1::CreateMagic(UNiagaraSystem* Ef_Flying_, UNiagaraSystem* Ef_Destroy_, float s_) {

	// �G�t�F�N�g��null�Ȃ珈���Ȃ�
	if (Ef_Flying_ == nullptr || Ef_Destroy_ == nullptr) return;

	// ���@�A�N�^�[�𐶐�
	{
		FRotator look = Arrow->GetComponentRotation();
		FVector pos = GetActorLocation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AOnishi_MagicLauncher* magic =
			GetWorld()->SpawnActor<AOnishi_MagicLauncher>(AOnishi_MagicLauncher::StaticClass(), pos, look); // �X�|�[������

		magic->MoveSpeed *= s_;
		magic->LaunchMagic(look.Vector(), pos, Ef_Flying_, Ef_Destroy_);

		DebugLogLocation(magic, FColor::Red);
		WritePlayerInfoToCSV(this);
	}
}

// �J�����R���g���[���[
void AVRActor_ver1::Look(const FInputActionValue& Value)
{
	// input��Value��Vector2D�ɕϊ��ł���
	FVector2D v = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(v.X);
		AddControllerPitchInput(v.Y);

		// Pawn�������Ă���Control�̊p�x���擾����
		FRotator controlRotate = GetControlRotation();

		// �J�������܂킷
		SetActorRotation(controlRotate);

	}
}

// �ڐG����̏����A�R���C�_�[���m���ڐG�����Ƃ��ɌĂяo�����
void AVRActor_ver1::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// pass
	if (AOnishi_MagicCircleParent* Pawn = Cast<AOnishi_MagicCircleParent>(OtherActor)) {
		IsInMagicZone = true;
	}

}

// �ڐG����̏����A�R���C�_�[���m�����ꂽ�Ƃ��ɌĂяo�����
void AVRActor_ver1::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

	if (AOnishi_MagicCircleParent* Pawn = Cast<AOnishi_MagicCircleParent>(OtherActor)) {
		IsInMagicZone = false;
		MagicChargeTime = 0;
		magicData = nullptr;
		circle = nullptr;
	}
}

// �f�o�b�O�p
void AVRActor_ver1::DebugLogLocation(AActor* a_, FColor c)
{
	if (a_ == nullptr) { return; }

	UKismetSystemLibrary::PrintString(
		this,
		a_->GetActorLocation().ToString(),
		true,
		true,
		c,
		2.0f
	);
}

// csv�o��
void  AVRActor_ver1::WritePlayerInfoToCSV(AActor* m_)
{
	//FString MagicName = ;

	//// CSV�ɏ������ޓ��e
	//FString CSVContent = MagicName + TEXT(",") + TEXT("\n");

	//// �t�@�C���̑��݂��m�F���A���݂��Ȃ��ꍇ�̓w�b�_�[�s��ǉ�
	//if (!FPaths::FileExists(MagicFilePath))
	//{
	//	CSVContent = TEXT("MagicName\n") + CSVContent;
	//}

	//// �t�@�C���ɓ��e����������
	//FFileHelper::SaveStringToFile(CSVContent, *MagicFilePath, FFileHelper::EEncodingOptions::AutoDetect,
	//	&IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

//---------------------------------------------------------------------------------------------------------------------------------
//sato
// VR�@��̏��擾
void AVRActor_ver1::VRInformation()
{
	GEngine->XRSystem->HasValidTrackingPosition();
	if (GEngine->XRSystem->IsHeadTrackingAllowed())
	{
		FQuat OrientationAsQuat;
		FVector Position(0.f);
		FRotator ro;

		GEngine->XRSystem->GetCurrentPose(IXRTrackingSystem::HMDDeviceId, OrientationAsQuat, Position);
		UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(ro, Position);
		this->Sphere->SetRelativeRotation(ro);
	}
}

// IA_MoveAction�ɓo�^���ꂽ�{�^�����������ƍs�������i���݂�J�L�[�j
//void AVRActor_ver1::kariPlayerMoveStart(const FInputActionValue& Value)
//{
//	//�X�g�b�v���Ă��鎞�̂ݏ���
//	if (isStop)
//	{
//		UKismetSystemLibrary::PrintString(this, TEXT("ugoke"), true, true, FColor::Blue, 2.0f, NAME_None);
//		isStop = false;
//		StopPointNum++;
//	}
//}

// �f�o�C�X��񂩂�s�b�`�����ȏ�ɂȂ�����Ă΂�鏈���i���̂Ƃ���́j
void AVRActor_ver1::PlayerMoveStart()
{
	//�X�g�b�v���Ă��鎞�̂ݏ���
	if (isStop)
	{
		UKismetSystemLibrary::PrintString(this, TEXT("ugoke2"), true, true, FColor::Blue, 2.0f, NAME_None);
		isStop = false;
		StopPointNum++;
	}
}

// �w�肵���X�v���C���̓_�ɓ��B����ƍs���鏈��
void AVRActor_ver1::ArriveSplinePoint(int point_)
{
	if (SplineActor) // ������null�`�F�b�N
	{
		// �j�A���[�C�R�[�����g�����߂̕ϐ�����
		FVector SplinePoint = SplineActor->Spline->GetLocationAtSplinePoint(point_, ESplineCoordinateSpace::World);
		FTransform ATransform = FTransform(FRotator(0, 0, 0), SplinePoint, FVector(1, 1, 1));
		FVector nowLocation = GetActorLocation();
		FTransform BTransform = FTransform(FRotator(0, 0, 0), nowLocation, FVector(1, 1, 1));

		// �j�A���[�C�R�[�����g���ăL�����N�^�[���~�߂邩�����������f
		bool isNearPointCharacter = UKismetMathLibrary::NearlyEqual_TransformTransform(ATransform, BTransform, 5.0f, 0.0001f, 0.0001f);
		if (isNearPointCharacter)
		{
			isStop = true;
		}
	}
}

// �f�o�C�X��������������TransformEulerAngles���������āAint32�^�ɕϊ����ĕԂ�
int32 AVRActor_ver1::TransformDataToInt32(const uint8_t* Data, int Size)
{
	int32 Result = 0;

	for (int i = 0; i < Size; ++i)
	{
		Result |= (static_cast<int32>(Data[i]) << (8 * (Size - 1 - i)));
	}
	return Result;
}

// �f�o�C�X��������������TransformDataToInt32�ɓ���āA���̌��ʂ�FRotator�ŕԂ�
FRotator AVRActor_ver1::TransformEulerAngles(const uint8_t* Data, int Size)
{
	std::array<int32, 3> Angles;
	Angles[0] = TransformDataToInt32(Data, Size);       // X
	Angles[1] = TransformDataToInt32(Data + 4, Size);   // Y
	Angles[2] = TransformDataToInt32(Data + 8, Size);   // Z

	// FRotator�̈����́i�s�b�`�A���[�A���[���j�̏��Ȃ̂ł���ɂ��킹�Ĕԍ���ς��Ă�
	FRotator ResultRotate = FRotator(Angles[1], Angles[2], Angles[0]);
	return ResultRotate;
}

void AVRActor_ver1::DeviceGoMagic()
{
	GoMagic();
}

void AVRActor_ver1::SpawnMagicChargeEffect()
{
	FVector a = Camera->GetComponentLocation() + FVector(100,0,0);
	if (MagicChargeTime > 1.0f && !alreadyChargingMagicEffect)
	{
		//UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		//	this,
		//	ChargingMagicEffect,									// �G�t�F�N�g
		//	Camera->GetComponentLocation() + FVector(100, 0, 0),	// Location
		//	Camera->GetComponentRotation(),							// Rotation
		//	FVector(1.f),											// Scale
		//	true,													// bAutoDestroy(��{true)
		//	true,													// bAutoActivate
		//	ENCPoolMethod::None,
		//	true													// bPrecullCheck(�J�����O�`�F�b�N)
		//);
		ChargingEffect->SetHiddenInGame(false);
		alreadyChargingMagicEffect = true;
		UKismetSystemLibrary::PrintString(this, TEXT("1secondCHAEGE"), true, false, FColor::Black, 2.0f, NAME_None);
	}
	if (MagicChargeTime > 2.0f && !alreadyChargeFinishMagicEffect)
	{
		//UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		//	this,
		//	ChargeFinishMagicEffect,								// �G�t�F�N�g
		//	Camera->GetComponentLocation() + FVector(100, 0, 0),	// Location
		//	Camera->GetComponentRotation(),							// Rotation
		//	FVector(1.f),											// Scale
		//	true,													// bAutoDestroy(��{true)
		//	true,													// bAutoActivate
		//	ENCPoolMethod::None,
		//	true													// bPrecullCheck(�J�����O�`�F�b�N)
		//);
		ChargeFinishEffect->SetHiddenInGame(false);
		alreadyChargeFinishMagicEffect = true;
	}
}

void AVRActor_ver1::DeviceRotateToAverage()
{
	Average += AverageRotate.Pitch;
	count++;

	if (count == 5) {
		AverageRotate.Pitch = Average / 5;
		Average = 0;
		count = 0;
		UKismetSystemLibrary::PrintString(this, TEXT("count == 5"), true, false, FColor::Purple, 2.0f, NAME_None);
	}
}
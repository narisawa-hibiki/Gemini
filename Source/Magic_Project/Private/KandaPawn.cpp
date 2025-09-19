// Fill out your copyright notice in the Description page of Project Settings.


#include "KandaPawn.h"
#include "InputMappingContext.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "Components/ArrowComponent.h" 
#include "EnhancedInputSubsystems.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"				// �t�@�C���֌W
#include "Misc/FileHelper.h"					// �t�@�C���֌W
#include "HAL/PlatformFilemanager.h"			// �t�@�C���֌W

// Sets default values
AKandaPawn::AKandaPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// StaticMeshComponent��ǉ����ARootComponent�ɐݒ肷��
	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = Sphere;

	// StaticMesh��Laod����StaticMeshComponent��StaticMesh�ɐݒ肷��
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Sphere"));

	// StaticMesh��StaticMeshComponent�ɐݒ肷��
	Sphere->SetStaticMesh(Mesh);

	// Material��StaticMesh�ɐݒ肷��
	UMaterial* Material = LoadObject<UMaterial>(nullptr, TEXT("/Engine/BasicShapes/BasicShapeMaterial"));

	// Material��StaticMeshComponent�ɐݒ肷��
	Sphere->SetMaterial(0, Material);

	// Simulate Physics��L���ɂ���
	Sphere->SetSimulatePhysics(true);

	// SpringArm��ǉ�����
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArm->SetupAttachment(RootComponent);

	// �p�x��ύX���� FRotator(Pitch(Y), Yaw(Z), Roll(X))
	//SpringArm->SetRelativeRotation(FRotator(-30.0f, 0.0f, 0.0f));

	// Spring Arm�̒����𒲐�����
	SpringArm->TargetArmLength = 450.0f;

	// pawn�̊p�x�𗘗p����
	SpringArm->bUsePawnControlRotation = true;

	// SpringArm����̊p�x���p�����Ȃ�
	// SpringArm->bInheritPitch = false;
	// SpringArm->bInheritYaw = false;
	// SpringArm->bInheritRoll = false;

	// Camera��Lag��L���ɂ���
	SpringArm->bEnableCameraLag = true;

	// Camera��ǉ�����
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	Camera->SetupAttachment(SpringArm);

	// Input Mapping Context�uIMC_TestPad�v��ǂݍ���
	DefaultMappingContext = LoadObject<UInputMappingContext>(nullptr, TEXT("/Game/Kanda/Input/IMC_TestPad"));

	// Input Action�uIA_InputMove�v��ǂݍ���
	ControlMove = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_InputMove"));

	// Input Action�uIA_GoMagic�v��ǂݍ���
	ControlMagic = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_GoMagic"));

	// Input Action�uIA_Look�v��ǂݍ���
	LookAction = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_Look"));

	// Arrow��ǉ�����
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	Arrow->SetupAttachment(Camera);

	// Sphere�̓���Ɉړ�����悤��Location��ݒ肷��
	Arrow->SetRelativeLocation(FVector(400.0f, 0.0f, 130.0f));

	// Arrow��\�������悤�ɂ���
	Arrow->bHiddenInGame = false;

	// �e�X�g�p
	{
		test = nullptr;

		// ���ݎ����̎擾
		FDateTime Now = FDateTime::Now();
		FString FormattedTime = Now.ToString(TEXT("%Y_%m_%d__%H_%M"));

		MagicFilePath =
			FPaths::ProjectDir() / TEXT("CSVFile/Export/MagicData_" + FormattedTime + ".csv");
	}
}

// Called when the game starts or when spawned
void AKandaPawn::BeginPlay()
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
}

// Called every frame
void AKandaPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AKandaPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {

		// ControlBall��IA_Control��Triggered��Bind����
		EnhancedInputComponent->BindAction(ControlMove, ETriggerEvent::Triggered, this, &AKandaPawn::ControlPlayer);

		// ControlBall��IA_Control��Triggered��Bind����
		EnhancedInputComponent->BindAction(ControlMagic, ETriggerEvent::Triggered, this, &AKandaPawn::GoMagic);

		// Look��IA_Look��Triggered��Bind����
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AKandaPawn::Look);
	}
}

//�R���g���[���[
void AKandaPawn::ControlPlayer(const FInputActionValue& Value)
{
	// input��Value��Vector2D�ɕϊ��ł���
	const FVector2D V = Value.Get<FVector2D>();

	//���W�ړ�
	FVector PreLocation = GetActorLocation();
	FVector NewLocation = PreLocation + Arrow->GetComponentToWorld().TransformVectorNoScale(FVector(V.Y, V.X, 0.0f) * AddMovePoint);
	SetActorLocation(NewLocation);
}

//���@������
void AKandaPawn::GoMagic(const FInputActionValue& Value)
{
	if (const bool v = Value.Get<bool>() && CanMagic)
	{
		//UE_LOG(LogTemp, Log, TEXT("���@��������YO�I"));//�p�b�P�[�W���̎��ɃG���[���o���̂ŃR�����g�A�E�g
		KandaTestMagic* magic = new KandaTestMagic();
		WritePlayerInfoToCSV(magic);
		delete magic;
	}
}

// �J�����R���g���[���[
void AKandaPawn::Look(const FInputActionValue& Value)
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

		// controller��Pitch�̊p�x�𐧌�����
		double LimitPitchAngle = FMath::ClampAngle(controlRotate.Pitch, -40.0f, -10.0f);

		// PlayerController�̊p�x��ݒ肷��
		UGameplayStatics::GetPlayerController(this, 0)->SetControlRotation(FRotator(controlRotate.Pitch, controlRotate.Yaw, 0.0f));
	}
}

// csv�t�@�C���o��
void AKandaPawn::WritePlayerInfoToCSV(KandaTestMagic* m_)
{
	FString MagicName = m_->MagicName();

	// CSV�ɏ������ޓ��e
	FString CSVContent = MagicName + TEXT(",")  + TEXT("\n");

	// �t�@�C���̑��݂��m�F���A���݂��Ȃ��ꍇ�̓w�b�_�[�s��ǉ�
	if (!FPaths::FileExists(MagicFilePath))
	{
		CSVContent = TEXT("MagicName\n") + CSVContent;
	}

	// �t�@�C���ɓ��e����������
	FFileHelper::SaveStringToFile(CSVContent, *MagicFilePath, FFileHelper::EEncodingOptions::AutoDetect,
		&IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}
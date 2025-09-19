// Fill out your copyright notice in the Description page of Project Settings.


#include "Kanda/VRActor_ver2.h"
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

// Sets default values
AVRActor_ver2::AVRActor_ver2():
	magicCnt(0)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// StaticMeshComponent��ǉ����ARootComponent�ɐݒ肷��
	Player = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = Player;

	// SphereComponent��ǉ����ABoxComponent��RootComponent��Attach����
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	Sphere->SetupAttachment(RootComponent);

	// Sphere�̃T�C�Y��ݒ肷��
	Sphere->SetSphereRadius(30.f);

	// Sphere�̈ʒu�𒲐�����
	Sphere->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f), false);

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AVRActor_ver2::OnSphereBeginOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &AVRActor_ver2::OnSphereEndOverlap);

	// Camera��ǉ�����
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	Camera->SetupAttachment(RootComponent);

	// Input Mapping Context�uIMC_TestPad�v��ǂݍ���
	DefaultMappingContext = LoadObject<UInputMappingContext>(nullptr, TEXT("/Game/Kanda/Input/IMC_TestPad"));

	// Input Action�uIA_SelectMagic�v��ǂݍ���
	ControlSelectMagic = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_SelectMagic"));

	// Input Action�uIA_GoMagic�v��ǂݍ���
	ControlMagic = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_GoMagic"));

	// Input Action�uIA_Look�v��ǂݍ���
	LookAction = LoadObject<UInputAction>(nullptr, TEXT("/Game/Kanda/Input/IA_Look"));

	{
		// Arrow��ǉ�����
		Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
		Arrow->SetupAttachment(RootComponent);

		// Sphere�̓���Ɉړ�����悤��Location��ݒ肷��
		Arrow->SetRelativeLocation(FVector(400.0f, 0.0f, 130.0f));

		// Arrow��\�������悤�ɂ���
		Arrow->bHiddenInGame = true;
	}
}

// Called when the game starts or when spawned
void AVRActor_ver2::BeginPlay()
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
void AVRActor_ver2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRActor_ver2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {

		// ControlBall��IA_Control��Triggered��Bind����
		EnhancedInputComponent->BindAction(ControlMagic, ETriggerEvent::Triggered, this, &AVRActor_ver2::GoMagic);

		// Look��IA_Look��Triggered��Bind����
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AVRActor_ver2::Look);

		// AddMagic��IA_SelectMagic��Triggered��Bind����
		EnhancedInputComponent->BindAction(ControlSelectMagic, ETriggerEvent::Triggered, this, &AVRActor_ver2::AddMagicCnt);
	}
}

void AVRActor_ver2::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){

}

void AVRActor_ver2::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

}

void AVRActor_ver2::CreateMagic(UNiagaraSystem* Ef_Flying_, UNiagaraSystem* Ef_Destroy_, float s_) {

	// �G�t�F�N�g��null�Ȃ珈���Ȃ�
	if (Ef_Flying_ == nullptr || Ef_Destroy_ == nullptr) return;

	// ���@�A�N�^�[�𐶐�
	{
		FRotator look = GetControlRotation();
		FVector pos = GetActorLocation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AOnishi_MagicLauncher* magic =
			GetWorld()->SpawnActor<AOnishi_MagicLauncher>(AOnishi_MagicLauncher::StaticClass(), pos, look); // �X�|�[������

		magic->MoveSpeed *= s_;
		magic->LaunchMagic(look.Vector(), pos, Ef_Flying_, Ef_Destroy_);
	}
}

void AVRActor_ver2::GoMagic(const FInputActionValue& Value) {

	if (const bool v = Value.Get<bool>()) {

		const int cnt = magicCnt;

		if (cnt >= flyNiagaras.Num()) { return; }
		if (cnt >= deathNiagaras.Num()) { return; }

		UNiagaraSystem* f = flyNiagaras[magicCnt];
		UNiagaraSystem* d = deathNiagaras[magicCnt];

		CreateMagic(f, d);
	}
}

void AVRActor_ver2::Look(const FInputActionValue& Value) {

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

		// �ړ��������w�肷��
		FRotator ArrowRotate = FRotator(0, controlRotate.Yaw, 0);
		Arrow->SetWorldRotation(ArrowRotate);
	}
}

void AVRActor_ver2::AddMagicCnt(const FInputActionValue& Value) {

	if (const bool v = Value.Get<bool>()) {

		magicCnt++;

		UKismetSystemLibrary::PrintString(GEngine->GetWorld(), "mag");

		// ���@�J�E���^�[���G�t�F�N�g�̎�ނ��傫���Ȃ�����ŏ��ɖ߂�
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Magic/Onishi_MagicLauncher.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/SphereComponent.h"
#include "TimerManager.h"
#include "NiagaraFunctionLibrary.h"
#include "Magic/Onishi_MagicCircleParent.h"
#include "Kanda/VRActor_ver1.h"

// Sets default values
AOnishi_MagicLauncher::AOnishi_MagicLauncher()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ������
	DestroyEffect = nullptr;
	_NiagaraComponent = nullptr;

	// StaticMeshComponent��ǉ����ARootComponent�ɐݒ肷��
	Magic = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = Magic;

	//�X�t�B�A�R���W�����쐬
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetCollisionProfileName("OverlapAll");
	SphereComponent->SetupAttachment(RootComponent);
	SphereComponent->SetSphereRadius(50.0f);

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AOnishi_MagicLauncher::OnHit);


	SphereComponent->SetHiddenInGame(false);
	SphereComponent->SetVisibility(true);
}

// Called when the game starts or when spawned
void AOnishi_MagicLauncher::BeginPlay()
{
	Super::BeginPlay();

	{
		FVector PreloadDirection = -GetActorForwardVector();
		FVector PreloadLocation = GetActorLocation();
		UNiagaraSystem* PreloadFlyingEffect = FlyingEffect;
		UNiagaraSystem* PreloadDestroyEffect = DestroyEffect;

		LaunchMagic(PreloadDirection, PreloadLocation, PreloadFlyingEffect, PreloadDestroyEffect);
	}
#if false
	// �ǋL_5_16
	{
		//�j��܂ł̃^�C�}�[���n�߂�i3�ڂ̈����Ŏw��i�P�ʂ͕b�j�j
		FTimerHandle DestroyTimerHandle;
		GetWorldTimerManager().SetTimer(DestroyTimerHandle, this, &AOnishi_MagicLauncher::HandleAutoDestroy, 2.0f, false);

		//�ŏ��̈ʒu������
		SetActorLocation(StartLocation);

		//��ԃG�t�F�N�g�̍Đ�
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(),
			FlyingEffect,
			GetActorLocation(),
			FRotator(0, -90, 0)
		);
	}
#endif
}

// Called every frame
void AOnishi_MagicLauncher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//�����őO�ɐi��
	FVector NewLocation = GetActorLocation() + (MoveDirection.GetSafeNormal() * MoveSpeed * DeltaTime);

	SetActorLocation(NewLocation);

	// RootComponent�ɕ����Ĕ�΂�
	MoveMagic();
}

void AOnishi_MagicLauncher::LaunchMagic(FVector Facing, FVector NowLocation, UNiagaraSystem* Ef_Flying, UNiagaraSystem* Ef_Destroy) {
	MoveDirection = Facing;
	StartLocation = NowLocation;
	DestroyEffect = Ef_Destroy;

	// �ǋL_5_16
	{
		CreateMagicEffect(Ef_Flying);

		//�j��܂ł̃^�C�}�[���n�߂�i3�ڂ̈����Ŏw��i�P�ʂ͕b�j�j
		FTimerHandle DestroyTimerHandle;
		GetWorldTimerManager().SetTimer(DestroyTimerHandle, this, &AOnishi_MagicLauncher::HandleAutoDestroy, 2.0f, false);
	}
}

void AOnishi_MagicLauncher::CreateMagicEffect(UNiagaraSystem* Effect) {

	// �t�@�C�����w�肳��ĂȂ���Ώ����Ȃ�
	if (Effect == nullptr) { return; }

	UNiagaraSystem* ns = Effect;

	// �R���|�[�l���g�Ƃ���NiagaraComponent��ǉ�
	_NiagaraComponent = NewObject<UNiagaraComponent>(this);
	// �R���|�[�l���g��NiagaraSystem���Z�b�g���āA�V�[���ɒǉ�
	_NiagaraComponent->SetAsset(ns);
	_NiagaraComponent->RegisterComponent();

	// �ʒu�Ȃǂ̐ݒ肪����΁ATransform��ݒ�
	FRotator rotation = GetActorRotation();
	FVector location = GetActorLocation();

	_NiagaraComponent->SetWorldLocation(location);
	_NiagaraComponent->SetWorldRotation(rotation + FRotator(0, -90, 0));

	_NiagaraComponent->SetupAttachment(RootComponent);

	// �G�t�F�N�g�̍Đ�
	_NiagaraComponent->Activate();
}

void AOnishi_MagicLauncher::HandleAutoDestroy()
{
	// �G�t�F�N�g�Đ��i����΁j
	if (DestroyEffect)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(),
			DestroyEffect,
			GetActorLocation(),
			MoveDirection.Rotation()
		);
	}

	DebugLogLocation(this, FColor::Blue);

	// �A�N�^�[���폜
	Destroy();
}

void AOnishi_MagicLauncher::MoveMagic(){

	if (_NiagaraComponent == nullptr) { return; }

	// �ʒu�Ȃǂ̐ݒ肪����΁ATransform��ݒ�
	FRotator rotation = GetActorRotation();
	FVector location = GetActorLocation();

	_NiagaraComponent->SetWorldLocation(location);
	_NiagaraComponent->SetWorldRotation(rotation + FRotator(0, -90, 0));

}

void AOnishi_MagicLauncher::DebugLogLocation(AActor* a_, FColor c)
{
	if (a_ == nullptr) { return; }

	/*UKismetSystemLibrary::PrintString(
		this,
		a_->GetActorLocation().ToString(),
		true,
		true,
		c,
		2.0f
	);*/
}

void AOnishi_MagicLauncher::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult) {

	if (OtherActor->IsA(AVRActor_ver1::StaticClass())) {
		return;
	}
	else if (OtherActor->IsA(AOnishi_MagicCircleParent::StaticClass())) {
		//UKismetSystemLibrary::PrintString(
		//	this,
		//	TEXT("MagicCircleHit"),
		//	true,
		//	true,
		//	FColor::Blue,
		//	2.0f
		//);
		return;
	}
	else {
			HandleAutoDestroy();
			if (CollisionEffect)
			{
				UNiagaraFunctionLibrary::SpawnSystemAtLocation(
					GetWorld(),
					CollisionEffect,
					GetActorLocation(),
					MoveDirection.Rotation()
				);
			}
			//UKismetSystemLibrary::PrintString(
			//	this,
			//	TEXT("HIT"),
			//	true,
			//	true,
			//	FColor::Red,
			//	2.0f
			//);
	}
}
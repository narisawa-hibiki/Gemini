// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"// �ǋL
#include "Components/StaticMeshComponent.h"
#include "Onishi_MagicLauncher.generated.h"

UCLASS()
class MAGIC_PROJECT_API AOnishi_MagicLauncher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOnishi_MagicLauncher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 100.0f; // cm/s

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	/*FVector MoveDirection = FVector(1.0, 0.0, 0.0);*/
	//���������� 5_16
	FVector MoveDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UNiagaraSystem* DestroyEffect;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Movement")
	/*FVector StartLocation = FVector(0, 0, 0);*/ 
	//���������� 5_16
	FVector StartLocation;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Effects")
	UNiagaraSystem* FlyingEffect;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UNiagaraSystem* CollisionEffect;

	//�X�t�B�A�R���W����
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* SphereComponent;

	// �ǋL
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UNiagaraComponent* _NiagaraComponent;

	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> Magic;
public:
	UFUNCTION()
	void HandleAutoDestroy();

	///<summary>
	///���@�𔭎˂���Ƃ��ɌĂяo��
	///����/���݈ʒu/���@�̃G�t�F�N�g���w��
	///</summary>
	UFUNCTION()
	void LaunchMagic(FVector Facing, FVector NowLocation, UNiagaraSystem* Ef_Flying, UNiagaraSystem* Ef_Destroy);

private:

	// ----------------------
	// �ǋL_5_16

	// �v���C���[���琶������閂�@�̃G�t�F�N�g
	void CreateMagicEffect(UNiagaraSystem* Effect);

	void MoveMagic();

	// �f�o�b�O
	void DebugLogLocation(AActor* a_, FColor c);

	// ���@���ǂɏՓ˂����Ƃ��̏���
	UFUNCTION()
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);
};
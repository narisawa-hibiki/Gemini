// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "Onishi_MagicCircleParent.generated.h"


UCLASS()
class MAGIC_PROJECT_API AOnishi_MagicCircleParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOnishi_MagicCircleParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//�X�t�B�A�R���W����
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* SphereComponent;

	//�I�[�o�[���b�v�����ۂ̏����������֐�
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	//�I�[�o�[���b�v���甲�����ۂ̏����������֐�
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);

	// ���@�̎ˌ���
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Effects")
	int magicCnt;

	//���@�w�Ƃ��ẴG�t�F�N�g
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	UNiagaraSystem* Ef_MagicCircle;

	//�I�[�o�[���b�v�����v���C���[�̃A�N�^�[��ۑ�
	UPROPERTY()
	AActor* OverlappingActor;

	//��΂����@�̃G�t�F�N�g
	UPROPERTY(EditAnywhere,BluePrintReadWrite,Category="Effects")
	TArray<UNiagaraSystem*> Ef_MagicFly;

	//���@����񂾌�Ō�ɏo��G�t�F�N�g
	UPROPERTY(EditAnywhere,BluePrintReadWrite,Category="Effects")
	TArray<UNiagaraSystem*> Ef_Destroy; 

	//�����w����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magic Circle Status")
	bool bIsPlayerOverlapping;
};

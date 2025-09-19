// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InputActionValue.h"
#include "Magic/Onishi_MagicCircleParent.h"
#include "Kanda/MagicDataTable.h"
#include "VRActor_ver2.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UArrowComponent;
class UInputMappingContext;
class UInputAction;
class USphereComponent;

UCLASS()
class MAGIC_PROJECT_API AVRActor_ver2 : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRActor_ver2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	/** Character�p��StaticMesh : Sphere */
	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> Player;

	UPROPERTY(VisibleAnywhere, Category = Collider, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USphereComponent> Sphere;

	UPROPERTY(VisibleAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> Camera;

	// �R���g���[���[�̃}�b�s���O
	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> ControlSelectMagic;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> ControlMagic;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(VisibleAnywhere, Category = Control, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UArrowComponent> Arrow;

public:
	UFUNCTION()
	void CreateMagic(UNiagaraSystem* Ef_Flying_, UNiagaraSystem* Ef_Destroy_, float MagicSpeed = 10.f);

	//���ł���Ƃ��̃G�t�F�N�g
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Effects")
	TArray<UNiagaraSystem*> flyNiagaras;

	//�j�󎞂̃G�t�F�N�g
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Effects")
	TArray<UNiagaraSystem*> deathNiagaras;

private:

	// �ڐG����̏����A�R���C�_�[���m���ڐG�����Ƃ��ɌĂяo�����
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// �ڐG����̏����A�R���C�_�[���m�����ꂽ�Ƃ��ɌĂяo�����
	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:

	//���@�R���g���[��
	void GoMagic(const FInputActionValue& Value);

	// �J�����R���g���[��
	void Look(const FInputActionValue& Value);

	// �J�E���^�[�̏���
	void AddMagicCnt(const FInputActionValue& Value);

private:

	// �J�E���^�[
	int magicCnt;

	//----------------------------------------
	// csv�p
	//----------------------------------------

	//FString MagicFilePath;

	// csv�t�@�C���o��
	//void WritePlayerInfoToCSV(AActor* m_);

public:
	// ���@���s�t���O
	bool CanMagic = true;//�Ƃ肠����
};


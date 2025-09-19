// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kanda/KandaTestMagic.h"				// �e�X�g�p���@�N���X
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "KandaPawn.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UArrowComponent;
class UInputMappingContext; 
class UInputAction;

UCLASS()
class MAGIC_PROJECT_API AKandaPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AKandaPawn();

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
	TObjectPtr<UStaticMeshComponent> Sphere;

	/** Camera��z�u���邽�߂�SpringArm */
	UPROPERTY(VisibleAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> SpringArm;

	/** SpringArm�̐�[�ɔz�u����J���� */
	UPROPERTY(VisibleAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> ControlMove;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> ControlMagic;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(VisibleAnywhere, Category = Control, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UArrowComponent> Arrow;

protected:

	//player�R���g���[��
	void ControlPlayer(const FInputActionValue& Value);

	//���@�R���g���[��
	void GoMagic(const FInputActionValue& Value);

	// �J�����R���g���[��
	void Look(const FInputActionValue& Value);

	// csv�t�@�C���o��
	void WritePlayerInfoToCSV(KandaTestMagic* m_);

private:
		// �ړ��{��
		float AddMovePoint = 10.0f;

		// ���@���s�t���O
		bool CanMagic = true;//�Ƃ肠����

		KandaTestMagic* test;
		FString MagicFilePath;
};

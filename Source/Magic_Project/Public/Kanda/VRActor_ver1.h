// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InputActionValue.h"
#include "Magic/Onishi_MagicCircleParent.h"
#include "Kanda/MagicDataTable.h"
#include "sato/PlayerWayRoad.h"
#include "ASerialCom/Public/ASerialLibControllerWin.h"
#include "ASerialCom/Public/ASerialCore/ASerialPacket.h"
#include "sato/MagicDeviceCmdSender.h"
#include "Sound/SoundBase.h"
#include "NiagaraSystem.h"
#include "Sato/DeviceThreadManager.h"
#include "VRActor_ver1.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UArrowComponent;
class UInputMappingContext;
class UInputAction;
class USphereComponent;

UCLASS()
class MAGIC_PROJECT_API AVRActor_ver1 : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRActor_ver1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Finalize�����̊֐�
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:

	/** Character�p��StaticMesh : Sphere */
	UPROPERTY(VisibleAnywhere, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> Player;

	UPROPERTY(VisibleAnywhere, Category = Collider, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USphereComponent> Sphere;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> Arrow;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> Sphere_HandTest;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UNiagaraComponent> ChargingEffect;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UNiagaraComponent> ChargeFinishEffect;

	// �R���g���[���[�̃}�b�s���O
	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> ControlMove;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> MagicCharge;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> ControlMagic;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditAnywhere, Category = Input, meta = (AllowPrivateAccses = "true"))
	TObjectPtr<UInputAction> MoveStart;

	// ���ʉ�
	UPROPERTY(EditAnywhere, Category = Sound)
	USoundBase* NormalMagicSound;

	UPROPERTY(EditAnywhere, Category = Sound)
	USoundBase* ChargeMagicSound;

	UPROPERTY(EditAnywhere, Category = Sound)
	USoundBase* ChargeFinishSound;

	UPROPERTY(EditAnywhere, Category = Sound)
	USoundBase* HandUpSound;

	UPROPERTY(EditAnywhere, Category = Sound)
	USoundBase* HandDownSound;

	// �G�t�F�N�g
	UPROPERTY(EditAnywhere, Category = Niagara)
	UNiagaraSystem* HandStar;

	UPROPERTY(EditAnywhere, Category = Niagara)
	UNiagaraSystem* ChargingMagicEffect;
	
	UPROPERTY(EditAnywhere, Category = Niagara)
	UNiagaraSystem* ChargeFinishMagicEffect;

protected:
	//�X�v���C���A�N�^�[�i�[�p
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplineActorHere")
	TObjectPtr<APlayerWayRoad> SplineActor;

private:
	// �f�o�C�X�p
	//UPROPERTY()
	//UASerialLibControllerWin* device_;

	//UPROPERTY()
	//UASerialPacket* deviceInfo_;

	//UPROPERTY()
	//AMagicDeviceCmdSender* deviceCmd_;

	UPROPERTY()
	UDeviceThreadManager* DeviceManager_;

	UFUNCTION()
	void DeviceRotateToAverage();

	// �f�o�C�X�̏�������ƃI�C���[�p���擾�ł���֐�
	// TransformDataToInt32��TransformEulerAngles�̂��߂ɍ��ꂽ�֐��ł��B
	// �g���ۂ�TransformEulerAngles�Ƀf�o�C�X�̏�������΂��̂܂܎g���܂��B
	int32 TransformDataToInt32(const uint8_t* Data, int Size);
	FRotator TransformEulerAngles(const uint8_t* Data, int Size);


	// �ʐM�������x�����p�̕ϐ�
	// Interval = 1.0f / xx.xf;�ŉ�fps�������ł���
	float TimeAccumulator = 0.0f;
	const float Interval = 1.0f / 30.0f;

public:
	UFUNCTION()
	void CreateMagic(UNiagaraSystem* Ef_Flying_, UNiagaraSystem* Ef_Destroy_, float MagicSpeed = 10.f);

	void SetMagicData(TSharedPtr<MagicDataTable> m_, AOnishi_MagicCircleParent* o_);

private:

	// �ڐG����̏����A�R���C�_�[���m���ڐG�����Ƃ��ɌĂяo�����
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// �ڐG����̏����A�R���C�_�[���m�����ꂽ�Ƃ��ɌĂяo�����
	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:

	//player�R���g���[��
	void ControlPlayer(const FInputActionValue& Value);

	// ���@�̃`���[�W
	void ChargeMagic();
	void MouseChargeMagic(const FInputActionValue& Value);

	//���@�R���g���[��
	void GoMagic();

	// �J�����R���g���[��
	void Look(const FInputActionValue& Value);

	// �v���C���[�̈ړ��J�n
	//void kariPlayerMoveStart(const FInputActionValue& Value);
	UFUNCTION(BlueprintCallable)
	void PlayerMoveStart();

public:

	// �X�R�A
	UPROPERTY(BlueprintReadWrite)
	int Magic_Score;

private:
	// �ړ��{��
	float MoveSpeedPoint = 30.0f;

	// �ړ�����
	FRotator MoveRotator;

	// �X�v���C���p�ϐ�
	float distance;

	// ���܈ړ��ł��邩�ǂ����Btrue�Œ�~���B
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool isStop = true;


	// [��Փx�Ǘ�]�r���ǂꂾ���グ��K�v�����邩
	float ArmUpAngle;

	// �r���グ����������
	int ArmUpDownCnt = 0;

	// [��Փx�Ǘ�]�ړ��ɕK�v�Șr���グ���������
	int Need_ArmUpDownCnt;

	// ���r���グ�Ă��邩�����Ă��邩�Btrue�ŏグ�Ă���B
	bool IsArmUp = false;

	// ���@�̃`���[�W���̃G�t�F�N�g�p�̕ϐ�
	bool alreadyChargingMagicEffect = false;
	bool alreadyChargeFinishMagicEffect = false;

	//
	int count;
	float Average;

	// �f�o�C�X�����������A���ǂꂾ���̊p�x�������Ă��邩��\���ϐ�
	FRotator Final_Device_Rotate;

	// Final_Device_Rotate�̑O�g�ł���ϐ��B���ς��Ƃ邽��
	FRotator AverageRotate;

	// �X�v���C����̓_�Ŏ~�܂邽�߂ɔԍ����w�肷��ϐ��i���݂͎����Ŏw��j
	int StopPointNum = 1;

	void DebugLogLocation(AActor* a_, FColor c);

	// ���@�̃f�[�^�Ǘ��p
	TSharedPtr<MagicDataTable> magicData;

	// ���@�w�̃|�C���^
	AOnishi_MagicCircleParent* circle;

	// ���@�����߂����Ԃ��v��
	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float MagicChargeTime = 0.0f;

	// ���@���`���[�W���Ă�Ƃ��ɃG�t�F�N�g���o���֐�
	void SpawnMagicChargeEffect();

	// VR�@��̏��
	void VRInformation();

	// �X�v���C���̎w�肵���_�ɒ�������s������
	void ArriveSplinePoint(int point_);

	// �f�o�C�X�Ŗ��@�������
	void DeviceGoMagic();

	void ResetCharged();

	//----------------------------------------
	// csv�p
	//----------------------------------------
	FString MagicFilePath;

	// csv�t�@�C���o��
	void WritePlayerInfoToCSV(AActor* m_);

public:
	// ���@���s�t���O

	/// <summary>
	/// �Ƃ肠����
	/// </summary>
	bool CanMagic = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Settings")
	bool IsInMagicZone = false;

	//�����w����
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Magic")
	bool bIsPlayerOverlapping = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Charged")
	bool Charged = false;
};

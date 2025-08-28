// Source/SweetProject/Public/narisawaBranch/DeviceActor.h �̓��e������ŏ㏑��

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

// ������ �v���O�C���̃w�b�_���C���N���[�h ������
#include "ASerialLibControllerWin.h"

#include "DeviceActor.generated.h"

// �O���錾
class ASerialLibControllerWin;
class WindowsSerial;

UCLASS()
class SWEETPROJECT_API ADeviceActor : public AActor
{
	GENERATED_BODY()

public:
	ADeviceActor();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	// ASerial���C�u�����̃C���X�^���X
	TUniquePtr<ASerialLibControllerWin> device;
	TUniquePtr<WindowsSerial> SerialInterface;
	bool bIsDeviceConnected = false;

	// ��M�����o�C�g�f�[�^��FRotator�ɕϊ�����w���p�[�֐�
	FRotator TransformQuaterAngles(const uint8* data);

public:
	// �v�Z��̍ŏI�I�ȉ�]�l���i�[����ϐ�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Device Data")
	FRotator Final_Device_Rotate;
};
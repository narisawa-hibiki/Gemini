// Source/SweetProject/Public/narisawaBranch/DeviceActor.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/Queue.h" // TQueue�̎g�p�ɕK�v
#include "DeviceActor.generated.h"

// �O���錾
class UASerialLibControllerWin;
class FRunnableThread;
class WindowsSerial;

// �X���b�h�ƃ��C���X���b�h�ԂŃf�[�^�����S�Ɏ󂯓n�����߂̍\����
// �w�b�_�t�@�C������TQueue�̌^�Ƃ��Ďg�p���邽�߁AUCLASS�̑O�ɒ�`���܂�
struct FSerialData
{
	uint8 command;
	TArray<uint8> data;
};

UCLASS()
class SWEETPROJECT_API ADeviceActor : public AActor
{
	GENERATED_BODY()

public:
	ADeviceActor();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Device Data")
	FVector2D DevicePoseXY;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Device Data")
	float DeviceAcceleration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Device Data")
	int32 ButtonState;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	void ProcessReceivedData(const FSerialData& Data);

	UPROPERTY()
	TObjectPtr<UASerialLibControllerWin> SerialController;

	WindowsSerial* SerialInterface;
	class FDeviceCommunicationTask* CommunicationTask;
	FRunnableThread* CommunicationThread;
	TQueue<FSerialData, EQueueMode::Spsc> DataQueue;
	bool bIsDeviceConnected;
};
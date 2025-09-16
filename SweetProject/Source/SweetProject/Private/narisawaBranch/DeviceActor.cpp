// Source/SweetProject/Private/narisawaBranch/DeviceActor.cpp

#include "narisawaBranch/DeviceActor.h"
#include "ASerialLibControllerWin.h"
#include "WindowsSerial/WindowsSerial.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "ASerialCore/ASerialPacket.h"

//----------------------------------------------------------------------
// 1. �ʐM�X���b�h�̎��� (���̃t�@�C���������Ŏg�p)
//----------------------------------------------------------------------
class FDeviceCommunicationTask : public FRunnable
{
public:
	FDeviceCommunicationTask(UASerialLibControllerWin* InController, TQueue<FSerialData, EQueueMode::Spsc>* InDataQueue)
		: SerialController(InController), DataQueue(InDataQueue), bIsRunning(true)
	{
	}

	// �X���b�h�̃��C������
	virtual uint32 Run() override
	{
		// �擾�������R�}���h�̃��X�g
		const TArray<uint8> CommandsToProcess = { 0x31, 0x32, 0x33 };

		for (int32 i = 0; i < CommandsToProcess.Num(); ++i)
		{
			// �X���b�h�̒�~�v��������΁A���[�v�𔲂���
			if (!bIsRunning) break;

			const uint8 Command = CommandsToProcess[i];

			// �R�}���h�𑗐M���A������҂�
			if (SerialController->WriteData(Command) == 0)
			{
				ASerialDataStruct::ASerialData ReceivedData;
				if (SerialController->ReadData(&ReceivedData) == 1)
				{
					// ���������猋�ʂ����C���X���b�h�ɓn��
					FSerialData DataToQueue;
					DataToQueue.command = ReceivedData.command;
					DataToQueue.data.Append(ReceivedData.data, ReceivedData.data_num);
					DataQueue->Enqueue(DataToQueue);
				}
			}

			// �Ō�̃R�}���h�łȂ���΁A2�b�ԑҋ@����
			if (bIsRunning && i < CommandsToProcess.Num() - 1)
			{
				FPlatformProcess::Sleep(2.0f);
			}
		}

		// �S�Ă̏������I�������A�X���b�h�͎����I�ɏI������
		return 0;
	}

	virtual void Stop() override
	{
		bIsRunning = false;
	}

private:
	UASerialLibControllerWin* SerialController;
	TQueue<FSerialData, EQueueMode::Spsc>* DataQueue;
	FThreadSafeBool bIsRunning;
};

//----------------------------------------------------------------------
// 2. DeviceActor�̎���
//----------------------------------------------------------------------

ADeviceActor::ADeviceActor()
{
	PrimaryActorTick.bCanEverTick = true;
	bIsDeviceConnected = false;
}

void ADeviceActor::BeginPlay()
{
	Super::BeginPlay();

	SerialController = NewObject<UASerialLibControllerWin>(this);
	SerialInterface = new WindowsSerial();
	SerialController->Initialize(0x10, 0x01);
	SerialController->SetInterfacePt(SerialInterface);

	if (SerialController->AutoConnectDevice() == ConnectResult::Succ)
	{
		bIsDeviceConnected = true;
		UE_LOG(LogTemp, Log, TEXT("Device connected successfully."));

		FPlatformProcess::Sleep(2.0f); // �f�o�C�X�N���҂�
		SerialController->WriteData(0x30); // LED�_��
		FPlatformProcess::Sleep(2.0f); // LED�R�}���h�����҂�

		// �ʐM�X���b�h���J�n
		CommunicationTask = new FDeviceCommunicationTask(SerialController, &DataQueue);
		CommunicationThread = FRunnableThread::Create(CommunicationTask, TEXT("DeviceCommunicationThread"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to auto-connect to device."));
	}
}

void ADeviceActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// �X���b�h�����S�ɒ�~�E�j��
	if (CommunicationTask)
	{
		CommunicationTask->Stop();
		if (CommunicationThread)
		{
			CommunicationThread->WaitForCompletion();
			delete CommunicationThread;
			CommunicationThread = nullptr;
		}
		delete CommunicationTask;
		CommunicationTask = nullptr;
	}

	if (SerialController && bIsDeviceConnected)
	{
		SerialController->DisConnectDevice();
	}

	if (SerialInterface)
	{
		delete SerialInterface;
		SerialInterface = nullptr;
	}

	Super::EndPlay(EndPlayReason);
}

void ADeviceActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsDeviceConnected) return;

	// �X���b�h�����M�����f�[�^������
	FSerialData Data;
	while (DataQueue.Dequeue(Data))
	{
		ProcessReceivedData(Data);
	}
}

void ADeviceActor::ProcessReceivedData(const FSerialData& Data)
{
	UE_LOG(LogTemp, Log, TEXT("SUCCESS: Data received for command 0x%X, length: %d"), Data.command, Data.data.Num());

	switch (Data.command)
	{
	case 0x31: // �p��
		if (Data.data.Num() == 8)
		{
			FMemory::Memcpy(&DevicePoseXY, Data.data.GetData(), 8);
			UE_LOG(LogTemp, Log, TEXT("  -> Pose XY: X=%.3f, Y=%.3f"), DevicePoseXY.X, DevicePoseXY.Y);
		}
		break;
	case 0x32: // �����x
		if (Data.data.Num() == 4)
		{
			FMemory::Memcpy(&DeviceAcceleration, Data.data.GetData(), 4);
			UE_LOG(LogTemp, Log, TEXT("  -> Acceleration: %.3f"), DeviceAcceleration);
		}
		break;
	case 0x33: // �{�^��
		if (Data.data.Num() == 1)
		{
			ButtonState = static_cast<int32>(Data.data[0]);
			UE_LOG(LogTemp, Log, TEXT("  -> Button State: %d"), ButtonState);
			UE_LOG(LogTemp, Log, TEXT("All commands finished."));
		}
		break;
	}
}
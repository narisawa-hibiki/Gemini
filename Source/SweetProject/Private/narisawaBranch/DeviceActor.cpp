// Source/SweetProject/Private/narisawaBranch/DeviceActor.cpp �̓��e������ŏ㏑��

#include "narisawaBranch/DeviceActor.h"

// ������ �K�v�ȃ��C�u�����̃w�b�_�����ׂăC���N���[�h ������
#include "WindowsSerial/WindowsSerial.h"
#include "ASerialCore/ASerialPacket.h"

ADeviceActor::ADeviceActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADeviceActor::BeginPlay()
{
	Super::BeginPlay();

	// �d�l�ʂ�A�f�o�C�XID:10, �o�[�W����:1 �ŃC���X�^���X�𐶐�
	device = MakeUnique<ASerialLibControllerWin>(0x10, 0x01);
	SerialInterface = MakeUnique<WindowsSerial>();
	device->SetInterfacePt(SerialInterface.Get());

	const int32 ConnectedComPort = device->AutoConnectDevice();

	if (ConnectedComPort != -1)
	{
		bIsDeviceConnected = true;
		UE_LOG(LogTemp, Log, TEXT("Device Connection Successful on COM %d"), ConnectedComPort);
	}
	else
	{
		bIsDeviceConnected = false;
		UE_LOG(LogTemp, Warning, TEXT("Device Connection Failed."));
	}
}

void ADeviceActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsDeviceConnected || !device.IsValid())
	{
		return;
	}

	// --- �������炪����{�̃R�[�h�̃��W�b�N�ł� ---

	// 1. �f�o�C�X�ɃR�}���h(0x31)�𑗐M
	device->WriteData(0x31);

	// 2. �f�[�^����M
	ASerialDataStruct::ASerialData ReceiveData;
	int Result = device->ReadDataProcess(&ReceiveData);

	// �������������f�o�b�O��񁁁���������
	uint16 a = device->GetLastErrorCode(); // uint16t �� uint16 �ɏC��
	UE_LOG(LogTemp, Log, TEXT("ErrorCode     = %X"), a);
	UE_LOG(LogTemp, Log, TEXT("deviceCONNECT = %d"), Result);
	// �������������f�o�b�O��񁁁���������

	// 3. ��M�������̂݃f�[�^������
	if (Result == 1)
	{
		// �R�}���h��0x20�ŁA�f�[�^�����\�����`�F�b�N
		if (ReceiveData.command == 0x20 && ReceiveData.data_num >= 4) // �N�H�[�^�j�I��(float*4=16�o�C�g)�ł����A����{�ɍ��킹data_num>=4�Ƃ��Ă��܂�
		{
			// 4. �f�o�C�X��������������FRotator�ɕϊ�
			FRotator Device_Rotate = TransformQuaterAngles(ReceiveData.data);

			// 5. 1000�{����Ă���̂�1000�Ŋ������l���ŏI�I�Ȓl�ɂ���
			Final_Device_Rotate = FRotator(Device_Rotate.Pitch / 1000.0f, Device_Rotate.Yaw / 1000.0f, Device_Rotate.Roll / 1000.0f);

			// --- ����{�̃��O�\�����Č� ---
			UE_LOG(LogTemp, Log, TEXT("Final_Device_Rotate.Pitch = %.3f"), Final_Device_Rotate.Pitch);
			UE_LOG(LogTemp, Log, TEXT("Final_Device_Rotate.Yaw   = %.3f"), Final_Device_Rotate.Yaw);
			UE_LOG(LogTemp, Log, TEXT("Final_Device_Rotate.Roll  = %.3f"), Final_Device_Rotate.Roll);
		}
	}
}

// �f�[�^�ϊ��֐��i����{��TransformQuaterAngles�ɑ����j
FRotator ADeviceActor::TransformQuaterAngles(const uint8* data)
{
	FQuat rotationQuat;
	// �������R�s�[�Ńo�C�g�z���FQuat�ɕϊ�
	FMemory::Memcpy(&rotationQuat, &data[0], sizeof(FQuat));
	// FQuat��FRotator�ɕϊ����ĕԂ�
	return rotationQuat.Rotator();
}

void ADeviceActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (device.IsValid() && bIsDeviceConnected)
	{
		device->DisConnectDevice();
	}
	Super::EndPlay(EndPlayReason);
}
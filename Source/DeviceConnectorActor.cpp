#include "narisawaBranch/DeviceConnectorActor.h"
#include "ASerial/ASerial_packet.h"
#include "HAL/UnrealMemory.h"

ADeviceConnectorActor::ADeviceConnectorActor()
{
    PrimaryActorTick.bCanEverTick = true;
}

// �A�N�^�[�����x���ɔz�u����A�Q�[�����J�n���ꂽ���Ɉ�x�����Ă΂��
void ADeviceConnectorActor::BeginPlay()
{
    Super::BeginPlay();

    // ���C�u�����̃C���X�^���X�𐶐�
    // �����Ńf�o�C�XID(20)�ƃo�[�W����(1)���w��
    ASerialController = MakeUnique<ASerial_lib_Controller_Win>(0x10, 0x01);
    SerialInterface = MakeUnique<WindowsSerial>();

    // �쐬�����C���X�^���X�����C�u�����ɐݒ�
    ASerialController->SetInterfacePt(SerialInterface.Get());

    // �f�o�C�X�Ƃ̎����ڑ������݂�
    const int32 ConnectedComPort = ASerialController->AutoConnectDevice();

    // �ڑ����ʂ𔻒肷��
    if (ConnectedComPort != -1)
    {
        // �ڑ��ɐ��������ꍇ
        bIsDeviceConnected = true;
        ConnectionStatus = FString::Printf(TEXT("Connection successful on COM %d"), ConnectedComPort);
        UE_LOG(LogTemp, Log, TEXT("%s"), *ConnectionStatus);
    }
    else
    {
        // �ڑ��Ɏ��s�����ꍇ
        bIsDeviceConnected = false;
        ConnectionStatus = TEXT("Connection failed. Could not find device.");
        UE_LOG(LogTemp, Warning, TEXT("%s"), *ConnectionStatus);
    }
}

// ���t���[���Ăяo����郁�C�����[�v�����B
void ADeviceConnectorActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // �f�o�C�X�ɐڑ�����Ă���ꍇ�݈̂ȉ��̏��������s
    if (bIsDeviceConnected && ASerialController.IsValid())
    {
        // ��M�f�[�^���i�[���邽�߂̍\���̂�����
        static ASerialDataStruct::ASerialData receivedData;

        // �f�o�C�X����̃f�[�^��M�����݂�
        // ���̊֐����A���񎦂́u�����[�v���ƂɌĂяo���v�����ɑ������܂��B
        const int32 ReadStatus = ASerialController->ReadDataProcess(&receivedData);

        // ReadDataProcess�̖߂�l��1�Ȃ�A�p�P�b�g��M������
        if (ReadStatus == 1)
        {
            // --- �p�P�b�g��M��̏��� ---
            // �R�}���h�`�����l��0x20�ŁA������17�o�C�g�ȏ�̃f�[�^�p�P�b�g���͂�����A
            //���̃p�P�b�g�̐擪16�o�C�g����]�f�[�^�A17�Ԗڂ̃o�C�g���{�^���̏�ԂƂ��Ĉ���
            if (receivedData.command == 0x20 && receivedData.data_num >= 17)
            {
                FMemory::Memcpy(&DeviceRotation, receivedData.data, sizeof(float) * 4);
                bIsActionButtonPressed = (receivedData.data[16] == 1);
            }

            // �w���ʂ�A�p�P�b�g��M������������R�}���h0x20���f�o�C�X�ɑ��M
            ASerialController->WriteData(0x20);
        }
    }
}

// �A�N�^�[���j������邩�A�Q�[�����I�����鎞�ɌĂ΂��
void ADeviceConnectorActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    // �A�v���P�[�V�����I�����Ƀf�o�C�X�Ƃ̐ڑ������S�ɐؒf�B
    if (ASerialController.IsValid() && bIsDeviceConnected)
    {
        ASerialController->DisConnectDevice();
        UE_LOG(LogTemp, Log, TEXT("Device disconnected."));
    }

    Super::EndPlay(EndPlayReason);
}
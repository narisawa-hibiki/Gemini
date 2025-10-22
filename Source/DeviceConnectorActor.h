#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ASerial/WindowsSerial.h"
#include "ASerial/ASerial_lib_Controller_Win.h"
#include "DeviceConnectorActor.generated.h"

// �O���錾
class ASerial_lib_Controller_Win;
class WindowsSerial;

UCLASS()
class SWEETPROJECT_API ADeviceConnectorActor : public AActor
{
    GENERATED_BODY()

public:
    ADeviceConnectorActor();

protected:
    // �Q�[���J�n���ɌĂ΂��֐�
    virtual void BeginPlay() override;

    // �Q�[���I�����ɌĂ΂��֐�
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    // ���t���[���Ă΂��֐��i���C�����[�v�j
    virtual void Tick(float DeltaTime) override;

private:
    // ASerial���C�u�����̃C���X�^���X��ێ�����|�C���^
    TUniquePtr<ASerial_lib_Controller_Win> ASerialController;

    // Windows�V���A���ʐM�@�\�̃C���X�^���X��ێ�����|�C���^
    TUniquePtr<WindowsSerial> SerialInterface;

    // �f�o�C�X�Ƃ̐ڑ���Ԃ�ێ�����t���O
    bool bIsDeviceConnected = false;

public:
    // �u���[�v�����g����ڑ���Ԃ��m�F���邽�߂̕ϐ�
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ASerial|Status")
    FString ConnectionStatus;

    // �u���[�v�����g�Ɍ��J����f�[�^�p�̕ϐ�
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ASerial|Data")
    FQuat DeviceRotation;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ASerial|Data")
    FVector DeviceAcceleration;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ASerial|Data")
    bool bIsActionButtonPressed;
};
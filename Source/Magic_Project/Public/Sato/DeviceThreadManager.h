// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "sato/MagicDeviceCmdSender.h"
#include "DeviceThreadManager.generated.h"


UCLASS()
class MAGIC_PROJECT_API UDeviceThreadManager : public UObject
{
	GENERATED_BODY()
	
public:
    // �������i�X���b�h�J�n�j
    void StartManager();

    // �I�������i�X���b�h��~�j
    void StopManager();

    // �f�o�C�X����̍ŐV�f�[�^���擾
    FRotator GetLatestData() const;

private:
    FMagicDeviceCmdSender* Runnable;
    FRunnableThread* Thread;

    // �X���b�h�Ŏ󂯎�����f�[�^��ێ�
    FRotator DeviceInfoResult;

    // �����ɃL�����N�^�[�֓n���������������Ƃ��ł���

};

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SubtitleSubsystem.generated.h"

class ASubtitleActor;

UCLASS()
class SWEETPROJECT_API USubtitleSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    // ASubtitleActor��BeginPlay�Ŏ��g��o�^���邽�߂ɌĂяo��
    void RegisterSubtitleActor(ASubtitleActor* SubtitleActor);

    // �O������ID���w�肵�Ď�����\������
    void ShowSubtitleByID(const FName& SubtitleID);

    // �O������ID���w�肵�Ď������\���ɂ���
    void HideSubtitleByID(const FName& SubtitleID);

    // ���x�����؂�ւ�����ۂȂǂɓo�^���N���A����
    virtual void Deinitialize() override;

private:
    // SubtitleID��SubtitleActor�̃|�C���^���}�b�v�ŊǗ�����
    TMap<FName, TObjectPtr<ASubtitleActor>> SubtitleActorMap;
};
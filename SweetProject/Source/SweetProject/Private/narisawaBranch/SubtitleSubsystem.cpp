#include "narisawaBranch/SubtitleSubsystem.h"
#include "narisawaBranch/SubtitleActor.h"

void USubtitleSubsystem::RegisterSubtitleActor(ASubtitleActor* SubtitleActor)
{
    if (!SubtitleActor || SubtitleActor->SubtitleID.IsNone())
    {
        // �A�N�^�[���������AID���ݒ肳��Ă��Ȃ��ꍇ�͉������Ȃ�
        return;
    }
    SubtitleActorMap.Add(SubtitleActor->SubtitleID, SubtitleActor);
}

void USubtitleSubsystem::ShowSubtitleByID(const FName& SubtitleID)
{
    if (ASubtitleActor* FoundActor = SubtitleActorMap.FindRef(SubtitleID))
    {
        FoundActor->ShowSubtitle();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SubtitleSubsystem: SubtitleActor with ID '%s' not found."), *SubtitleID.ToString());
    }
}

void USubtitleSubsystem::HideSubtitleByID(const FName& SubtitleID)
{
    if (ASubtitleActor* FoundActor = SubtitleActorMap.FindRef(SubtitleID))
    {
        FoundActor->HideSubtitle();
    }
}

void USubtitleSubsystem::Deinitialize()
{
    // �}�b�v���N���A���āA�Â����x���̃A�N�^�[�ւ̎Q�Ƃ��������
    SubtitleActorMap.Empty();
    Super::Deinitialize();
}
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SubtitleActor.generated.h"

class UWidgetComponent;

UCLASS()
class SWEETPROJECT_API ASubtitleActor : public AActor
{
    GENERATED_BODY()

public:
    ASubtitleActor();

    // ���������ʂ��邽�߂�ID
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Subtitle")
    FName SubtitleID;

    // ������\������֐�
    void ShowSubtitle();

    // �������\���ɂ���֐�
    void HideSubtitle();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    TObjectPtr<USceneComponent> DefaultSceneRoot;

    // 3D��ԂɃE�B�W�F�b�g��\�����邽�߂̃R���|�[�l���g
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    TObjectPtr<UWidgetComponent> SubtitleWidgetComponent;
};
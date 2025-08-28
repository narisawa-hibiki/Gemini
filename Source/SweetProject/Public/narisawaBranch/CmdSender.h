// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ASerialLibControllerWin.h"
#include "CmdSender.generated.h"

UCLASS()
class SWEETPROJECT_API ACmdSender : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACmdSender();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// LED
	void SendCmd_LED(UASerialLibControllerWin* device_);

	// クオータニオン取得
	int32 SendCmd_Quater(UASerialLibControllerWin* device_);

	// 加速度取得
	int32 SendCmd_Ac(UASerialLibControllerWin* device_);

private:
	uint8_t LED_ = 0x30;

	uint8_t QuaterCmd_ = 0x31;

	uint8_t AcCmd_ = 0x32;
};

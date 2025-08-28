// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ASerial_lib_Controller_Win.h"
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
	// キャリブレーションコマンドを送信する関数
	void SendCmd_Cali(UASerial_lib_Controller_Win* device_);

	// オイラー角取得コマンドを送信する関数
	int32 SendCmd_Euler(UASerial_lib_Controller_Win* device_);

	// クォータニオン取得コマンドを送信する関数
	int32 SendCmd_Quater(UASerial_lib_Controller_Win* device_);

private:
	// キャリブレーション取得コマンド
	uint8_t Calibration_ = 0x20;

	// オイラー角取得コマンド
	uint8_t EulerCmd_ = 0x21;

	// クォータニオン取得コマンド
	uint8_t QuaternionCmd_ = 0x22;
	//int32
};

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
	// �L�����u���[�V�����R�}���h�𑗐M����֐�
	void SendCmd_Cali(UASerial_lib_Controller_Win* device_);

	// �I�C���[�p�擾�R�}���h�𑗐M����֐�
	int32 SendCmd_Euler(UASerial_lib_Controller_Win* device_);

	// �N�H�[�^�j�I���擾�R�}���h�𑗐M����֐�
	int32 SendCmd_Quater(UASerial_lib_Controller_Win* device_);

private:
	// �L�����u���[�V�����擾�R�}���h
	uint8_t Calibration_ = 0x20;

	// �I�C���[�p�擾�R�}���h
	uint8_t EulerCmd_ = 0x21;

	// �N�H�[�^�j�I���擾�R�}���h
	uint8_t QuaternionCmd_ = 0x22;
	//int32
};

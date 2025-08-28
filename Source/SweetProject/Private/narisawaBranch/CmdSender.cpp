// Fill out your copyright notice in the Description page of Project Settings.


#include "narisawaBranch/CmdSender.h"

// Sets default values
ACmdSender::ACmdSender()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACmdSender::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACmdSender::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACmdSender::SendCmd_Cali(UASerial_lib_Controller_Win* device_)
{
	if (device_)
	{
		device_->WriteData(Calibration_);
	}
}

int32 ACmdSender::SendCmd_Euler(UASerial_lib_Controller_Win* device_)
{
	if (device_)
	{
		int32 Result = device_->WriteData(EulerCmd_);
		//int32 Result = device_->WriteData(0x01);
		return Result;
	}
	else
	{
		return -1;
	}
}

int32 ACmdSender::SendCmd_Quater(UASerial_lib_Controller_Win* device_)
{
	if (device_)
	{
		int32 Result = device_->WriteData(QuaternionCmd_);
		return Result;
	}
	else
	{
		return -1;
	}
}
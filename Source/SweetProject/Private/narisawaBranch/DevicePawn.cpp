// Fill out your copyright notice in the Description page of Project Settings.


#include "narisawaBranch/DevicePawn.h"

// Sets default values
ADevicePawn::ADevicePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADevicePawn::BeginPlay()
{
	Super::BeginPlay();
	
	// �f�o�C�X�ɃI�C���[�p�擾�̃R�}���h�𑗂�B���̃f�[�^��ReadData����
	deviceCmd_->SendCmdQuater(device);
	ASerialDataStruct::ASerialData ReceiveData;
	int Result = device_->ReadData(&ReceiveData);

	// �������������f�o�b�O��񁁁���������
	uint16t a = device->GetLastErrorCode();
	UE_LOG(LogTemp, Log, TEXT("ErrorCode     = %X"), a);
	UE_LOG(LogTemp, Log, TEXT("deviceCONNECT = %d"), Result);
	UE_LOG(LogTemp, Log, TEXT("deviceRESULT  = %x"), ReceiveData.data);
	// �������������f�o�b�O��񁁁���������

	// �f�o�C�X��������������FRotator�ɕϊ�����B1000�{����Ă���̂Ŋ���1000�����l���ŏI�I�Ȓl�ɂ���B
	FRotator Device_Rotate = TransformQuaterAngles(ReceiveData.data, 4);
	Final_Device_Rotate = FRotator(Device_Rotate.Pitch / 1000, Device_Rotate.Yaw / 1000, Device_Rotate.Roll / 1000);
	UE_LOG(LogTemp, Log, TEXT("Final_Device_Rotate.Pitch = %.0f"), Final_Device_Rotate.Pitch);
	UE_LOG(LogTemp, Log, TEXT("Final_Device_Rotate.Yaw = %.0f"), Final_Device_Rotate.Yaw);
	UE_LOG(LogTemp, Log, TEXT("Final_Device_Rotate.Roll = %.0f"), Final_Device_Rotate.Roll);
}

// Called every frame
void ADevicePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADevicePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


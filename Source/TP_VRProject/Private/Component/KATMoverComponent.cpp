﻿#include "Component/KATMoverComponent.h"
#include "KATSDKWarpper.h"
#include "Camera/CameraComponent.h"


UKATMoverComponent::UKATMoverComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UKATMoverComponent::BeginPlay()
{
	Super::BeginPlay();

	KATDataHandler = new KATSDKWarpper();
	VRCamera = Cast<UCameraComponent>(GetOwner()->FindComponentByClass(UCameraComponent::StaticClass()));
}


// Called every frame
void UKATMoverComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HandleKATVRInput(DeltaTime);
}

void UKATMoverComponent::StartMove()
{
	CanMove = true;
}

void UKATMoverComponent::StopMove()
{
	CanMove = false;
}

void UKATMoverComponent::HandleKATVRInput(float DeltaTime)
{
	HandleKATVRInputWalk(DeltaTime);
	HandleKATVRRotator();
}

void UKATMoverComponent::HandleKATVRInputWalk(float DeltaTime)
{
	if (!CanMove) return;

	if (VRCamera == nullptr) return;

	Vector3 MoveSpeed = KATDataHandler->GetWalkStatus(nullptr).treadMillData.moveSpeed;

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Move: %s"), *Vector3::toFVector(MoveSpeed).ToString()));

	float MoveAmount = MoveSpeed.z;
	auto cameraForwardVector = FVector(VRCamera->GetForwardVector().X, VRCamera->GetForwardVector().Y, 0).GetSafeNormal();
	//FootstepCounter += FMath::Abs(DeltaTime * NowSpeed * MoveAmount);

	GetOwner()->AddActorWorldOffset(cameraForwardVector * MoveAmount * NowSpeed,true);
	//AddActorWorldOffset(GetActorForwardVector() * MoveAmount * NowSpeed);
}

void UKATMoverComponent::HandleKATVRRotator()
{
	FQuat newQuat = Quaternion::unityToUnreal(KATDataHandler->GetWalkStatus(nullptr).treadMillData.bodyRotationRaw);

	RotateCharacterByFQuat(newQuat, 0.5f);
}

void UKATMoverComponent::RotateCharacterByFQuat(FQuat targetQuat, float duration)
{
	//if (!bCanRotate) return;

	CurrentRotator = targetQuat.Rotator();
	FRotator DeltaRotation = CurrentRotator - PreRotator;

	DeltaRotation.Yaw = -DeltaRotation.Yaw;

	FRotator CharacterTargetRotator = GetOwner()->GetActorRotation() + DeltaRotation;

	FRotator VROffsetRotator = GetRelativeRotation() - DeltaRotation;

	GetOwner()->SetActorRotation(CharacterTargetRotator);

	SetRelativeRotation(VROffsetRotator);

	PreRotator = CurrentRotator;
}


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


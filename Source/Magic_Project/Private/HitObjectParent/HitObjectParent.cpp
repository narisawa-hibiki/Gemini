// Fill out your copyright notice in the Description page of Project Settings.

#include "HitObjectParent/HitObjectParent.h"
#include "Magic/Onishi_MagicLauncher.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/SphereComponent.h"

// Sets default values
AHitObjectParent::AHitObjectParent():
	StartMaterial(nullptr)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = ObjectMesh;

	// Material��StaticMesh�ɐݒ肷��
	UMaterial* Material = LoadObject<UMaterial>(nullptr, TEXT("/Engine/BasicShapes/BasicShapeMaterial"));

	// StaticMesh��Laod����StaticMeshComponent��StaticMesh�ɐݒ肷��
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Sphere"));

	// StaticMesh��StaticMeshComponent�ɐݒ肷��
	ObjectMesh->SetStaticMesh(Mesh);

	//�X�t�B�A�R���W�����쐬
	{
		SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
		SphereComponent->SetupAttachment(ObjectMesh);
		SphereComponent->SetSphereRadius(200.0f);
	}

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AHitObjectParent::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AHitObjectParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHitObjectParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHitObjectParent::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult) {

	if (AOnishi_MagicLauncher* a = Cast<AOnishi_MagicLauncher>(OtherActor)) {

		// Material��StaticMesh�ɐݒ肷��
		UMaterial* Material = LoadObject<UMaterial>(nullptr, TEXT("/Engine/BasicShapes/BasicShapeMaterial"));

		// Material��StaticMeshComponent�ɐݒ肷��
		ObjectMesh->SetMaterial(0, Material);
	}
}

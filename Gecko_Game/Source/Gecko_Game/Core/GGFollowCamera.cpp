// Fill out your copyright notice in the Description page of Project Settings.

#include "GGFollowCamera.h"

#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetSystemLibrary.h"


AGGFollowCamera::AGGFollowCamera() :
	ConfinesExtent(FVector(1920.0f, 1080.0f, 10.0f)),
	Camera(UObject::CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"))),
	CameraConfines(UObject::CreateDefaultSubobject<UBoxComponent>(TEXT("CameraConfines")))
{
	PrimaryActorTick.bCanEverTick = true;

	this->Camera->USceneComponent::SetupAttachment(AActor::RootComponent);
	this->Camera->USceneComponent::SetRelativeLocation(FVector(0.0f, 0.0f, 2000.0f));
	this->Camera->USceneComponent::SetRelativeRotation(FRotator(-90.0f, -90.0f, 0.0f));
	this->Camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	this->Camera->OrthoWidth = 1920.0f;
	this->Camera->bConstrainAspectRatio = true;
}

void AGGFollowCamera::BeginPlay()
{
	Super::BeginPlay();

	this->SetCameraConfines();
}

void AGGFollowCamera::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
	this->CameraConfines->UBoxComponent::SetBoxExtent(this->ConfinesExtent, true);
}

void AGGFollowCamera::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGGFollowCamera::SetCameraConfines()
{
	const float ConfineX = this->Camera->OrthoWidth / 2.0f;
	const float ConfineY = this->Camera->OrthoWidth / 3.5f;

	FVector Origin = FVector(
		this->CameraConfines->Bounds.Origin.X,
		this->CameraConfines->Bounds.Origin.Y,
		0.0f);

	FVector BoxExtent = FVector(
		0.0f,
		this->CameraConfines->Bounds.Origin.Y,
		this->CameraConfines->Bounds.Origin.Z
		);

	float SphereRadius = 0.0f;
	
	UKismetSystemLibrary::GetComponentBounds(this->CameraConfines, Origin, BoxExtent, SphereRadius);

	this->ConfineMaxX = Origin.X - ConfineX;
	this->ConfineMinX = BoxExtent.Y + ConfineX;

	this->ConfineMaxY = Origin.Y - ConfineY;
	this->ConfineMinY = BoxExtent.Z + ConfineY;
}


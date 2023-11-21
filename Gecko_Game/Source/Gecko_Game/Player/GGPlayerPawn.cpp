// Fill out your copyright notice in the Description page of Project Settings.

#include "GGPlayerPawn.h"

#include "../UI/Game/GGStatusHUD.h"
#include "../Components/GGHealthComponent.h"
#include "../Core/Controllers/GGPlayerController.h"
#include "GGFollowCamera.h"


AGGPlayerPawn::AGGPlayerPawn()
{
	APawn::PrimaryActorTick.bCanEverTick = true;
	APawn::AutoPossessPlayer = EAutoReceiveInput::Player0;

	this->InitializePlayer();
}

void AGGPlayerPawn::InitializePlayer()
{
	this->HealthComponent = CreateDefaultSubobject<UGGHealthComponent>(TEXT("Health Component"));
}

void AGGPlayerPawn::OnDeath_Implementation()
{
	if (AActor::GetOwner()->UObject::Implements<UGGHealthInterface>() == true)
	{
		IGGHealthInterface::Execute_OnDeath(AActor::GetOwner());
	}
}

void AGGPlayerPawn::OnTakeDamage_Implementation()
{
	const AGGPlayerController* PlayerController = Cast<AGGPlayerController>(APawn::GetController());

	if (PlayerController != nullptr)
	{
		PlayerController->UpdateHealthPercent(HealthComponent->GetHealthPercent());
	}
}

void AGGPlayerPawn::HealPlayer(const float HealthReceived)
{
	if (this->CurrentHealth >= this->MaxHealth)
	{
		this->MaxHealth = this->CurrentHealth;
	}
	else
	{
		this->CurrentHealth += HealthReceived;
	}
}

void AGGPlayerPawn::DamagePlayer(const float DamageReceived)
{
	if (this->CurrentHealth <= 0.0f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("TODO: Game Over State"));
	}
	else
	{
		this->CurrentHealth -= DamageReceived;
	}
}


// Called when the game starts or when spawned
void AGGPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGGPlayerPawn::Move(float AxisValue)
{

}

// Called every frame
void AGGPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGGPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up gameplay key bindings
	check(PlayerInputComponent)

	PlayerInputComponent->UInputComponent::BindAxis("Move", this, &AGGPlayerPawn::Move);
}


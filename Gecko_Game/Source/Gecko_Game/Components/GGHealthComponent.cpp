// Fill out your copyright notice in the Description page of Project Settings.

#include "GGHealthComponent.h"
#include "GameFramework/Actor.h"
#include "../Core/Interfaces/GGHealthInterface.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values for this component's properties
UGGHealthComponent::UGGHealthComponent()
{
	UActorComponent::PrimaryComponentTick.bCanEverTick = false;
}

void UGGHealthComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UGGHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


void UGGHealthComponent::TakeDamage(const float DamageAmount)
{
	if (UActorComponent::GetOwner()->Implements<UGGHealthInterface>() == true)
	{
		IGGHealthInterface::Execute_OnTakeDamage(UActorComponent::GetOwner());
	}

	this->CurrentHealth -= DamageAmount;

	if (this->CurrentHealth <= 0.0f)
	{
		this->CurrentHealth = 0.0f;

		//UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
	}
}
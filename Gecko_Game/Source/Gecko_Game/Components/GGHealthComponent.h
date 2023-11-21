// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGHealthComponent.generated.h"


class AActor;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GECKO_GAME_API UGGHealthComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	// The Owner's current amount of health points
	UPROPERTY(EditDefaultsOnly, Category = "Attributes|Health")
	float CurrentHealth{ 100.0f };


public:
	UGGHealthComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void TakeDamage(const float DamageAmount);

	FORCEINLINE float GetHealthPercent() const { return this->CurrentHealth / 100.0f; }
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGHealthInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGGHealthInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GECKO_GAME_API IGGHealthInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, Category = "Attributes|Health")
	void OnDeath();
	virtual void OnDeath_Implementation() = 0;

	UFUNCTION(BlueprintNativeEvent, Category = "Attributes|Health")
	void OnTakeDamage();
	virtual void OnTakeDamage_Implementation() = 0;
};

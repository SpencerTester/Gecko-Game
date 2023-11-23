// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGBlueprintFunctionLibrary.generated.h"


class AGGPlayerPawn;

/**
 * 
 */
UCLASS()
class GECKO_GAME_API UGGBlueprintFunctionLibrary :
	public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Getters")
	static AGGPlayerPawn* GetPlayerPawn();
	
};

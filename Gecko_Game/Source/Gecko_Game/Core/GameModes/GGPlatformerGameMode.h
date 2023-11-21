// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GGPlatformerGameMode.generated.h"

class APlayerCharacter;
class AWorldSettings;

/**
 * 
 */
UCLASS()
class GECKO_GAME_API AGGPlatformerGameMode :
	public AGameModeBase
{
	GENERATED_BODY()

public:
	AGGPlatformerGameMode();

protected:
	virtual void BeginPlay() override;
};

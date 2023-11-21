// Fill out your copyright notice in the Description page of Project Settings.

#include "GGPlatformerGameMode.h"

#include "../../Player/GGPlayerPawn.h"
#include "../Controllers/GGPlayerController.h"

#include "Kismet/GameplayStatics.h"

AGGPlatformerGameMode::AGGPlatformerGameMode()
{
	AGameModeBase::DefaultPawnClass = AGGPlayerPawn::StaticClass();
	AGameModeBase::PlayerControllerClass = AGGPlayerController::StaticClass();
}

void AGGPlatformerGameMode::BeginPlay()
{
	Super::BeginPlay();
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "GGBlueprintFunctionLibrary.h"
#include "Controllers/GGPlayerController.h"

#include "Kismet/GameplayStatics.h"


AGGPlayerPawn* UGGBlueprintFunctionLibrary::GetPlayerPawn()
{
	const AGGPlayerController* PlayerController = Cast<AGGPlayerController>(UGameplayStatics::GetPlayerController(nullptr, 0));
	
	return PlayerController->PlayerPawn;
}

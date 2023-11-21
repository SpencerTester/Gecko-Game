// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GGPlayerController.generated.h"


class UGGStatusHUD;

/**
 * 
 */
UCLASS()
class GECKO_GAME_API AGGPlayerController :
	public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category = "UI|Game")
	TSubclassOf<UGGStatusHUD> BPUI_StatusHUD;

private:
	UPROPERTY(EditDefaultsOnly, Category = "UI|Game")
	UGGStatusHUD* StatusHUD_Widget{ nullptr };

public:
	AGGPlayerController();

protected:
	virtual void BeginPlay() override;

public:
	void ShowStatusHUD();
	void HideStatusHUD();

	void UpdateHealthPercent(const float HealthPercent) const;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "../Core/Interfaces/GGHealthInterface.h"
#include "GGPlayerPawn.generated.h"


class UUserWidget;
class UGGStatusHUD;
class UGGHealthComponent;
class AGGFollowCamera;


UCLASS()
class GECKO_GAME_API AGGPlayerPawn :
	public APawn, public IGGHealthInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> WidgetClass;
	UPROPERTY(EditAnywhere, Category = "UI")
	UGGStatusHUD* HUD_Widget{ nullptr };

private:
	UGGHealthComponent* HealthComponent{ nullptr };

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	AGGFollowCamera* FollowCamera{ nullptr };

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gameplay|Health", meta = (AllowPrivateAccess = "true", ToolTip = "The Player's current health."))
	float CurrentHealth{ 0.0f };
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gameplay|Health", meta = (AllowPrivateAccess = "true", ToolTip = "The Player's max health."))
	float MaxHealth{ 0.0f };


public:
	AGGPlayerPawn();

	void InitializePlayer();

protected:
	virtual void BeginPlay() override;

	void Move(float AxisValue);

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void OnDeath_Implementation() override;
	virtual void OnTakeDamage_Implementation() override;

private:
	UFUNCTION(BlueprintCallable, Category = "Gameplay|Health", meta = (AllowPrivateAccess = "true", ToolTip = "Add Health to player."))
	void HealPlayer(const float HealthReceived);
	UFUNCTION(BlueprintCallable, Category = "Gameplay|Health", meta = (AllowPrivateAccess = "true", ToolTip = "Remove health from player."))
	void DamagePlayer(const float DamageReceived);
};

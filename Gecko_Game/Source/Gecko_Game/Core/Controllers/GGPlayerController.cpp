// Fill out your copyright notice in the Description page of Project Settings.

#include "GGPlayerController.h"

#include "../../UI/Game/GGStatusHUD.h"
#include "../../Player/GGPlayerPawn.h"

#include "Kismet/GameplayStatics.h"


AGGPlayerController::AGGPlayerController()
{
	APlayerController::bShowMouseCursor = false;
	APlayerController::bEnableClickEvents = false;
	APlayerController::bEnableTouchEvents = false;

	APlayerController::DefaultMouseCursor = EMouseCursor::Default;

	APawn* PawnPtr = Cast<APawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	this->PlayerPawn = Cast<AGGPlayerPawn>(PawnPtr);
}

void AGGPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (this->BPUI_StatusHUD != nullptr)
	{
		this->StatusHUD_Widget = CreateWidget<UGGStatusHUD>(this, this->BPUI_StatusHUD);
		this->StatusHUD_Widget->UUserWidget::AddToViewport();
	}
	
}

void AGGPlayerController::ShowStatusHUD()
{
	APlayerController::SetPause(false);
	APlayerController::SetInputMode(FInputModeGameOnly::FInputModeGameOnly());
	APlayerController::bShowMouseCursor = false;
	APlayerController::bEnableClickEvents = false;

	this->StatusHUD_Widget = CreateWidget<UGGStatusHUD>(this, this->BPUI_StatusHUD);
	this->StatusHUD_Widget->UUserWidget::AddToViewport();
}

void AGGPlayerController::HideStatusHUD()
{
	this->StatusHUD_Widget->UUserWidget::RemoveFromParent();
	this->StatusHUD_Widget->UUserWidget::Destruct();

	APlayerController::SetPause(true);
	APlayerController::SetInputMode(FInputModeUIOnly::FInputModeUIOnly());
	APlayerController::bShowMouseCursor = true;
}

void AGGPlayerController::UpdateHealthPercent(const float HealthPercent) const
{
	if (this->StatusHUD_Widget != nullptr)
	{
		this->StatusHUD_Widget->UpdateHealthPercent(HealthPercent);
	}
}

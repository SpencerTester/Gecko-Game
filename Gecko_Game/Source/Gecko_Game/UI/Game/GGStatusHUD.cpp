// Fill out your copyright notice in the Description page of Project Settings.

#include "GGStatusHUD.h"

#include "../../Player/GGPlayerPawn.h"

#include "Blueprint/WidgetTree.h"
#include "Components/WidgetComponent.h"
#include "Components/CanvasPanel.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"

#include "Kismet/GameplayStatics.h"


bool UGGStatusHUD::Initialize()
{
	if (const bool bSuccess = Super::Initialize(); !bSuccess)
		return false;

	const UPanelWidget* RootWidget = Cast<UPanelWidget>(GetRootWidget());

	if (RootWidget == nullptr)
	{
		// Construct the root widget (UMG UCanvasPanel)
		RootWidget = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("RootWidget"));

		// Create widget items
		this->Bar_Health = WidgetTree->ConstructWidget<UProgressBar>(UProgressBar::StaticClass(), TEXT("HealthBar"));
		this->Img_Player = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());
	}

	return true;
}

void UGGStatusHUD::NativeConstruct()
{
	Super::NativeConstruct();

	AGGPlayerPawn* Player = Cast<AGGPlayerPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	this->PlayerRef = Cast<AGGPlayerPawn>(Player);
}

void UGGStatusHUD::UpdateHealthPercent(const float HealthPercent)
{
	const UUserWidget* Widget = WidgetComponent->GetUserWidgetObject();
	this->Bar_Health = dynamic_cast<UProgressBar*>(Widget->GetWidgetFromName(FName("Bar_Health")));

	this->Bar_Health->SetPercent(HealthPercent);
}

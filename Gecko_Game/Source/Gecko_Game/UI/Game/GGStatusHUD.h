// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGStatusHUD.generated.h"

class UWidgetComponent;
class UCanvasPanel;
class UTextBlock;
class UProgressBar;
class UImage;

class AGGPlayerPawn;


/**
 * 
 */
UCLASS()
class GECKO_GAME_API UGGStatusHUD :
	public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AGGPlayerPawn* PlayerRef{ nullptr };

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta = (BindWidget))
	UWidgetComponent* WidgetComponent{ nullptr };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta = (BindWidget))
	UProgressBar* Bar_Health{ nullptr };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta = (BindWidget))
	UImage* Img_Player{ nullptr };

private:
	virtual bool Initialize() override;
	virtual void NativeConstruct() override;

public:
	UFUNCTION(BlueprintCallable, meta = (BindWidget))
	void UpdateHealthPercent(const float HealthPercent);
};

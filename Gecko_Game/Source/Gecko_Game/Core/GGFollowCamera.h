// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGFollowCamera.generated.h"


class UBoxComponent;
class UCameraComponent;

UCLASS()
class GECKO_GAME_API AGGFollowCamera : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	FVector ConfinesExtent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	UCameraComponent* Camera{ nullptr };

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	UBoxComponent* CameraConfines{ nullptr };


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	float DeltaSeconds;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	float ConfineMaxX;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	float ConfineMinX;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	float ConfineMaxY;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	float ConfineMinY;


public:
	AGGFollowCamera();

protected:
	virtual void BeginPlay() override;

public:
	virtual void OnConstruction(const FTransform& Transform) override;

	virtual void Tick(const float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "General")
	void SetCameraConfines();
};

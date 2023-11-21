// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TextureAnalyzer.generated.h"


UCLASS()
class GECKO_GAME_API UTextureAnalyzer : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Tools")
	void AnalyzeTextures(const float MemoryThreshold, const int32 WidthThreshold, const int32 HeightThreshold);
};

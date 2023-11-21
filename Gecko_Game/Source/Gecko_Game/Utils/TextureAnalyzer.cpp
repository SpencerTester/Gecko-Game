// Fill out your copyright notice in the Description page of Project Settings.

#include "TextureAnalyzer.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/Texture.h"


void UTextureAnalyzer::AnalyzeTextures(const float MemoryThreshold, const int32 WidthThreshold, const int32 HeightThreshold)
{
    // Create a filter to get all assets of UTexture class in the specified directories and subdirectories
    FARFilter Filter;
    Filter.ClassPaths.Add(FTopLevelAssetPath("/Script/Engine.Texture"));
    Filter.PackagePaths.Add("/Game/GeckoGame/Textures");
    Filter.bRecursiveClasses = true;

    // Get the asset registry module
    const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

    // Create an array to store the asset data
    TArray<FAssetData> AssetData;
    AssetRegistryModule.Get().GetAssets(Filter, AssetData);

    for (const FAssetData& TextureAsset : AssetData)
    {
        // Get the texture object
        if (const UTexture* Texture = Cast<UTexture>(TextureAsset.GetAsset()))
        {
            // Get texture dimensions
            const int32 TextureWidth = Texture->GetSurfaceWidth();
            const int32 TextureHeight = Texture->GetSurfaceHeight();

            // Get memory size in megabytes
            FResourceSizeEx ResourceSize(EResourceSizeMode::Exclusive);
            const float MemorySizeMB =
                static_cast<float>(ResourceSize.GetDedicatedSystemMemoryBytes() + ResourceSize.GetDedicatedVideoMemoryBytes()) / (1024 * 1024);

            // Check if texture exceeds thresholds
            if (MemorySizeMB > MemoryThreshold || TextureWidth > WidthThreshold || TextureHeight > HeightThreshold)
            {
                // Print information about the texture
                UE_LOG(LogTemp, Warning,
                    TEXT("Texture %s exceeds thresholds - Size: %.2f MB, Width: %d, Height: %d"),
                    *TextureAsset.AssetName.ToString(), MemorySizeMB, TextureWidth, TextureHeight);
            }
        }
    }
}

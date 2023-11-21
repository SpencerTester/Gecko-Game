// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gecko_Game/Core/GameModes/GGPlatformerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGPlatformerGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlatformerGameMode();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlatformerGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gecko_Game();
// End Cross Module References
	void AGGPlatformerGameMode::StaticRegisterNativesAGGPlatformerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGGPlatformerGameMode);
	UClass* Z_Construct_UClass_AGGPlatformerGameMode_NoRegister()
	{
		return AGGPlatformerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGGPlatformerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGGPlatformerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Gecko_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlatformerGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlatformerGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/GameModes/GGPlatformerGameMode.h" },
		{ "ModuleRelativePath", "Core/GameModes/GGPlatformerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGGPlatformerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGPlatformerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGGPlatformerGameMode_Statics::ClassParams = {
		&AGGPlatformerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlatformerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGGPlatformerGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGGPlatformerGameMode()
	{
		if (!Z_Registration_Info_UClass_AGGPlatformerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGGPlatformerGameMode.OuterSingleton, Z_Construct_UClass_AGGPlatformerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGGPlatformerGameMode.OuterSingleton;
	}
	template<> GECKO_GAME_API UClass* StaticClass<AGGPlatformerGameMode>()
	{
		return AGGPlatformerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGGPlatformerGameMode);
	AGGPlatformerGameMode::~AGGPlatformerGameMode() {}
	struct Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GameModes_GGPlatformerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GameModes_GGPlatformerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGGPlatformerGameMode, AGGPlatformerGameMode::StaticClass, TEXT("AGGPlatformerGameMode"), &Z_Registration_Info_UClass_AGGPlatformerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGPlatformerGameMode), 1087571556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GameModes_GGPlatformerGameMode_h_2761788715(TEXT("/Script/Gecko_Game"),
		Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GameModes_GGPlatformerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GameModes_GGPlatformerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

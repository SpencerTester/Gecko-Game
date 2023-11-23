// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gecko_Game/Core/Controllers/GGPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlayerController();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlayerController_NoRegister();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlayerPawn_NoRegister();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGStatusHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gecko_Game();
// End Cross Module References
	void AGGPlayerController::StaticRegisterNativesAGGPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGGPlayerController);
	UClass* Z_Construct_UClass_AGGPlayerController_NoRegister()
	{
		return AGGPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGGPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPUI_StatusHUD_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BPUI_StatusHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusHUD_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusHUD_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGGPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Gecko_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Core/Controllers/GGPlayerController.h" },
		{ "ModuleRelativePath", "Core/Controllers/GGPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerController_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Core/Controllers/GGPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGPlayerController_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGPlayerController, PlayerPawn), Z_Construct_UClass_AGGPlayerPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerController_Statics::NewProp_PlayerPawn_MetaData), Z_Construct_UClass_AGGPlayerController_Statics::NewProp_PlayerPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerController_Statics::NewProp_BPUI_StatusHUD_MetaData[] = {
		{ "Category", "UI|Game" },
		{ "ModuleRelativePath", "Core/Controllers/GGPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGGPlayerController_Statics::NewProp_BPUI_StatusHUD = { "BPUI_StatusHUD", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGPlayerController, BPUI_StatusHUD), Z_Construct_UClass_UClass, Z_Construct_UClass_UGGStatusHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerController_Statics::NewProp_BPUI_StatusHUD_MetaData), Z_Construct_UClass_AGGPlayerController_Statics::NewProp_BPUI_StatusHUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerController_Statics::NewProp_StatusHUD_Widget_MetaData[] = {
		{ "Category", "UI|Game" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Core/Controllers/GGPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGPlayerController_Statics::NewProp_StatusHUD_Widget = { "StatusHUD_Widget", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGPlayerController, StatusHUD_Widget), Z_Construct_UClass_UGGStatusHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerController_Statics::NewProp_StatusHUD_Widget_MetaData), Z_Construct_UClass_AGGPlayerController_Statics::NewProp_StatusHUD_Widget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGGPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGPlayerController_Statics::NewProp_PlayerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGPlayerController_Statics::NewProp_BPUI_StatusHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGPlayerController_Statics::NewProp_StatusHUD_Widget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGGPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGGPlayerController_Statics::ClassParams = {
		&AGGPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGGPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGGPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGGPlayerController()
	{
		if (!Z_Registration_Info_UClass_AGGPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGGPlayerController.OuterSingleton, Z_Construct_UClass_AGGPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGGPlayerController.OuterSingleton;
	}
	template<> GECKO_GAME_API UClass* StaticClass<AGGPlayerController>()
	{
		return AGGPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGGPlayerController);
	AGGPlayerController::~AGGPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Controllers_GGPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Controllers_GGPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGGPlayerController, AGGPlayerController::StaticClass, TEXT("AGGPlayerController"), &Z_Registration_Info_UClass_AGGPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGPlayerController), 377738666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Controllers_GGPlayerController_h_4192207453(TEXT("/Script/Gecko_Game"),
		Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Controllers_GGPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Controllers_GGPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

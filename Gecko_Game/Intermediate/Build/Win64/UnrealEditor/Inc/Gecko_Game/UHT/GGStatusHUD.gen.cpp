// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gecko_Game/UI/Game/GGStatusHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGStatusHUD() {}
// Cross Module References
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlayerPawn_NoRegister();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGStatusHUD();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGStatusHUD_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gecko_Game();
// End Cross Module References
	DEFINE_FUNCTION(UGGStatusHUD::execUpdateHealthPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealthPercent(Z_Param_HealthPercent);
		P_NATIVE_END;
	}
	void UGGStatusHUD::StaticRegisterNativesUGGStatusHUD()
	{
		UClass* Class = UGGStatusHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHealthPercent", &UGGStatusHUD::execUpdateHealthPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics
	{
		struct GGStatusHUD_eventUpdateHealthPercent_Parms
		{
			float HealthPercent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGStatusHUD_eventUpdateHealthPercent_Parms, HealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::NewProp_HealthPercent_MetaData), Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::NewProp_HealthPercent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::NewProp_HealthPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "BindWidget", "" },
		{ "ModuleRelativePath", "UI/Game/GGStatusHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGStatusHUD, nullptr, "UpdateHealthPercent", nullptr, nullptr, Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::GGStatusHUD_eventUpdateHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::GGStatusHUD_eventUpdateHealthPercent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGStatusHUD);
	UClass* Z_Construct_UClass_UGGStatusHUD_NoRegister()
	{
		return UGGStatusHUD::StaticClass();
	}
	struct Z_Construct_UClass_UGGStatusHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bar_Health_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bar_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Img_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Img_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGGStatusHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Gecko_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGStatusHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGGStatusHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGGStatusHUD_UpdateHealthPercent, "UpdateHealthPercent" }, // 3326099953
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGStatusHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGStatusHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Game/GGStatusHUD.h" },
		{ "ModuleRelativePath", "UI/Game/GGStatusHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_PlayerRef_MetaData[] = {
		{ "Category", "GGStatusHUD" },
		{ "ModuleRelativePath", "UI/Game/GGStatusHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGStatusHUD, PlayerRef), Z_Construct_UClass_AGGPlayerPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_PlayerRef_MetaData), Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_PlayerRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GGStatusHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Game/GGStatusHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGStatusHUD, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_WidgetComponent_MetaData), Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_WidgetComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Bar_Health_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GGStatusHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Game/GGStatusHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Bar_Health = { "Bar_Health", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGStatusHUD, Bar_Health), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Bar_Health_MetaData), Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Bar_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Img_Player_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GGStatusHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Game/GGStatusHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Img_Player = { "Img_Player", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGStatusHUD, Img_Player), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Img_Player_MetaData), Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Img_Player_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGGStatusHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_PlayerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_WidgetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Bar_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGStatusHUD_Statics::NewProp_Img_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGGStatusHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGStatusHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGStatusHUD_Statics::ClassParams = {
		&UGGStatusHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGGStatusHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGGStatusHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGStatusHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGStatusHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGStatusHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGGStatusHUD()
	{
		if (!Z_Registration_Info_UClass_UGGStatusHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGStatusHUD.OuterSingleton, Z_Construct_UClass_UGGStatusHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGGStatusHUD.OuterSingleton;
	}
	template<> GECKO_GAME_API UClass* StaticClass<UGGStatusHUD>()
	{
		return UGGStatusHUD::StaticClass();
	}
	UGGStatusHUD::UGGStatusHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGGStatusHUD);
	UGGStatusHUD::~UGGStatusHUD() {}
	struct Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGGStatusHUD, UGGStatusHUD::StaticClass, TEXT("UGGStatusHUD"), &Z_Registration_Info_UClass_UGGStatusHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGStatusHUD), 84287896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_3125362471(TEXT("/Script/Gecko_Game"),
		Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

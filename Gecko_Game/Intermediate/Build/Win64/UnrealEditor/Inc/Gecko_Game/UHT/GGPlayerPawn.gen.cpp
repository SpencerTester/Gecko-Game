// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gecko_Game/Player/GGPlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGPlayerPawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGFollowCamera_NoRegister();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlayerPawn();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlayerPawn_NoRegister();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGHealthInterface_NoRegister();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGStatusHUD_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gecko_Game();
// End Cross Module References
	DEFINE_FUNCTION(AGGPlayerPawn::execDamagePlayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageReceived);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamagePlayer(Z_Param_DamageReceived);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGGPlayerPawn::execHealPlayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthReceived);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealPlayer(Z_Param_HealthReceived);
		P_NATIVE_END;
	}
	void AGGPlayerPawn::StaticRegisterNativesAGGPlayerPawn()
	{
		UClass* Class = AGGPlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamagePlayer", &AGGPlayerPawn::execDamagePlayer },
			{ "HealPlayer", &AGGPlayerPawn::execHealPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics
	{
		struct GGPlayerPawn_eventDamagePlayer_Parms
		{
			float DamageReceived;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::NewProp_DamageReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::NewProp_DamageReceived = { "DamageReceived", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGPlayerPawn_eventDamagePlayer_Parms, DamageReceived), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::NewProp_DamageReceived_MetaData), Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::NewProp_DamageReceived_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::NewProp_DamageReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gameplay|Health" },
		{ "ModuleRelativePath", "Player/GGPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove health from player." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGGPlayerPawn, nullptr, "DamagePlayer", nullptr, nullptr, Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::GGPlayerPawn_eventDamagePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::GGPlayerPawn_eventDamagePlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics
	{
		struct GGPlayerPawn_eventHealPlayer_Parms
		{
			float HealthReceived;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthReceived_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::NewProp_HealthReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::NewProp_HealthReceived = { "HealthReceived", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGPlayerPawn_eventHealPlayer_Parms, HealthReceived), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::NewProp_HealthReceived_MetaData), Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::NewProp_HealthReceived_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::NewProp_HealthReceived,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gameplay|Health" },
		{ "ModuleRelativePath", "Player/GGPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Health to player." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGGPlayerPawn, nullptr, "HealPlayer", nullptr, nullptr, Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::GGPlayerPawn_eventHealPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::GGPlayerPawn_eventHealPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGGPlayerPawn_HealPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGGPlayerPawn_HealPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGGPlayerPawn);
	UClass* Z_Construct_UClass_AGGPlayerPawn_NoRegister()
	{
		return AGGPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AGGPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGGPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Gecko_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGGPlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGGPlayerPawn_DamagePlayer, "DamagePlayer" }, // 665645922
		{ &Z_Construct_UFunction_AGGPlayerPawn_HealPlayer, "HealPlayer" }, // 1515667665
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/GGPlayerPawn.h" },
		{ "ModuleRelativePath", "Player/GGPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player/GGPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGPlayerPawn, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_HUD_Widget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GGPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_HUD_Widget = { "HUD_Widget", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGPlayerPawn, HUD_Widget), Z_Construct_UClass_UGGStatusHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_HUD_Widget_MetaData), Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_HUD_Widget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Player/GGPlayerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGPlayerPawn, FollowCamera), Z_Construct_UClass_AGGFollowCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gameplay|Health" },
		{ "ModuleRelativePath", "Player/GGPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Player's current health." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGPlayerPawn, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gameplay|Health" },
		{ "ModuleRelativePath", "Player/GGPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Player's max health." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGPlayerPawn, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_MaxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGGPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_HUD_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGPlayerPawn_Statics::NewProp_MaxHealth,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGGPlayerPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGGHealthInterface_NoRegister, (int32)VTABLE_OFFSET(AGGPlayerPawn, IGGHealthInterface), false },  // 3904852168
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGGPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGPlayerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGGPlayerPawn_Statics::ClassParams = {
		&AGGPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGGPlayerPawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AGGPlayerPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGPlayerPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGGPlayerPawn()
	{
		if (!Z_Registration_Info_UClass_AGGPlayerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGGPlayerPawn.OuterSingleton, Z_Construct_UClass_AGGPlayerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGGPlayerPawn.OuterSingleton;
	}
	template<> GECKO_GAME_API UClass* StaticClass<AGGPlayerPawn>()
	{
		return AGGPlayerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGGPlayerPawn);
	AGGPlayerPawn::~AGGPlayerPawn() {}
	struct Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGGPlayerPawn, AGGPlayerPawn::StaticClass, TEXT("AGGPlayerPawn"), &Z_Registration_Info_UClass_AGGPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGPlayerPawn), 3637912941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_3872113242(TEXT("/Script/Gecko_Game"),
		Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

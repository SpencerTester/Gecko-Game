// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gecko_Game/Components/GGHealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGHealthComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGHealthComponent();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGHealthComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gecko_Game();
// End Cross Module References
	void UGGHealthComponent::StaticRegisterNativesUGGHealthComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGHealthComponent);
	UClass* Z_Construct_UClass_UGGHealthComponent_NoRegister()
	{
		return UGGHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGGHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGGHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Gecko_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGHealthComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/GGHealthComponent.h" },
		{ "ModuleRelativePath", "Components/GGHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGHealthComponent_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Attributes|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Owner's current amount of health points\n" },
#endif
		{ "ModuleRelativePath", "Components/GGHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Owner's current amount of health points" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGGHealthComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGHealthComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGHealthComponent_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_UGGHealthComponent_Statics::NewProp_CurrentHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGGHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGHealthComponent_Statics::NewProp_CurrentHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGGHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGHealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGHealthComponent_Statics::ClassParams = {
		&UGGHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGGHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGGHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGHealthComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGHealthComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGGHealthComponent()
	{
		if (!Z_Registration_Info_UClass_UGGHealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGHealthComponent.OuterSingleton, Z_Construct_UClass_UGGHealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGGHealthComponent.OuterSingleton;
	}
	template<> GECKO_GAME_API UClass* StaticClass<UGGHealthComponent>()
	{
		return UGGHealthComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGGHealthComponent);
	UGGHealthComponent::~UGGHealthComponent() {}
	struct Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Components_GGHealthComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Components_GGHealthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGGHealthComponent, UGGHealthComponent::StaticClass, TEXT("UGGHealthComponent"), &Z_Registration_Info_UClass_UGGHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGHealthComponent), 3374786286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Components_GGHealthComponent_h_3655351689(TEXT("/Script/Gecko_Game"),
		Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Components_GGHealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Components_GGHealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

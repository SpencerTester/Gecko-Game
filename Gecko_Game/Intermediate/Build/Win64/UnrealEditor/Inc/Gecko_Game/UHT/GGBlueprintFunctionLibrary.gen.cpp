// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gecko_Game/Core/GGBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGBlueprintFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlayerPawn_NoRegister();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGBlueprintFunctionLibrary();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGBlueprintFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gecko_Game();
// End Cross Module References
	DEFINE_FUNCTION(UGGBlueprintFunctionLibrary::execGetPlayerPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGGPlayerPawn**)Z_Param__Result=UGGBlueprintFunctionLibrary::GetPlayerPawn();
		P_NATIVE_END;
	}
	void UGGBlueprintFunctionLibrary::StaticRegisterNativesUGGBlueprintFunctionLibrary()
	{
		UClass* Class = UGGBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerPawn", &UGGBlueprintFunctionLibrary::execGetPlayerPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics
	{
		struct GGBlueprintFunctionLibrary_eventGetPlayerPawn_Parms
		{
			AGGPlayerPawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGBlueprintFunctionLibrary_eventGetPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_AGGPlayerPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Core/GGBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGBlueprintFunctionLibrary, nullptr, "GetPlayerPawn", nullptr, nullptr, Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::GGBlueprintFunctionLibrary_eventGetPlayerPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::GGBlueprintFunctionLibrary_eventGetPlayerPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UGGBlueprintFunctionLibrary_NoRegister()
	{
		return UGGBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Gecko_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGGBlueprintFunctionLibrary_GetPlayerPawn, "GetPlayerPawn" }, // 134131861
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/GGBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Core/GGBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::ClassParams = {
		&UGGBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGGBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGGBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGGBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGGBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> GECKO_GAME_API UClass* StaticClass<UGGBlueprintFunctionLibrary>()
	{
		return UGGBlueprintFunctionLibrary::StaticClass();
	}
	UGGBlueprintFunctionLibrary::UGGBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGGBlueprintFunctionLibrary);
	UGGBlueprintFunctionLibrary::~UGGBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GGBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GGBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGGBlueprintFunctionLibrary, UGGBlueprintFunctionLibrary::StaticClass, TEXT("UGGBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UGGBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGBlueprintFunctionLibrary), 2840991806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GGBlueprintFunctionLibrary_h_3039132358(TEXT("/Script/Gecko_Game"),
		Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GGBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_GGBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

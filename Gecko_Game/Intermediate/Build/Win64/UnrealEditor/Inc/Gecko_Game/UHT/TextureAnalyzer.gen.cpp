// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gecko_Game/Utils/TextureAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureAnalyzer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GECKO_GAME_API UClass* Z_Construct_UClass_UTextureAnalyzer();
	GECKO_GAME_API UClass* Z_Construct_UClass_UTextureAnalyzer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gecko_Game();
// End Cross Module References
	DEFINE_FUNCTION(UTextureAnalyzer::execAnalyzeTextures)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MemoryThreshold);
		P_GET_PROPERTY(FIntProperty,Z_Param_WidthThreshold);
		P_GET_PROPERTY(FIntProperty,Z_Param_HeightThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnalyzeTextures(Z_Param_MemoryThreshold,Z_Param_WidthThreshold,Z_Param_HeightThreshold);
		P_NATIVE_END;
	}
	void UTextureAnalyzer::StaticRegisterNativesUTextureAnalyzer()
	{
		UClass* Class = UTextureAnalyzer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnalyzeTextures", &UTextureAnalyzer::execAnalyzeTextures },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics
	{
		struct TextureAnalyzer_eventAnalyzeTextures_Parms
		{
			float MemoryThreshold;
			int32 WidthThreshold;
			int32 HeightThreshold;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MemoryThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WidthThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HeightThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_MemoryThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_MemoryThreshold = { "MemoryThreshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureAnalyzer_eventAnalyzeTextures_Parms, MemoryThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_MemoryThreshold_MetaData), Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_MemoryThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_WidthThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_WidthThreshold = { "WidthThreshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureAnalyzer_eventAnalyzeTextures_Parms, WidthThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_WidthThreshold_MetaData), Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_WidthThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_HeightThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_HeightThreshold = { "HeightThreshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureAnalyzer_eventAnalyzeTextures_Parms, HeightThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_HeightThreshold_MetaData), Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_HeightThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_MemoryThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_WidthThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::NewProp_HeightThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "ModuleRelativePath", "Utils/TextureAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureAnalyzer, nullptr, "AnalyzeTextures", nullptr, nullptr, Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::TextureAnalyzer_eventAnalyzeTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::TextureAnalyzer_eventAnalyzeTextures_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureAnalyzer);
	UClass* Z_Construct_UClass_UTextureAnalyzer_NoRegister()
	{
		return UTextureAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UTextureAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Gecko_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureAnalyzer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextureAnalyzer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureAnalyzer_AnalyzeTextures, "AnalyzeTextures" }, // 3676087930
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureAnalyzer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/TextureAnalyzer.h" },
		{ "ModuleRelativePath", "Utils/TextureAnalyzer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureAnalyzer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureAnalyzer_Statics::ClassParams = {
		&UTextureAnalyzer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureAnalyzer_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureAnalyzer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTextureAnalyzer()
	{
		if (!Z_Registration_Info_UClass_UTextureAnalyzer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureAnalyzer.OuterSingleton, Z_Construct_UClass_UTextureAnalyzer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureAnalyzer.OuterSingleton;
	}
	template<> GECKO_GAME_API UClass* StaticClass<UTextureAnalyzer>()
	{
		return UTextureAnalyzer::StaticClass();
	}
	UTextureAnalyzer::UTextureAnalyzer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureAnalyzer);
	UTextureAnalyzer::~UTextureAnalyzer() {}
	struct Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Utils_TextureAnalyzer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Utils_TextureAnalyzer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureAnalyzer, UTextureAnalyzer::StaticClass, TEXT("UTextureAnalyzer"), &Z_Registration_Info_UClass_UTextureAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureAnalyzer), 1423733759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Utils_TextureAnalyzer_h_597156741(TEXT("/Script/Gecko_Game"),
		Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Utils_TextureAnalyzer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Utils_TextureAnalyzer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

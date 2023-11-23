// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gecko_Game/Player/GGFollowCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGFollowCamera() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGFollowCamera();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGFollowCamera_NoRegister();
	GECKO_GAME_API UClass* Z_Construct_UClass_AGGPlayerPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gecko_Game();
// End Cross Module References
	DEFINE_FUNCTION(AGGFollowCamera::execActivateCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGGFollowCamera::execSetCameraConfines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraConfines();
		P_NATIVE_END;
	}
	void AGGFollowCamera::StaticRegisterNativesAGGFollowCamera()
	{
		UClass* Class = AGGFollowCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateCamera", &AGGFollowCamera::execActivateCamera },
			{ "SetCameraConfines", &AGGFollowCamera::execSetCameraConfines },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGGFollowCamera_ActivateCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGGFollowCamera_ActivateCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGGFollowCamera_ActivateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGGFollowCamera, nullptr, "ActivateCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGGFollowCamera_ActivateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGGFollowCamera_ActivateCamera_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGGFollowCamera_ActivateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGGFollowCamera_ActivateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGGFollowCamera_SetCameraConfines_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGGFollowCamera_SetCameraConfines_Statics::Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGGFollowCamera_SetCameraConfines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGGFollowCamera, nullptr, "SetCameraConfines", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGGFollowCamera_SetCameraConfines_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGGFollowCamera_SetCameraConfines_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGGFollowCamera_SetCameraConfines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGGFollowCamera_SetCameraConfines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGGFollowCamera);
	UClass* Z_Construct_UClass_AGGFollowCamera_NoRegister()
	{
		return AGGFollowCamera::StaticClass();
	}
	struct Z_Construct_UClass_AGGFollowCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfinesExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfinesExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraConfines_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraConfines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfineMaxX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfineMaxX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfineMinX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfineMinX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfineMaxY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfineMaxY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfineMinY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfineMinY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGGFollowCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Gecko_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGGFollowCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGGFollowCamera_ActivateCamera, "ActivateCamera" }, // 2172648864
		{ &Z_Construct_UFunction_AGGFollowCamera_SetCameraConfines, "SetCameraConfines" }, // 2366011807
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GGFollowCamera.h" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGFollowCamera, Player), Z_Construct_UClass_AGGPlayerPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Player_MetaData), Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Player_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfinesExtent_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfinesExtent = { "ConfinesExtent", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGFollowCamera, ConfinesExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfinesExtent_MetaData), Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfinesExtent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGFollowCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_CameraConfines_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_CameraConfines = { "CameraConfines", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGFollowCamera, CameraConfines), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_CameraConfines_MetaData), Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_CameraConfines_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGFollowCamera, DeltaSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_DeltaSeconds_MetaData), Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_DeltaSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxX_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxX = { "ConfineMaxX", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGFollowCamera, ConfineMaxX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxX_MetaData), Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinX_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinX = { "ConfineMinX", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGFollowCamera, ConfineMinX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinX_MetaData), Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxY_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxY = { "ConfineMaxY", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGFollowCamera, ConfineMaxY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxY_MetaData), Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinY_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Player/GGFollowCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinY = { "ConfineMinY", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGFollowCamera, ConfineMinY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinY_MetaData), Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGGFollowCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfinesExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_CameraConfines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMaxY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGFollowCamera_Statics::NewProp_ConfineMinY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGGFollowCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGFollowCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGGFollowCamera_Statics::ClassParams = {
		&AGGFollowCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGGFollowCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AGGFollowCamera_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGFollowCamera_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGGFollowCamera()
	{
		if (!Z_Registration_Info_UClass_AGGFollowCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGGFollowCamera.OuterSingleton, Z_Construct_UClass_AGGFollowCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGGFollowCamera.OuterSingleton;
	}
	template<> GECKO_GAME_API UClass* StaticClass<AGGFollowCamera>()
	{
		return AGGFollowCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGGFollowCamera);
	AGGFollowCamera::~AGGFollowCamera() {}
	struct Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGGFollowCamera, AGGFollowCamera::StaticClass, TEXT("AGGFollowCamera"), &Z_Registration_Info_UClass_AGGFollowCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGFollowCamera), 304723495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_272822971(TEXT("/Script/Gecko_Game"),
		Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gecko_Game/Core/Interfaces/GGHealthInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGHealthInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGHealthInterface();
	GECKO_GAME_API UClass* Z_Construct_UClass_UGGHealthInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gecko_Game();
// End Cross Module References
	DEFINE_FUNCTION(IGGHealthInterface::execOnTakeDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeDamage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGGHealthInterface::execOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath_Implementation();
		P_NATIVE_END;
	}
	void IGGHealthInterface::OnDeath()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDeath instead.");
	}
	void IGGHealthInterface::OnTakeDamage()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTakeDamage instead.");
	}
	void UGGHealthInterface::StaticRegisterNativesUGGHealthInterface()
	{
		UClass* Class = UGGHealthInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeath", &IGGHealthInterface::execOnDeath },
			{ "OnTakeDamage", &IGGHealthInterface::execOnTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGGHealthInterface_OnDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGHealthInterface_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes|Health" },
		{ "ModuleRelativePath", "Core/Interfaces/GGHealthInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGHealthInterface_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGHealthInterface, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGHealthInterface_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGHealthInterface_OnDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGGHealthInterface_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGHealthInterface_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGGHealthInterface_OnTakeDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGGHealthInterface_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes|Health" },
		{ "ModuleRelativePath", "Core/Interfaces/GGHealthInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGHealthInterface_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGGHealthInterface, nullptr, "OnTakeDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGHealthInterface_OnTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGHealthInterface_OnTakeDamage_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGGHealthInterface_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGHealthInterface_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGHealthInterface);
	UClass* Z_Construct_UClass_UGGHealthInterface_NoRegister()
	{
		return UGGHealthInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGGHealthInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGGHealthInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Gecko_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGHealthInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGGHealthInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGGHealthInterface_OnDeath, "OnDeath" }, // 1404243527
		{ &Z_Construct_UFunction_UGGHealthInterface_OnTakeDamage, "OnTakeDamage" }, // 2773511089
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGHealthInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGGHealthInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Core/Interfaces/GGHealthInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGGHealthInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGGHealthInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGHealthInterface_Statics::ClassParams = {
		&UGGHealthInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGHealthInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGHealthInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGGHealthInterface()
	{
		if (!Z_Registration_Info_UClass_UGGHealthInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGHealthInterface.OuterSingleton, Z_Construct_UClass_UGGHealthInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGGHealthInterface.OuterSingleton;
	}
	template<> GECKO_GAME_API UClass* StaticClass<UGGHealthInterface>()
	{
		return UGGHealthInterface::StaticClass();
	}
	UGGHealthInterface::UGGHealthInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGGHealthInterface);
	UGGHealthInterface::~UGGHealthInterface() {}
	static FName NAME_UGGHealthInterface_OnDeath = FName(TEXT("OnDeath"));
	void IGGHealthInterface::Execute_OnDeath(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGGHealthInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGGHealthInterface_OnDeath);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGGHealthInterface*)(O->GetNativeInterfaceAddress(UGGHealthInterface::StaticClass())))
		{
			I->OnDeath_Implementation();
		}
	}
	static FName NAME_UGGHealthInterface_OnTakeDamage = FName(TEXT("OnTakeDamage"));
	void IGGHealthInterface::Execute_OnTakeDamage(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGGHealthInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGGHealthInterface_OnTakeDamage);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGGHealthInterface*)(O->GetNativeInterfaceAddress(UGGHealthInterface::StaticClass())))
		{
			I->OnTakeDamage_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGGHealthInterface, UGGHealthInterface::StaticClass, TEXT("UGGHealthInterface"), &Z_Registration_Info_UClass_UGGHealthInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGHealthInterface), 3904852168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_2958765680(TEXT("/Script/Gecko_Game"),
		Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

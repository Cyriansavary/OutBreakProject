// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutBreakProject/Zombie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombie() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AZombie();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AZombie_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OutBreakProject();
// End Cross Module References
	DEFINE_FUNCTION(AZombie::execDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Death();
		P_NATIVE_END;
	}
	void AZombie::StaticRegisterNativesAZombie()
	{
		UClass* Class = AZombie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Death", &AZombie::execDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombie_Death_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombie_Death_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Zombie.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombie_Death_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, nullptr, "Death", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombie_Death_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombie_Death_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AZombie_Death()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombie_Death_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombie);
	UClass* Z_Construct_UClass_AZombie_NoRegister()
	{
		return AZombie::StaticClass();
	}
	struct Z_Construct_UClass_AZombie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_OutBreakProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombie_Death, "Death" }, // 1183162011
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Zombie.h" },
		{ "ModuleRelativePath", "Zombie.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Statics::NewProp_DeathMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Zombie.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombie_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombie, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::NewProp_DeathMontage_MetaData), Z_Construct_UClass_AZombie_Statics::NewProp_DeathMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Statics::NewProp_HitMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Zombie.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombie_Statics::NewProp_HitMontage = { "HitMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombie, HitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::NewProp_HitMontage_MetaData), Z_Construct_UClass_AZombie_Statics::NewProp_HitMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombie_Statics::NewProp_bIsDead_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Zombie.h" },
	};
#endif
	void Z_Construct_UClass_AZombie_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((AZombie*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZombie_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AZombie), &Z_Construct_UClass_AZombie_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::NewProp_bIsDead_MetaData), Z_Construct_UClass_AZombie_Statics::NewProp_bIsDead_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Statics::NewProp_DeathMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Statics::NewProp_HitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Statics::NewProp_bIsDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombie>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombie_Statics::ClassParams = {
		&AZombie::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZombie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AZombie()
	{
		if (!Z_Registration_Info_UClass_AZombie.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombie.OuterSingleton, Z_Construct_UClass_AZombie_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZombie.OuterSingleton;
	}
	template<> OUTBREAKPROJECT_API UClass* StaticClass<AZombie>()
	{
		return AZombie::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombie);
	AZombie::~AZombie() {}
	struct Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Zombie_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Zombie_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZombie, AZombie::StaticClass, TEXT("AZombie"), &Z_Registration_Info_UClass_AZombie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombie), 3886017146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Zombie_h_2645301848(TEXT("/Script/OutBreakProject"),
		Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Zombie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Zombie_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

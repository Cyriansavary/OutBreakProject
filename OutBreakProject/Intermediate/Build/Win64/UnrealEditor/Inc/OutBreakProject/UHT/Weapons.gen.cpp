// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutBreakProject/Weapons.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapons() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AWeapons();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AWeapons_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OutBreakProject();
// End Cross Module References
	void AWeapons::StaticRegisterNativesAWeapons()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapons);
	UClass* Z_Construct_UClass_AWeapons_NoRegister()
	{
		return AWeapons::StaticClass();
	}
	struct Z_Construct_UClass_AWeapons_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapons_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OutBreakProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons.h" },
		{ "ModuleRelativePath", "Weapons.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapons, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh_MetaData), Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapons_Statics::NewProp_WeaponMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapons_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapons>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapons_Statics::ClassParams = {
		&AWeapons::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapons_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapons_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapons_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeapons()
	{
		if (!Z_Registration_Info_UClass_AWeapons.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapons.OuterSingleton, Z_Construct_UClass_AWeapons_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapons.OuterSingleton;
	}
	template<> OUTBREAKPROJECT_API UClass* StaticClass<AWeapons>()
	{
		return AWeapons::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapons);
	AWeapons::~AWeapons() {}
	struct Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Weapons_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Weapons_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapons, AWeapons::StaticClass, TEXT("AWeapons"), &Z_Registration_Info_UClass_AWeapons, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapons), 3542103844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Weapons_h_2122793466(TEXT("/Script/OutBreakProject"),
		Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Weapons_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_Weapons_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

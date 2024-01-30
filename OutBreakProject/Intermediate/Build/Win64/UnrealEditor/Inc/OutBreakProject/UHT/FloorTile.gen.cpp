// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutBreakProject/FloorTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorTile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AFloorTile();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AFloorTile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OutBreakProject();
// End Cross Module References
	void AFloorTile::StaticRegisterNativesAFloorTile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorTile);
	UClass* Z_Construct_UClass_AFloorTile_NoRegister()
	{
		return AFloorTile::StaticClass();
	}
	struct Z_Construct_UClass_AFloorTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightWall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attachpoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightWallBlockBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightWallBlockBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftWallBlockBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftWallBlockBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorTriggerBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorTriggerBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloorTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OutBreakProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloorTile.h" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorTile, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorTile, FloorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh_MetaData), Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWall_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWall = { "LeftWall", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorTile, LeftWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWall_MetaData), Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWall_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWall = { "RightWall", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorTile, RightWall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWall_MetaData), Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_Attachpoint_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_Attachpoint = { "Attachpoint", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorTile, Attachpoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_Attachpoint_MetaData), Z_Construct_UClass_AFloorTile_Statics::NewProp_Attachpoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWallBlockBox_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWallBlockBox = { "RightWallBlockBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorTile, RightWallBlockBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWallBlockBox_MetaData), Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWallBlockBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWallBlockBox_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWallBlockBox = { "LeftWallBlockBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorTile, LeftWallBlockBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWallBlockBox_MetaData), Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWallBlockBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox = { "FloorTriggerBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorTile, FloorTriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox_MetaData), Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnBox_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnBox = { "SpawnBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorTile, SpawnBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnBox_MetaData), Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_Attachpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_RightWallBlockBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_LeftWallBlockBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_FloorTriggerBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorTile_Statics::NewProp_SpawnBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloorTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorTile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorTile_Statics::ClassParams = {
		&AFloorTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloorTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorTile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorTile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFloorTile()
	{
		if (!Z_Registration_Info_UClass_AFloorTile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorTile.OuterSingleton, Z_Construct_UClass_AFloorTile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloorTile.OuterSingleton;
	}
	template<> OUTBREAKPROJECT_API UClass* StaticClass<AFloorTile>()
	{
		return AFloorTile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorTile);
	AFloorTile::~AFloorTile() {}
	struct Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_FloorTile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_FloorTile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloorTile, AFloorTile::StaticClass, TEXT("AFloorTile"), &Z_Registration_Info_UClass_AFloorTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorTile), 3283711401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_FloorTile_h_1002546494(TEXT("/Script/OutBreakProject"),
		Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_FloorTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_FloorTile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutBreakProject/OutBreakGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutBreakGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AFloorTile_NoRegister();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AOutBreakGameMode();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AOutBreakGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OutBreakProject();
// End Cross Module References
	DEFINE_FUNCTION(AOutBreakGameMode::execAddFloorTile)
	{
		P_GET_UBOOL(Z_Param_bSpawnItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFloorTile**)Z_Param__Result=P_THIS->AddFloorTile(Z_Param_bSpawnItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutBreakGameMode::execCreateInitialFloorTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInitialFloorTiles();
		P_NATIVE_END;
	}
	void AOutBreakGameMode::StaticRegisterNativesAOutBreakGameMode()
	{
		UClass* Class = AOutBreakGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFloorTile", &AOutBreakGameMode::execAddFloorTile },
			{ "CreateInitialFloorTiles", &AOutBreakGameMode::execCreateInitialFloorTiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics
	{
		struct OutBreakGameMode_eventAddFloorTile_Parms
		{
			bool bSpawnItems;
			AFloorTile* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnItems_MetaData[];
#endif
		static void NewProp_bSpawnItems_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnItems;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::NewProp_bSpawnItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::NewProp_bSpawnItems_SetBit(void* Obj)
	{
		((OutBreakGameMode_eventAddFloorTile_Parms*)Obj)->bSpawnItems = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::NewProp_bSpawnItems = { "bSpawnItems", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OutBreakGameMode_eventAddFloorTile_Parms), &Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::NewProp_bSpawnItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::NewProp_bSpawnItems_MetaData), Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::NewProp_bSpawnItems_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutBreakGameMode_eventAddFloorTile_Parms, ReturnValue), Z_Construct_UClass_AFloorTile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::NewProp_bSpawnItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutBreakGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutBreakGameMode, nullptr, "AddFloorTile", nullptr, nullptr, Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::OutBreakGameMode_eventAddFloorTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::OutBreakGameMode_eventAddFloorTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutBreakGameMode_CreateInitialFloorTiles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutBreakGameMode_CreateInitialFloorTiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutBreakGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutBreakGameMode_CreateInitialFloorTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutBreakGameMode, nullptr, "CreateInitialFloorTiles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutBreakGameMode_CreateInitialFloorTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutBreakGameMode_CreateInitialFloorTiles_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOutBreakGameMode_CreateInitialFloorTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutBreakGameMode_CreateInitialFloorTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOutBreakGameMode);
	UClass* Z_Construct_UClass_AOutBreakGameMode_NoRegister()
	{
		return AOutBreakGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOutBreakGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalMeters_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalMeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorTileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FloorTileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInitialFloorTiles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInitialFloorTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextSpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextSpawnPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOutBreakGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OutBreakProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOutBreakGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AOutBreakGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOutBreakGameMode_AddFloorTile, "AddFloorTile" }, // 1424437151
		{ &Z_Construct_UFunction_AOutBreakGameMode_CreateInitialFloorTiles, "CreateInitialFloorTiles" }, // 3001248417
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOutBreakGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutBreakGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OutBreakGameMode.h" },
		{ "ModuleRelativePath", "OutBreakGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_TotalMeters_MetaData[] = {
		{ "Category", "OutBreakGameMode" },
		{ "ModuleRelativePath", "OutBreakGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_TotalMeters = { "TotalMeters", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutBreakGameMode, TotalMeters), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_TotalMeters_MetaData), Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_TotalMeters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_FloorTileClass_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "OutBreakGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_FloorTileClass = { "FloorTileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutBreakGameMode, FloorTileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFloorTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_FloorTileClass_MetaData), Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_FloorTileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NumInitialFloorTiles_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "OutBreakGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NumInitialFloorTiles = { "NumInitialFloorTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutBreakGameMode, NumInitialFloorTiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NumInitialFloorTiles_MetaData), Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NumInitialFloorTiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NextSpawnPoint_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "OutBreakGameMode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NextSpawnPoint = { "NextSpawnPoint", nullptr, (EPropertyFlags)0x0010000000020801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutBreakGameMode, NextSpawnPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NextSpawnPoint_MetaData), Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NextSpawnPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOutBreakGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_TotalMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_FloorTileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NumInitialFloorTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutBreakGameMode_Statics::NewProp_NextSpawnPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOutBreakGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOutBreakGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOutBreakGameMode_Statics::ClassParams = {
		&AOutBreakGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOutBreakGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOutBreakGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutBreakGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOutBreakGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOutBreakGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AOutBreakGameMode()
	{
		if (!Z_Registration_Info_UClass_AOutBreakGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOutBreakGameMode.OuterSingleton, Z_Construct_UClass_AOutBreakGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOutBreakGameMode.OuterSingleton;
	}
	template<> OUTBREAKPROJECT_API UClass* StaticClass<AOutBreakGameMode>()
	{
		return AOutBreakGameMode::StaticClass();
	}
	AOutBreakGameMode::AOutBreakGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOutBreakGameMode);
	AOutBreakGameMode::~AOutBreakGameMode() {}
	struct Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOutBreakGameMode, AOutBreakGameMode::StaticClass, TEXT("AOutBreakGameMode"), &Z_Registration_Info_UClass_AOutBreakGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOutBreakGameMode), 2453150193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_543770200(TEXT("/Script/OutBreakProject"),
		Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

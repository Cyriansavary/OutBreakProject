// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutBreakProject/OutbreakCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutbreakCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AOutbreakCharacter();
	OUTBREAKPROJECT_API UClass* Z_Construct_UClass_AOutbreakCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OutBreakProject();
// End Cross Module References
	DEFINE_FUNCTION(AOutbreakCharacter::execAddCoin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCoin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutbreakCharacter::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutbreakCharacter::execIsNotAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsNotAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutbreakCharacter::execIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutbreakCharacter::execMoveDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutbreakCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutbreakCharacter::execOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutbreakCharacter::execlookUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->lookUp(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutbreakCharacter::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOutbreakCharacter::execDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Death();
		P_NATIVE_END;
	}
	void AOutbreakCharacter::StaticRegisterNativesAOutbreakCharacter()
	{
		UClass* Class = AOutbreakCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCoin", &AOutbreakCharacter::execAddCoin },
			{ "Death", &AOutbreakCharacter::execDeath },
			{ "IsAiming", &AOutbreakCharacter::execIsAiming },
			{ "IsNotAiming", &AOutbreakCharacter::execIsNotAiming },
			{ "lookUp", &AOutbreakCharacter::execlookUp },
			{ "MoveDown", &AOutbreakCharacter::execMoveDown },
			{ "MoveRight", &AOutbreakCharacter::execMoveRight },
			{ "OnDeath", &AOutbreakCharacter::execOnDeath },
			{ "Shoot", &AOutbreakCharacter::execShoot },
			{ "Turn", &AOutbreakCharacter::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_AddCoin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_AddCoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_AddCoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "AddCoin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_AddCoin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_AddCoin_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_AddCoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_AddCoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_Death_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_Death_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_Death_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "Death", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_Death_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_Death_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_Death()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_Death_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_IsAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_IsAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_IsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "IsAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_IsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_IsAiming_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_IsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_IsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_IsNotAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_IsNotAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_IsNotAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "IsNotAiming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_IsNotAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_IsNotAiming_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_IsNotAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_IsNotAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics
	{
		struct OutbreakCharacter_eventlookUp_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutbreakCharacter_eventlookUp_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "lookUp", nullptr, nullptr, Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::OutbreakCharacter_eventlookUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::OutbreakCharacter_eventlookUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_lookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_lookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_MoveDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_MoveDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_MoveDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "MoveDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_MoveDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_MoveDown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_MoveDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_MoveDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics
	{
		struct OutbreakCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutbreakCharacter_eventMoveRight_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "MoveRight", nullptr, nullptr, Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::OutbreakCharacter_eventMoveRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::OutbreakCharacter_eventMoveRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_OnDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_OnDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_Shoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "Shoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_Shoot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics
	{
		struct OutbreakCharacter_eventTurn_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OutbreakCharacter_eventTurn_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOutbreakCharacter, nullptr, "Turn", nullptr, nullptr, Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::OutbreakCharacter_eventTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::OutbreakCharacter_eventTurn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AOutbreakCharacter_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOutbreakCharacter_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOutbreakCharacter);
	UClass* Z_Construct_UClass_AOutbreakCharacter_NoRegister()
	{
		return AOutbreakCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AOutbreakCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireMontageIdle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontageIdle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireMontageAiming_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontageAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RestartTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOutbreakCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_OutBreakProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AOutbreakCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOutbreakCharacter_AddCoin, "AddCoin" }, // 1738085895
		{ &Z_Construct_UFunction_AOutbreakCharacter_Death, "Death" }, // 3917374222
		{ &Z_Construct_UFunction_AOutbreakCharacter_IsAiming, "IsAiming" }, // 3296469645
		{ &Z_Construct_UFunction_AOutbreakCharacter_IsNotAiming, "IsNotAiming" }, // 209177404
		{ &Z_Construct_UFunction_AOutbreakCharacter_lookUp, "lookUp" }, // 668291050
		{ &Z_Construct_UFunction_AOutbreakCharacter_MoveDown, "MoveDown" }, // 2622609126
		{ &Z_Construct_UFunction_AOutbreakCharacter_MoveRight, "MoveRight" }, // 428684132
		{ &Z_Construct_UFunction_AOutbreakCharacter_OnDeath, "OnDeath" }, // 2213506751
		{ &Z_Construct_UFunction_AOutbreakCharacter_Shoot, "Shoot" }, // 3218033769
		{ &Z_Construct_UFunction_AOutbreakCharacter_Turn, "Turn" }, // 1188254982
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OutbreakCharacter.h" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_CameraArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_CameraArm_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_CameraArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_PawnMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_PawnMovement = { "PawnMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, PawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_PawnMovement_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_PawnMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, StaticMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_WeaponMesh_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_WeaponMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((AOutbreakCharacter*)Obj)->bIsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOutbreakCharacter), &Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsAiming_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsAiming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageIdle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageIdle = { "FireMontageIdle", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, FireMontageIdle), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageIdle_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageIdle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageAiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageAiming = { "FireMontageAiming", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, FireMontageAiming), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageAiming_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageAiming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathParticle_MetaData[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathParticle = { "DeathParticle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, DeathParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathParticle_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathSound_MetaData[] = {
		{ "Category", "Assets" },
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathSound = { "DeathSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, DeathSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathSound_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_RestartTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_RestartTimerHandle = { "RestartTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOutbreakCharacter, RestartTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_RestartTimerHandle_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_RestartTimerHandle_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsDead_MetaData[] = {
		{ "ModuleRelativePath", "OutbreakCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((AOutbreakCharacter*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOutbreakCharacter), &Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsDead_MetaData), Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsDead_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOutbreakCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_CameraArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_PawnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageIdle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_FireMontageAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_DeathSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_RestartTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOutbreakCharacter_Statics::NewProp_bIsDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOutbreakCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOutbreakCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOutbreakCharacter_Statics::ClassParams = {
		&AOutbreakCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOutbreakCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AOutbreakCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOutbreakCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AOutbreakCharacter()
	{
		if (!Z_Registration_Info_UClass_AOutbreakCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOutbreakCharacter.OuterSingleton, Z_Construct_UClass_AOutbreakCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOutbreakCharacter.OuterSingleton;
	}
	template<> OUTBREAKPROJECT_API UClass* StaticClass<AOutbreakCharacter>()
	{
		return AOutbreakCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOutbreakCharacter);
	AOutbreakCharacter::~AOutbreakCharacter() {}
	struct Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOutbreakCharacter, AOutbreakCharacter::StaticClass, TEXT("AOutbreakCharacter"), &Z_Registration_Info_UClass_AOutbreakCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOutbreakCharacter), 784736706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_1477807378(TEXT("/Script/OutBreakProject"),
		Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

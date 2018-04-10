// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProLessWeightGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProLessWeightGameMode() {}
// Cross Module References
	PROLESSWEIGHT_API UClass* Z_Construct_UClass_AProLessWeightGameMode_NoRegister();
	PROLESSWEIGHT_API UClass* Z_Construct_UClass_AProLessWeightGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProLessWeight();
// End Cross Module References
	void AProLessWeightGameMode::StaticRegisterNativesAProLessWeightGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProLessWeightGameMode_NoRegister()
	{
		return AProLessWeightGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AProLessWeightGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ProLessWeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ProLessWeightGameMode.h" },
				{ "ModuleRelativePath", "ProLessWeightGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProLessWeightGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProLessWeightGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProLessWeightGameMode, 74002371);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProLessWeightGameMode(Z_Construct_UClass_AProLessWeightGameMode, &AProLessWeightGameMode::StaticClass, TEXT("/Script/ProLessWeight"), TEXT("AProLessWeightGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProLessWeightGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

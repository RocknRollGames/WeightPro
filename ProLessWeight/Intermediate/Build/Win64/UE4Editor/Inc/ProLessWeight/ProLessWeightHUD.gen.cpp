// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProLessWeightHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProLessWeightHUD() {}
// Cross Module References
	PROLESSWEIGHT_API UClass* Z_Construct_UClass_AProLessWeightHUD_NoRegister();
	PROLESSWEIGHT_API UClass* Z_Construct_UClass_AProLessWeightHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ProLessWeight();
// End Cross Module References
	void AProLessWeightHUD::StaticRegisterNativesAProLessWeightHUD()
	{
	}
	UClass* Z_Construct_UClass_AProLessWeightHUD_NoRegister()
	{
		return AProLessWeightHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AProLessWeightHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_ProLessWeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "ProLessWeightHUD.h" },
				{ "ModuleRelativePath", "ProLessWeightHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProLessWeightHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProLessWeightHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProLessWeightHUD, 4155480444);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProLessWeightHUD(Z_Construct_UClass_AProLessWeightHUD, &AProLessWeightHUD::StaticClass, TEXT("/Script/ProLessWeight"), TEXT("AProLessWeightHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProLessWeightHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

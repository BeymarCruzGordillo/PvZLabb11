// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZLabb/FacadePrincipal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadePrincipal() {}
// Cross Module References
	PVZLABB_API UClass* Z_Construct_UClass_AFacadePrincipal_NoRegister();
	PVZLABB_API UClass* Z_Construct_UClass_AFacadePrincipal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PvZLabb();
// End Cross Module References
	void AFacadePrincipal::StaticRegisterNativesAFacadePrincipal()
	{
	}
	UClass* Z_Construct_UClass_AFacadePrincipal_NoRegister()
	{
		return AFacadePrincipal::StaticClass();
	}
	struct Z_Construct_UClass_AFacadePrincipal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadePrincipal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZLabb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadePrincipal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadePrincipal.h" },
		{ "ModuleRelativePath", "FacadePrincipal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadePrincipal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadePrincipal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadePrincipal_Statics::ClassParams = {
		&AFacadePrincipal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacadePrincipal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadePrincipal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadePrincipal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadePrincipal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadePrincipal, 307871989);
	template<> PVZLABB_API UClass* StaticClass<AFacadePrincipal>()
	{
		return AFacadePrincipal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadePrincipal(Z_Construct_UClass_AFacadePrincipal, &AFacadePrincipal::StaticClass, TEXT("/Script/PvZLabb"), TEXT("AFacadePrincipal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadePrincipal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZLabb/PvZLabbGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePvZLabbGameMode() {}
// Cross Module References
	PVZLABB_API UClass* Z_Construct_UClass_APvZLabbGameMode_NoRegister();
	PVZLABB_API UClass* Z_Construct_UClass_APvZLabbGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PvZLabb();
// End Cross Module References
	void APvZLabbGameMode::StaticRegisterNativesAPvZLabbGameMode()
	{
	}
	UClass* Z_Construct_UClass_APvZLabbGameMode_NoRegister()
	{
		return APvZLabbGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APvZLabbGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APvZLabbGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZLabb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APvZLabbGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PvZLabbGameMode.h" },
		{ "ModuleRelativePath", "PvZLabbGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APvZLabbGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APvZLabbGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APvZLabbGameMode_Statics::ClassParams = {
		&APvZLabbGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APvZLabbGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APvZLabbGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APvZLabbGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APvZLabbGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APvZLabbGameMode, 4288002028);
	template<> PVZLABB_API UClass* StaticClass<APvZLabbGameMode>()
	{
		return APvZLabbGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APvZLabbGameMode(Z_Construct_UClass_APvZLabbGameMode, &APvZLabbGameMode::StaticClass, TEXT("/Script/PvZLabb"), TEXT("APvZLabbGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APvZLabbGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

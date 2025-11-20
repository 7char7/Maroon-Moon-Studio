// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SheepyStudios/TestScript.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTestScript() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SHEEPYSTUDIOS_API UClass* Z_Construct_UClass_ATestScript();
SHEEPYSTUDIOS_API UClass* Z_Construct_UClass_ATestScript_NoRegister();
UPackage* Z_Construct_UPackage__Script_SheepyStudios();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATestScript **************************************************************
void ATestScript::StaticRegisterNativesATestScript()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATestScript;
UClass* ATestScript::GetPrivateStaticClass()
{
	using TClass = ATestScript;
	if (!Z_Registration_Info_UClass_ATestScript.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TestScript"),
			Z_Registration_Info_UClass_ATestScript.InnerSingleton,
			StaticRegisterNativesATestScript,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATestScript.InnerSingleton;
}
UClass* Z_Construct_UClass_ATestScript_NoRegister()
{
	return ATestScript::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATestScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TestScript.h" },
		{ "ModuleRelativePath", "TestScript.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SheepyStudios,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestScript_Statics::ClassParams = {
	&ATestScript::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestScript_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestScript()
{
	if (!Z_Registration_Info_UClass_ATestScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestScript.OuterSingleton, Z_Construct_UClass_ATestScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestScript.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestScript);
ATestScript::~ATestScript() {}
// ********** End Class ATestScript ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rappa_Documents_Github_Sheepy_Studios_SheepyStudios_Source_SheepyStudios_TestScript_h__Script_SheepyStudios_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestScript, ATestScript::StaticClass, TEXT("ATestScript"), &Z_Registration_Info_UClass_ATestScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestScript), 8090210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rappa_Documents_Github_Sheepy_Studios_SheepyStudios_Source_SheepyStudios_TestScript_h__Script_SheepyStudios_2547705073(TEXT("/Script/SheepyStudios"),
	Z_CompiledInDeferFile_FID_Users_rappa_Documents_Github_Sheepy_Studios_SheepyStudios_Source_SheepyStudios_TestScript_h__Script_SheepyStudios_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rappa_Documents_Github_Sheepy_Studios_SheepyStudios_Source_SheepyStudios_TestScript_h__Script_SheepyStudios_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

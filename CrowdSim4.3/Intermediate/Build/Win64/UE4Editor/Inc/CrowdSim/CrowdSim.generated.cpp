// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "CrowdSim.h"
#include "GeneratedCppIncludes.h"
#include "CrowdSim.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1CrowdSim() {}
	void UPMME::StaticRegisterNativesUPMME()
	{
	}
	IMPLEMENT_CLASS(UPMME, 419140194);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();

	CROWDSIM_API class UClass* Z_Construct_UClass_UPMME_NoRegister();
	CROWDSIM_API class UClass* Z_Construct_UClass_UPMME();
	CROWDSIM_API class UPackage* Z_Construct_UPackage__Script_CrowdSim();
	UClass* Z_Construct_UClass_UPMME_NoRegister()
	{
		return UPMME::StaticClass();
	}
	UClass* Z_Construct_UClass_UPMME()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_CrowdSim();
			OuterClass = UPMME::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_perceiving = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("perceiving"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(perceiving, UPMME), 0x0010000000000005);
				UProperty* NewProp_feeling = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("feeling"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(feeling, UPMME), 0x0010000000000005);
				UProperty* NewProp_intuition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("intuition"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(intuition, UPMME), 0x0010000000000005);
				UProperty* NewProp_extraversion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("extraversion"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(extraversion, UPMME), 0x0010000000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PMME.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PMME.h"));
				MetaData->SetValue(NewProp_perceiving, TEXT("Category"), TEXT("PMME"));
				MetaData->SetValue(NewProp_perceiving, TEXT("ModuleRelativePath"), TEXT("PMME.h"));
				MetaData->SetValue(NewProp_perceiving, TEXT("ToolTip"), TEXT("Max is feeling, 0 is thinking"));
				MetaData->SetValue(NewProp_feeling, TEXT("Category"), TEXT("PMME"));
				MetaData->SetValue(NewProp_feeling, TEXT("ModuleRelativePath"), TEXT("PMME.h"));
				MetaData->SetValue(NewProp_feeling, TEXT("ToolTip"), TEXT("Max is intution, 0 is sensing"));
				MetaData->SetValue(NewProp_intuition, TEXT("Category"), TEXT("PMME"));
				MetaData->SetValue(NewProp_intuition, TEXT("ModuleRelativePath"), TEXT("PMME.h"));
				MetaData->SetValue(NewProp_intuition, TEXT("ToolTip"), TEXT("Max is extrovert, 0 is introvert"));
				MetaData->SetValue(NewProp_extraversion, TEXT("Category"), TEXT("PMME"));
				MetaData->SetValue(NewProp_extraversion, TEXT("ModuleRelativePath"), TEXT("PMME.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPMME(Z_Construct_UClass_UPMME, &UPMME::StaticClass, TEXT("UPMME"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPMME);
	UPackage* Z_Construct_UPackage__Script_CrowdSim()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/CrowdSim")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x52F4C76D;
			Guid.B = 0x85EA7B66;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS

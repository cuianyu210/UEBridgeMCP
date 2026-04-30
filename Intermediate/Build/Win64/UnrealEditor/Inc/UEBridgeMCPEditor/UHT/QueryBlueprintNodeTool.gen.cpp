// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/QueryBlueprintNodeTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryBlueprintNodeTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintNodeTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintNodeTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryBlueprintNodeTool
void UQueryBlueprintNodeTool::StaticRegisterNativesUQueryBlueprintNodeTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryBlueprintNodeTool);
UClass* Z_Construct_UClass_UQueryBlueprintNodeTool_NoRegister()
{
	return UQueryBlueprintNodeTool::StaticClass();
}
struct Z_Construct_UClass_UQueryBlueprintNodeTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Blueprint/QueryBlueprintNodeTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/QueryBlueprintNodeTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryBlueprintNodeTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryBlueprintNodeTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintNodeTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryBlueprintNodeTool_Statics::ClassParams = {
	&UQueryBlueprintNodeTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintNodeTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryBlueprintNodeTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryBlueprintNodeTool()
{
	if (!Z_Registration_Info_UClass_UQueryBlueprintNodeTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryBlueprintNodeTool.OuterSingleton, Z_Construct_UClass_UQueryBlueprintNodeTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryBlueprintNodeTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryBlueprintNodeTool>()
{
	return UQueryBlueprintNodeTool::StaticClass();
}
UQueryBlueprintNodeTool::UQueryBlueprintNodeTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryBlueprintNodeTool);
UQueryBlueprintNodeTool::~UQueryBlueprintNodeTool() {}
// End Class UQueryBlueprintNodeTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintNodeTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryBlueprintNodeTool, UQueryBlueprintNodeTool::StaticClass, TEXT("UQueryBlueprintNodeTool"), &Z_Registration_Info_UClass_UQueryBlueprintNodeTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryBlueprintNodeTool), 2423548284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintNodeTool_h_2306067350(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintNodeTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintNodeTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

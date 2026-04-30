// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/QueryBlueprintSummaryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryBlueprintSummaryTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintSummaryTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryBlueprintSummaryTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryBlueprintSummaryTool
void UQueryBlueprintSummaryTool::StaticRegisterNativesUQueryBlueprintSummaryTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryBlueprintSummaryTool);
UClass* Z_Construct_UClass_UQueryBlueprintSummaryTool_NoRegister()
{
	return UQueryBlueprintSummaryTool::StaticClass();
}
struct Z_Construct_UClass_UQueryBlueprintSummaryTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Blueprint/QueryBlueprintSummaryTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/QueryBlueprintSummaryTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryBlueprintSummaryTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryBlueprintSummaryTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintSummaryTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryBlueprintSummaryTool_Statics::ClassParams = {
	&UQueryBlueprintSummaryTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryBlueprintSummaryTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryBlueprintSummaryTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryBlueprintSummaryTool()
{
	if (!Z_Registration_Info_UClass_UQueryBlueprintSummaryTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryBlueprintSummaryTool.OuterSingleton, Z_Construct_UClass_UQueryBlueprintSummaryTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryBlueprintSummaryTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryBlueprintSummaryTool>()
{
	return UQueryBlueprintSummaryTool::StaticClass();
}
UQueryBlueprintSummaryTool::UQueryBlueprintSummaryTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryBlueprintSummaryTool);
UQueryBlueprintSummaryTool::~UQueryBlueprintSummaryTool() {}
// End Class UQueryBlueprintSummaryTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintSummaryTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryBlueprintSummaryTool, UQueryBlueprintSummaryTool::StaticClass, TEXT("UQueryBlueprintSummaryTool"), &Z_Registration_Info_UClass_UQueryBlueprintSummaryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryBlueprintSummaryTool), 1799822977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintSummaryTool_h_990547116(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintSummaryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_QueryBlueprintSummaryTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

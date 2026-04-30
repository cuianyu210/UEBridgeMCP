// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Level/QueryLevelSummaryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryLevelSummaryTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryLevelSummaryTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryLevelSummaryTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryLevelSummaryTool
void UQueryLevelSummaryTool::StaticRegisterNativesUQueryLevelSummaryTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryLevelSummaryTool);
UClass* Z_Construct_UClass_UQueryLevelSummaryTool_NoRegister()
{
	return UQueryLevelSummaryTool::StaticClass();
}
struct Z_Construct_UClass_UQueryLevelSummaryTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Level/QueryLevelSummaryTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Level/QueryLevelSummaryTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryLevelSummaryTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryLevelSummaryTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryLevelSummaryTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryLevelSummaryTool_Statics::ClassParams = {
	&UQueryLevelSummaryTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryLevelSummaryTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryLevelSummaryTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryLevelSummaryTool()
{
	if (!Z_Registration_Info_UClass_UQueryLevelSummaryTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryLevelSummaryTool.OuterSingleton, Z_Construct_UClass_UQueryLevelSummaryTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryLevelSummaryTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryLevelSummaryTool>()
{
	return UQueryLevelSummaryTool::StaticClass();
}
UQueryLevelSummaryTool::UQueryLevelSummaryTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryLevelSummaryTool);
UQueryLevelSummaryTool::~UQueryLevelSummaryTool() {}
// End Class UQueryLevelSummaryTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryLevelSummaryTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryLevelSummaryTool, UQueryLevelSummaryTool::StaticClass, TEXT("UQueryLevelSummaryTool"), &Z_Registration_Info_UClass_UQueryLevelSummaryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryLevelSummaryTool), 4181697537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryLevelSummaryTool_h_3051266258(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryLevelSummaryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryLevelSummaryTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

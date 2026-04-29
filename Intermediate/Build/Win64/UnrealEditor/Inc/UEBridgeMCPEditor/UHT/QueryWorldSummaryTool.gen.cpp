// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Level/QueryWorldSummaryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryWorldSummaryTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryWorldSummaryTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryWorldSummaryTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryWorldSummaryTool
void UQueryWorldSummaryTool::StaticRegisterNativesUQueryWorldSummaryTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryWorldSummaryTool);
UClass* Z_Construct_UClass_UQueryWorldSummaryTool_NoRegister()
{
	return UQueryWorldSummaryTool::StaticClass();
}
struct Z_Construct_UClass_UQueryWorldSummaryTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Level/QueryWorldSummaryTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Level/QueryWorldSummaryTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryWorldSummaryTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryWorldSummaryTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryWorldSummaryTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryWorldSummaryTool_Statics::ClassParams = {
	&UQueryWorldSummaryTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryWorldSummaryTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryWorldSummaryTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryWorldSummaryTool()
{
	if (!Z_Registration_Info_UClass_UQueryWorldSummaryTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryWorldSummaryTool.OuterSingleton, Z_Construct_UClass_UQueryWorldSummaryTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryWorldSummaryTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryWorldSummaryTool>()
{
	return UQueryWorldSummaryTool::StaticClass();
}
UQueryWorldSummaryTool::UQueryWorldSummaryTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryWorldSummaryTool);
UQueryWorldSummaryTool::~UQueryWorldSummaryTool() {}
// End Class UQueryWorldSummaryTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryWorldSummaryTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryWorldSummaryTool, UQueryWorldSummaryTool::StaticClass, TEXT("UQueryWorldSummaryTool"), &Z_Registration_Info_UClass_UQueryWorldSummaryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryWorldSummaryTool), 399630406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryWorldSummaryTool_h_2533337993(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryWorldSummaryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryWorldSummaryTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

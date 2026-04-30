// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Level/QueryLevelTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryLevelTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryLevelTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryLevelTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryLevelTool
void UQueryLevelTool::StaticRegisterNativesUQueryLevelTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryLevelTool);
UClass* Z_Construct_UClass_UQueryLevelTool_NoRegister()
{
	return UQueryLevelTool::StaticClass();
}
struct Z_Construct_UClass_UQueryLevelTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tool for querying actors in the currently open level.\n * Can list actors with filtering, or get detailed info for a specific actor.\n */" },
#endif
		{ "IncludePath", "Tools/Level/QueryLevelTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Level/QueryLevelTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool for querying actors in the currently open level.\nCan list actors with filtering, or get detailed info for a specific actor." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryLevelTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryLevelTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryLevelTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryLevelTool_Statics::ClassParams = {
	&UQueryLevelTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryLevelTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryLevelTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryLevelTool()
{
	if (!Z_Registration_Info_UClass_UQueryLevelTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryLevelTool.OuterSingleton, Z_Construct_UClass_UQueryLevelTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryLevelTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryLevelTool>()
{
	return UQueryLevelTool::StaticClass();
}
UQueryLevelTool::UQueryLevelTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryLevelTool);
UQueryLevelTool::~UQueryLevelTool() {}
// End Class UQueryLevelTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryLevelTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryLevelTool, UQueryLevelTool::StaticClass, TEXT("UQueryLevelTool"), &Z_Registration_Info_UClass_UQueryLevelTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryLevelTool), 2217368868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryLevelTool_h_3540409141(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryLevelTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryLevelTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

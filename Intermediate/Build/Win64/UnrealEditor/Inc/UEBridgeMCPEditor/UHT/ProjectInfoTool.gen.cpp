// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Project/ProjectInfoTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectInfoTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UProjectInfoTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UProjectInfoTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UProjectInfoTool
void UProjectInfoTool::StaticRegisterNativesUProjectInfoTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectInfoTool);
UClass* Z_Construct_UClass_UProjectInfoTool_NoRegister()
{
	return UProjectInfoTool::StaticClass();
}
struct Z_Construct_UClass_UProjectInfoTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tool for retrieving project and plugin information.\n * Returns project name, path, plugin version, and optionally project settings.\n */" },
#endif
		{ "IncludePath", "Tools/Project/ProjectInfoTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Project/ProjectInfoTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool for retrieving project and plugin information.\nReturns project name, path, plugin version, and optionally project settings." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectInfoTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProjectInfoTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectInfoTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectInfoTool_Statics::ClassParams = {
	&UProjectInfoTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectInfoTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectInfoTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProjectInfoTool()
{
	if (!Z_Registration_Info_UClass_UProjectInfoTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectInfoTool.OuterSingleton, Z_Construct_UClass_UProjectInfoTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectInfoTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UProjectInfoTool>()
{
	return UProjectInfoTool::StaticClass();
}
UProjectInfoTool::UProjectInfoTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectInfoTool);
UProjectInfoTool::~UProjectInfoTool() {}
// End Class UProjectInfoTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectInfoTool, UProjectInfoTool::StaticClass, TEXT("UProjectInfoTool"), &Z_Registration_Info_UClass_UProjectInfoTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectInfoTool), 1000509860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_4176990151(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Project_ProjectInfoTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

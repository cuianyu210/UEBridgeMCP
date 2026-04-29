// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Analysis/ClassHierarchyTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassHierarchyTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UClassHierarchyTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UClassHierarchyTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UClassHierarchyTool
void UClassHierarchyTool::StaticRegisterNativesUClassHierarchyTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassHierarchyTool);
UClass* Z_Construct_UClass_UClassHierarchyTool_NoRegister()
{
	return UClassHierarchyTool::StaticClass();
}
struct Z_Construct_UClass_UClassHierarchyTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool for browsing class inheritance tree\n */" },
		{ "IncludePath", "Tools/Analysis/ClassHierarchyTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Analysis/ClassHierarchyTool.h" },
		{ "ToolTip", "Tool for browsing class inheritance tree" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassHierarchyTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClassHierarchyTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassHierarchyTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassHierarchyTool_Statics::ClassParams = {
	&UClassHierarchyTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassHierarchyTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UClassHierarchyTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClassHierarchyTool()
{
	if (!Z_Registration_Info_UClass_UClassHierarchyTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassHierarchyTool.OuterSingleton, Z_Construct_UClass_UClassHierarchyTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClassHierarchyTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UClassHierarchyTool>()
{
	return UClassHierarchyTool::StaticClass();
}
UClassHierarchyTool::UClassHierarchyTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClassHierarchyTool);
UClassHierarchyTool::~UClassHierarchyTool() {}
// End Class UClassHierarchyTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClassHierarchyTool, UClassHierarchyTool::StaticClass, TEXT("UClassHierarchyTool"), &Z_Registration_Info_UClass_UClassHierarchyTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassHierarchyTool), 850813584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_4259336774(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Analysis_ClassHierarchyTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

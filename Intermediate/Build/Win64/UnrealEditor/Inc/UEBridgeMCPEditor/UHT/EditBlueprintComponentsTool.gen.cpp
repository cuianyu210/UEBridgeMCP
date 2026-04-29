// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/EditBlueprintComponentsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditBlueprintComponentsTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditBlueprintComponentsTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditBlueprintComponentsTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UEditBlueprintComponentsTool
void UEditBlueprintComponentsTool::StaticRegisterNativesUEditBlueprintComponentsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditBlueprintComponentsTool);
UClass* Z_Construct_UClass_UEditBlueprintComponentsTool_NoRegister()
{
	return UEditBlueprintComponentsTool::StaticClass();
}
struct Z_Construct_UClass_UEditBlueprintComponentsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe8\x93\x9d\xe5\x9b\xbe\xe7\xbb\x84\xe4\xbb\xb6\xe6\xa0\x91\xef\xbc\x88SCS\xef\xbc\x89\xe7\xbc\x96\xe8\xbe\x91\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x94\xaf\xe6\x8c\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe3\x80\x81\xe5\x88\xa0\xe9\x99\xa4\xe3\x80\x81\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe3\x80\x81\xe9\x87\x8d\xe6\x96\xb0\xe6\x8c\x82\xe6\x8e\xa5\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe4\xbb\xa5\xe5\x8f\x8a\xe8\xae\xbe\xe7\xbd\xae\xe7\xbb\x84\xe4\xbb\xb6\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe3\x80\x82\n */" },
		{ "IncludePath", "Tools/Blueprint/EditBlueprintComponentsTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/EditBlueprintComponentsTool.h" },
		{ "ToolTip", "\xe8\x93\x9d\xe5\x9b\xbe\xe7\xbb\x84\xe4\xbb\xb6\xe6\xa0\x91\xef\xbc\x88SCS\xef\xbc\x89\xe7\xbc\x96\xe8\xbe\x91\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x94\xaf\xe6\x8c\x81\xe6\xb7\xbb\xe5\x8a\xa0\xe3\x80\x81\xe5\x88\xa0\xe9\x99\xa4\xe3\x80\x81\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe3\x80\x81\xe9\x87\x8d\xe6\x96\xb0\xe6\x8c\x82\xe6\x8e\xa5\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe4\xbb\xa5\xe5\x8f\x8a\xe8\xae\xbe\xe7\xbd\xae\xe7\xbb\x84\xe4\xbb\xb6\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xe3\x80\x82" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditBlueprintComponentsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditBlueprintComponentsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditBlueprintComponentsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditBlueprintComponentsTool_Statics::ClassParams = {
	&UEditBlueprintComponentsTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditBlueprintComponentsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditBlueprintComponentsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditBlueprintComponentsTool()
{
	if (!Z_Registration_Info_UClass_UEditBlueprintComponentsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditBlueprintComponentsTool.OuterSingleton, Z_Construct_UClass_UEditBlueprintComponentsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditBlueprintComponentsTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UEditBlueprintComponentsTool>()
{
	return UEditBlueprintComponentsTool::StaticClass();
}
UEditBlueprintComponentsTool::UEditBlueprintComponentsTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditBlueprintComponentsTool);
UEditBlueprintComponentsTool::~UEditBlueprintComponentsTool() {}
// End Class UEditBlueprintComponentsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintComponentsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditBlueprintComponentsTool, UEditBlueprintComponentsTool::StaticClass, TEXT("UEditBlueprintComponentsTool"), &Z_Registration_Info_UClass_UEditBlueprintComponentsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditBlueprintComponentsTool), 3765908022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintComponentsTool_h_275926587(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintComponentsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintComponentsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

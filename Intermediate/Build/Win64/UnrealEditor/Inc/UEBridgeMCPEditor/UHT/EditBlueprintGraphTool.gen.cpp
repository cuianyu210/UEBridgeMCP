// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Blueprint/EditBlueprintGraphTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditBlueprintGraphTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditBlueprintGraphTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditBlueprintGraphTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UEditBlueprintGraphTool
void UEditBlueprintGraphTool::StaticRegisterNativesUEditBlueprintGraphTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditBlueprintGraphTool);
UClass* Z_Construct_UClass_UEditBlueprintGraphTool_NoRegister()
{
	return UEditBlueprintGraphTool::StaticClass();
}
struct Z_Construct_UClass_UEditBlueprintGraphTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Blueprint/EditBlueprintGraphTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Blueprint/EditBlueprintGraphTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditBlueprintGraphTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditBlueprintGraphTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditBlueprintGraphTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditBlueprintGraphTool_Statics::ClassParams = {
	&UEditBlueprintGraphTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditBlueprintGraphTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditBlueprintGraphTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditBlueprintGraphTool()
{
	if (!Z_Registration_Info_UClass_UEditBlueprintGraphTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditBlueprintGraphTool.OuterSingleton, Z_Construct_UClass_UEditBlueprintGraphTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditBlueprintGraphTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UEditBlueprintGraphTool>()
{
	return UEditBlueprintGraphTool::StaticClass();
}
UEditBlueprintGraphTool::UEditBlueprintGraphTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditBlueprintGraphTool);
UEditBlueprintGraphTool::~UEditBlueprintGraphTool() {}
// End Class UEditBlueprintGraphTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintGraphTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditBlueprintGraphTool, UEditBlueprintGraphTool::StaticClass, TEXT("UEditBlueprintGraphTool"), &Z_Registration_Info_UClass_UEditBlueprintGraphTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditBlueprintGraphTool), 1528052775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintGraphTool_h_665258187(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintGraphTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Blueprint_EditBlueprintGraphTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

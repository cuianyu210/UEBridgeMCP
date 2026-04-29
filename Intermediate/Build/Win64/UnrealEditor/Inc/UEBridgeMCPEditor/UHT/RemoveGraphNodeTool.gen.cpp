// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/RemoveGraphNodeTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoveGraphNodeTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_URemoveGraphNodeTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_URemoveGraphNodeTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class URemoveGraphNodeTool
void URemoveGraphNodeTool::StaticRegisterNativesURemoveGraphNodeTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoveGraphNodeTool);
UClass* Z_Construct_UClass_URemoveGraphNodeTool_NoRegister()
{
	return URemoveGraphNodeTool::StaticClass();
}
struct Z_Construct_UClass_URemoveGraphNodeTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Remove a node from a Blueprint or Material graph.\n */" },
		{ "IncludePath", "Tools/Write/RemoveGraphNodeTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/RemoveGraphNodeTool.h" },
		{ "ToolTip", "Remove a node from a Blueprint or Material graph." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveGraphNodeTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URemoveGraphNodeTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemoveGraphNodeTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoveGraphNodeTool_Statics::ClassParams = {
	&URemoveGraphNodeTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoveGraphNodeTool_Statics::Class_MetaDataParams), Z_Construct_UClass_URemoveGraphNodeTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URemoveGraphNodeTool()
{
	if (!Z_Registration_Info_UClass_URemoveGraphNodeTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoveGraphNodeTool.OuterSingleton, Z_Construct_UClass_URemoveGraphNodeTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URemoveGraphNodeTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<URemoveGraphNodeTool>()
{
	return URemoveGraphNodeTool::StaticClass();
}
URemoveGraphNodeTool::URemoveGraphNodeTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveGraphNodeTool);
URemoveGraphNodeTool::~URemoveGraphNodeTool() {}
// End Class URemoveGraphNodeTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_RemoveGraphNodeTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URemoveGraphNodeTool, URemoveGraphNodeTool::StaticClass, TEXT("URemoveGraphNodeTool"), &Z_Registration_Info_UClass_URemoveGraphNodeTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoveGraphNodeTool), 3132506076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_RemoveGraphNodeTool_h_358650248(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_RemoveGraphNodeTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_RemoveGraphNodeTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

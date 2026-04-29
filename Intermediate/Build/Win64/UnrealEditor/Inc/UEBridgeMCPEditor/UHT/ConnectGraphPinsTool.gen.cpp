// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/ConnectGraphPinsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnectGraphPinsTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UConnectGraphPinsTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UConnectGraphPinsTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UConnectGraphPinsTool
void UConnectGraphPinsTool::StaticRegisterNativesUConnectGraphPinsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConnectGraphPinsTool);
UClass* Z_Construct_UClass_UConnectGraphPinsTool_NoRegister()
{
	return UConnectGraphPinsTool::StaticClass();
}
struct Z_Construct_UClass_UConnectGraphPinsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Connect two pins in a Blueprint or Material graph.\n */" },
		{ "IncludePath", "Tools/Write/ConnectGraphPinsTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/ConnectGraphPinsTool.h" },
		{ "ToolTip", "Connect two pins in a Blueprint or Material graph." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConnectGraphPinsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UConnectGraphPinsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConnectGraphPinsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConnectGraphPinsTool_Statics::ClassParams = {
	&UConnectGraphPinsTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConnectGraphPinsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UConnectGraphPinsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConnectGraphPinsTool()
{
	if (!Z_Registration_Info_UClass_UConnectGraphPinsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConnectGraphPinsTool.OuterSingleton, Z_Construct_UClass_UConnectGraphPinsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConnectGraphPinsTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UConnectGraphPinsTool>()
{
	return UConnectGraphPinsTool::StaticClass();
}
UConnectGraphPinsTool::UConnectGraphPinsTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConnectGraphPinsTool);
UConnectGraphPinsTool::~UConnectGraphPinsTool() {}
// End Class UConnectGraphPinsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_ConnectGraphPinsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConnectGraphPinsTool, UConnectGraphPinsTool::StaticClass, TEXT("UConnectGraphPinsTool"), &Z_Registration_Info_UClass_UConnectGraphPinsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConnectGraphPinsTool), 3085773483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_ConnectGraphPinsTool_h_1423047572(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_ConnectGraphPinsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_ConnectGraphPinsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

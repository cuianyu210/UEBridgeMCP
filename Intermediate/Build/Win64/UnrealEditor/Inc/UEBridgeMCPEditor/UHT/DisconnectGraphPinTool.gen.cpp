// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/DisconnectGraphPinTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisconnectGraphPinTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UDisconnectGraphPinTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UDisconnectGraphPinTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UDisconnectGraphPinTool
void UDisconnectGraphPinTool::StaticRegisterNativesUDisconnectGraphPinTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisconnectGraphPinTool);
UClass* Z_Construct_UClass_UDisconnectGraphPinTool_NoRegister()
{
	return UDisconnectGraphPinTool::StaticClass();
}
struct Z_Construct_UClass_UDisconnectGraphPinTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Break a pin connection in a Blueprint or Material graph.\n */" },
#endif
		{ "IncludePath", "Tools/Write/DisconnectGraphPinTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/DisconnectGraphPinTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Break a pin connection in a Blueprint or Material graph." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisconnectGraphPinTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDisconnectGraphPinTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisconnectGraphPinTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisconnectGraphPinTool_Statics::ClassParams = {
	&UDisconnectGraphPinTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisconnectGraphPinTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisconnectGraphPinTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDisconnectGraphPinTool()
{
	if (!Z_Registration_Info_UClass_UDisconnectGraphPinTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisconnectGraphPinTool.OuterSingleton, Z_Construct_UClass_UDisconnectGraphPinTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDisconnectGraphPinTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UDisconnectGraphPinTool>()
{
	return UDisconnectGraphPinTool::StaticClass();
}
UDisconnectGraphPinTool::UDisconnectGraphPinTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDisconnectGraphPinTool);
UDisconnectGraphPinTool::~UDisconnectGraphPinTool() {}
// End Class UDisconnectGraphPinTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_DisconnectGraphPinTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDisconnectGraphPinTool, UDisconnectGraphPinTool::StaticClass, TEXT("UDisconnectGraphPinTool"), &Z_Registration_Info_UClass_UDisconnectGraphPinTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisconnectGraphPinTool), 531179728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_DisconnectGraphPinTool_h_3502654368(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_DisconnectGraphPinTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_DisconnectGraphPinTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Debug/GetLogsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetLogsTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UGetLogsTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UGetLogsTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UGetLogsTool
void UGetLogsTool::StaticRegisterNativesUGetLogsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetLogsTool);
UClass* Z_Construct_UClass_UGetLogsTool_NoRegister()
{
	return UGetLogsTool::StaticClass();
}
struct Z_Construct_UClass_UGetLogsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * MCP tool to retrieve Unreal Engine output log entries for debugging.\n * Supports filtering by category, severity level, and message content.\n */" },
#endif
		{ "IncludePath", "Tools/Debug/GetLogsTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Debug/GetLogsTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MCP tool to retrieve Unreal Engine output log entries for debugging.\nSupports filtering by category, severity level, and message content." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetLogsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGetLogsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetLogsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetLogsTool_Statics::ClassParams = {
	&UGetLogsTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetLogsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetLogsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGetLogsTool()
{
	if (!Z_Registration_Info_UClass_UGetLogsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetLogsTool.OuterSingleton, Z_Construct_UClass_UGetLogsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGetLogsTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UGetLogsTool>()
{
	return UGetLogsTool::StaticClass();
}
UGetLogsTool::UGetLogsTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGetLogsTool);
UGetLogsTool::~UGetLogsTool() {}
// End Class UGetLogsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Debug_GetLogsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGetLogsTool, UGetLogsTool::StaticClass, TEXT("UGetLogsTool"), &Z_Registration_Info_UClass_UGetLogsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetLogsTool), 2384594240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Debug_GetLogsTool_h_994455851(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Debug_GetLogsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Debug_GetLogsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

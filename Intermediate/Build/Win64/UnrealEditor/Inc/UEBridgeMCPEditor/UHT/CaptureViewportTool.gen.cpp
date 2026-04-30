// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Debug/CaptureViewportTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureViewportTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UCaptureViewportTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UCaptureViewportTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UCaptureViewportTool
void UCaptureViewportTool::StaticRegisterNativesUCaptureViewportTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCaptureViewportTool);
UClass* Z_Construct_UClass_UCaptureViewportTool_NoRegister()
{
	return UCaptureViewportTool::StaticClass();
}
struct Z_Construct_UClass_UCaptureViewportTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Debug/CaptureViewportTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Debug/CaptureViewportTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaptureViewportTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCaptureViewportTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureViewportTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCaptureViewportTool_Statics::ClassParams = {
	&UCaptureViewportTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureViewportTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UCaptureViewportTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCaptureViewportTool()
{
	if (!Z_Registration_Info_UClass_UCaptureViewportTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCaptureViewportTool.OuterSingleton, Z_Construct_UClass_UCaptureViewportTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCaptureViewportTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UCaptureViewportTool>()
{
	return UCaptureViewportTool::StaticClass();
}
UCaptureViewportTool::UCaptureViewportTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCaptureViewportTool);
UCaptureViewportTool::~UCaptureViewportTool() {}
// End Class UCaptureViewportTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Debug_CaptureViewportTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCaptureViewportTool, UCaptureViewportTool::StaticClass, TEXT("UCaptureViewportTool"), &Z_Registration_Info_UClass_UCaptureViewportTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCaptureViewportTool), 4012182284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Debug_CaptureViewportTool_h_1658268039(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Debug_CaptureViewportTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Debug_CaptureViewportTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

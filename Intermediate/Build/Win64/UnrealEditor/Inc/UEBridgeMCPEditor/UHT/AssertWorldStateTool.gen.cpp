// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/PIE/AssertWorldStateTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssertWorldStateTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAssertWorldStateTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAssertWorldStateTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UAssertWorldStateTool
void UAssertWorldStateTool::StaticRegisterNativesUAssertWorldStateTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssertWorldStateTool);
UClass* Z_Construct_UClass_UAssertWorldStateTool_NoRegister()
{
	return UAssertWorldStateTool::StaticClass();
}
struct Z_Construct_UClass_UAssertWorldStateTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PIE/AssertWorldStateTool.h" },
		{ "ModuleRelativePath", "Public/Tools/PIE/AssertWorldStateTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssertWorldStateTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssertWorldStateTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssertWorldStateTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssertWorldStateTool_Statics::ClassParams = {
	&UAssertWorldStateTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssertWorldStateTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssertWorldStateTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssertWorldStateTool()
{
	if (!Z_Registration_Info_UClass_UAssertWorldStateTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssertWorldStateTool.OuterSingleton, Z_Construct_UClass_UAssertWorldStateTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssertWorldStateTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UAssertWorldStateTool>()
{
	return UAssertWorldStateTool::StaticClass();
}
UAssertWorldStateTool::UAssertWorldStateTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssertWorldStateTool);
UAssertWorldStateTool::~UAssertWorldStateTool() {}
// End Class UAssertWorldStateTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_AssertWorldStateTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssertWorldStateTool, UAssertWorldStateTool::StaticClass, TEXT("UAssertWorldStateTool"), &Z_Registration_Info_UClass_UAssertWorldStateTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssertWorldStateTool), 1861346683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_AssertWorldStateTool_h_4227076344(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_AssertWorldStateTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_PIE_AssertWorldStateTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

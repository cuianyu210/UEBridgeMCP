// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/CallFunctionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCallFunctionTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UCallFunctionTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UCallFunctionTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UCallFunctionTool
void UCallFunctionTool::StaticRegisterNativesUCallFunctionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCallFunctionTool);
UClass* Z_Construct_UClass_UCallFunctionTool_NoRegister()
{
	return UCallFunctionTool::StaticClass();
}
struct Z_Construct_UClass_UCallFunctionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Call functions on actors, components, or global Blueprint libraries.\n * Supports editor and PIE worlds.\n */" },
		{ "IncludePath", "Tools/CallFunctionTool.h" },
		{ "ModuleRelativePath", "Public/Tools/CallFunctionTool.h" },
		{ "ToolTip", "Call functions on actors, components, or global Blueprint libraries.\nSupports editor and PIE worlds." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCallFunctionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCallFunctionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCallFunctionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCallFunctionTool_Statics::ClassParams = {
	&UCallFunctionTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCallFunctionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UCallFunctionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCallFunctionTool()
{
	if (!Z_Registration_Info_UClass_UCallFunctionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCallFunctionTool.OuterSingleton, Z_Construct_UClass_UCallFunctionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCallFunctionTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UCallFunctionTool>()
{
	return UCallFunctionTool::StaticClass();
}
UCallFunctionTool::UCallFunctionTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCallFunctionTool);
UCallFunctionTool::~UCallFunctionTool() {}
// End Class UCallFunctionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_CallFunctionTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCallFunctionTool, UCallFunctionTool::StaticClass, TEXT("UCallFunctionTool"), &Z_Registration_Info_UClass_UCallFunctionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCallFunctionTool), 2742829845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_CallFunctionTool_h_607536926(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_CallFunctionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_CallFunctionTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/StateTree/RemoveStateTreeStateTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoveStateTreeStateTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_URemoveStateTreeStateTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_URemoveStateTreeStateTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class URemoveStateTreeStateTool
void URemoveStateTreeStateTool::StaticRegisterNativesURemoveStateTreeStateTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoveStateTreeStateTool);
UClass* Z_Construct_UClass_URemoveStateTreeStateTool_NoRegister()
{
	return URemoveStateTreeStateTool::StaticClass();
}
struct Z_Construct_UClass_URemoveStateTreeStateTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool for removing a state from a StateTree asset.\n */" },
		{ "IncludePath", "Tools/StateTree/RemoveStateTreeStateTool.h" },
		{ "ModuleRelativePath", "Public/Tools/StateTree/RemoveStateTreeStateTool.h" },
		{ "ToolTip", "Tool for removing a state from a StateTree asset." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveStateTreeStateTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URemoveStateTreeStateTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemoveStateTreeStateTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoveStateTreeStateTool_Statics::ClassParams = {
	&URemoveStateTreeStateTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemoveStateTreeStateTool_Statics::Class_MetaDataParams), Z_Construct_UClass_URemoveStateTreeStateTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URemoveStateTreeStateTool()
{
	if (!Z_Registration_Info_UClass_URemoveStateTreeStateTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoveStateTreeStateTool.OuterSingleton, Z_Construct_UClass_URemoveStateTreeStateTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URemoveStateTreeStateTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<URemoveStateTreeStateTool>()
{
	return URemoveStateTreeStateTool::StaticClass();
}
URemoveStateTreeStateTool::URemoveStateTreeStateTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveStateTreeStateTool);
URemoveStateTreeStateTool::~URemoveStateTreeStateTool() {}
// End Class URemoveStateTreeStateTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_RemoveStateTreeStateTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URemoveStateTreeStateTool, URemoveStateTreeStateTool::StaticClass, TEXT("URemoveStateTreeStateTool"), &Z_Registration_Info_UClass_URemoveStateTreeStateTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoveStateTreeStateTool), 851306606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_RemoveStateTreeStateTool_h_3013310945(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_RemoveStateTreeStateTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_RemoveStateTreeStateTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

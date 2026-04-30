// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/StateTree/QueryStateTreeTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryStateTreeTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryStateTreeTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryStateTreeTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryStateTreeTool
void UQueryStateTreeTool::StaticRegisterNativesUQueryStateTreeTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryStateTreeTool);
UClass* Z_Construct_UClass_UQueryStateTreeTool_NoRegister()
{
	return UQueryStateTreeTool::StaticClass();
}
struct Z_Construct_UClass_UQueryStateTreeTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tool for querying StateTree structure: states, transitions, tasks, evaluators, and parameters.\n */" },
#endif
		{ "IncludePath", "Tools/StateTree/QueryStateTreeTool.h" },
		{ "ModuleRelativePath", "Public/Tools/StateTree/QueryStateTreeTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool for querying StateTree structure: states, transitions, tasks, evaluators, and parameters." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryStateTreeTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryStateTreeTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryStateTreeTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryStateTreeTool_Statics::ClassParams = {
	&UQueryStateTreeTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryStateTreeTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryStateTreeTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryStateTreeTool()
{
	if (!Z_Registration_Info_UClass_UQueryStateTreeTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryStateTreeTool.OuterSingleton, Z_Construct_UClass_UQueryStateTreeTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryStateTreeTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryStateTreeTool>()
{
	return UQueryStateTreeTool::StaticClass();
}
UQueryStateTreeTool::UQueryStateTreeTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryStateTreeTool);
UQueryStateTreeTool::~UQueryStateTreeTool() {}
// End Class UQueryStateTreeTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_QueryStateTreeTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryStateTreeTool, UQueryStateTreeTool::StaticClass, TEXT("UQueryStateTreeTool"), &Z_Registration_Info_UClass_UQueryStateTreeTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryStateTreeTool), 3492282805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_QueryStateTreeTool_h_2517973218(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_QueryStateTreeTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_StateTree_QueryStateTreeTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

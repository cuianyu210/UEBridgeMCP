// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Level/QueryWorldTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryWorldTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryWorldTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryWorldTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryWorldTool
void UQueryWorldTool::StaticRegisterNativesUQueryWorldTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryWorldTool);
UClass* Z_Construct_UClass_UQueryWorldTool_NoRegister()
{
	return UQueryWorldTool::StaticClass();
}
struct Z_Construct_UClass_UQueryWorldTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe4\xb8\x96\xe7\x95\x8c\xe7\x8a\xb6\xe6\x80\x81\xe6\x9f\xa5\xe8\xaf\xa2\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x9f\xa5\xe8\xaf\xa2\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe6\x88\x96 PIE \xe4\xb8\x96\xe7\x95\x8c\xe4\xb8\xad\xe7\x9a\x84 Actor\xe3\x80\x81\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x81\xe5\xb1\x9e\xe6\x80\xa7\xe7\xad\x89\xe3\x80\x82\n * \xe6\x98\xaf pie-session\xe3\x80\x81pie-input\xe3\x80\x81""call-function \xe7\x9a\x84\xe9\xaa\x8c\xe8\xaf\x81\xe4\xbc\x99\xe4\xbc\xb4\xe3\x80\x82\n */" },
		{ "IncludePath", "Tools/Level/QueryWorldTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Level/QueryWorldTool.h" },
		{ "ToolTip", "\xe4\xb8\x96\xe7\x95\x8c\xe7\x8a\xb6\xe6\x80\x81\xe6\x9f\xa5\xe8\xaf\xa2\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x9f\xa5\xe8\xaf\xa2\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe6\x88\x96 PIE \xe4\xb8\x96\xe7\x95\x8c\xe4\xb8\xad\xe7\x9a\x84 Actor\xe3\x80\x81\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x81\xe5\xb1\x9e\xe6\x80\xa7\xe7\xad\x89\xe3\x80\x82\n\xe6\x98\xaf pie-session\xe3\x80\x81pie-input\xe3\x80\x81""call-function \xe7\x9a\x84\xe9\xaa\x8c\xe8\xaf\x81\xe4\xbc\x99\xe4\xbc\xb4\xe3\x80\x82" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryWorldTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryWorldTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryWorldTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryWorldTool_Statics::ClassParams = {
	&UQueryWorldTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryWorldTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryWorldTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryWorldTool()
{
	if (!Z_Registration_Info_UClass_UQueryWorldTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryWorldTool.OuterSingleton, Z_Construct_UClass_UQueryWorldTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryWorldTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryWorldTool>()
{
	return UQueryWorldTool::StaticClass();
}
UQueryWorldTool::UQueryWorldTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryWorldTool);
UQueryWorldTool::~UQueryWorldTool() {}
// End Class UQueryWorldTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryWorldTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryWorldTool, UQueryWorldTool::StaticClass, TEXT("UQueryWorldTool"), &Z_Registration_Info_UClass_UQueryWorldTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryWorldTool), 1029882149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryWorldTool_h_4250550708(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryWorldTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryWorldTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

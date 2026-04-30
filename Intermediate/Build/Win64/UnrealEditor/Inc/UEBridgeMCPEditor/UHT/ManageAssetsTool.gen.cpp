// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Asset/ManageAssetsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManageAssetsTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UManageAssetsTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UManageAssetsTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UManageAssetsTool
void UManageAssetsTool::StaticRegisterNativesUManageAssetsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManageAssetsTool);
UClass* Z_Construct_UClass_UManageAssetsTool_NoRegister()
{
	return UManageAssetsTool::StaticClass();
}
struct Z_Construct_UClass_UManageAssetsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\xb5\x84\xe4\xba\xa7\xe7\xae\xa1\xe7\x90\x86\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x94\xaf\xe6\x8c\x81\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe3\x80\x81\xe7\xa7\xbb\xe5\x8a\xa8\xe3\x80\x81\xe5\xa4\x8d\xe5\x88\xb6\xe3\x80\x81\xe5\x88\xa0\xe9\x99\xa4\xe3\x80\x81\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "Tools/Asset/ManageAssetsTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Asset/ManageAssetsTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe4\xba\xa7\xe7\xae\xa1\xe7\x90\x86\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x94\xaf\xe6\x8c\x81\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe3\x80\x81\xe7\xa7\xbb\xe5\x8a\xa8\xe3\x80\x81\xe5\xa4\x8d\xe5\x88\xb6\xe3\x80\x81\xe5\x88\xa0\xe9\x99\xa4\xe3\x80\x81\xe4\xbf\x9d\xe5\xad\x98\xe8\xb5\x84\xe4\xba\xa7\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManageAssetsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UManageAssetsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManageAssetsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManageAssetsTool_Statics::ClassParams = {
	&UManageAssetsTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManageAssetsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UManageAssetsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManageAssetsTool()
{
	if (!Z_Registration_Info_UClass_UManageAssetsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManageAssetsTool.OuterSingleton, Z_Construct_UClass_UManageAssetsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManageAssetsTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UManageAssetsTool>()
{
	return UManageAssetsTool::StaticClass();
}
UManageAssetsTool::UManageAssetsTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManageAssetsTool);
UManageAssetsTool::~UManageAssetsTool() {}
// End Class UManageAssetsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_ManageAssetsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManageAssetsTool, UManageAssetsTool::StaticClass, TEXT("UManageAssetsTool"), &Z_Registration_Info_UClass_UManageAssetsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManageAssetsTool), 3701058129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_ManageAssetsTool_h_1143072355(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_ManageAssetsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_ManageAssetsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Asset/CompileAssetsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompileAssetsTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UCompileAssetsTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UCompileAssetsTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UCompileAssetsTool
void UCompileAssetsTool::StaticRegisterNativesUCompileAssetsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompileAssetsTool);
UClass* Z_Construct_UClass_UCompileAssetsTool_NoRegister()
{
	return UCompileAssetsTool::StaticClass();
}
struct Z_Construct_UClass_UCompileAssetsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x93\x9d\xe5\x9b\xbe\xe7\xbc\x96\xe8\xaf\x91\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x94\xaf\xe6\x8c\x81\xe6\x89\xb9\xe9\x87\x8f\xe7\xbc\x96\xe8\xaf\x91 Blueprint\xe3\x80\x81WidgetBlueprint\xe3\x80\x81""AnimBlueprint\xe3\x80\x82\n * \xe6\x9b\xbf\xe4\xbb\xa3\xe9\x80\x9a\xe8\xbf\x87 run-python-script \xe8\xbf\x9b\xe8\xa1\x8c\xe7\xbc\x96\xe8\xaf\x91\xe7\x9a\x84\xe6\x97\xa7\xe6\x96\xb9\xe5\xbc\x8f\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "Tools/Asset/CompileAssetsTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Asset/CompileAssetsTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x93\x9d\xe5\x9b\xbe\xe7\xbc\x96\xe8\xaf\x91\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x94\xaf\xe6\x8c\x81\xe6\x89\xb9\xe9\x87\x8f\xe7\xbc\x96\xe8\xaf\x91 Blueprint\xe3\x80\x81WidgetBlueprint\xe3\x80\x81""AnimBlueprint\xe3\x80\x82\n\xe6\x9b\xbf\xe4\xbb\xa3\xe9\x80\x9a\xe8\xbf\x87 run-python-script \xe8\xbf\x9b\xe8\xa1\x8c\xe7\xbc\x96\xe8\xaf\x91\xe7\x9a\x84\xe6\x97\xa7\xe6\x96\xb9\xe5\xbc\x8f\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompileAssetsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCompileAssetsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompileAssetsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompileAssetsTool_Statics::ClassParams = {
	&UCompileAssetsTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompileAssetsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompileAssetsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompileAssetsTool()
{
	if (!Z_Registration_Info_UClass_UCompileAssetsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompileAssetsTool.OuterSingleton, Z_Construct_UClass_UCompileAssetsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompileAssetsTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UCompileAssetsTool>()
{
	return UCompileAssetsTool::StaticClass();
}
UCompileAssetsTool::UCompileAssetsTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompileAssetsTool);
UCompileAssetsTool::~UCompileAssetsTool() {}
// End Class UCompileAssetsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_CompileAssetsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompileAssetsTool, UCompileAssetsTool::StaticClass, TEXT("UCompileAssetsTool"), &Z_Registration_Info_UClass_UCompileAssetsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompileAssetsTool), 301398763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_CompileAssetsTool_h_617765490(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_CompileAssetsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Asset_CompileAssetsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

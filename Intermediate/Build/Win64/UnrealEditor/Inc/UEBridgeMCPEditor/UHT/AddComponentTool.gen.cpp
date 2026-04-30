// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/AddComponentTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddComponentTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddComponentTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UAddComponentTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UAddComponentTool
void UAddComponentTool::StaticRegisterNativesUAddComponentTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddComponentTool);
UClass* Z_Construct_UClass_UAddComponentTool_NoRegister()
{
	return UAddComponentTool::StaticClass();
}
struct Z_Construct_UClass_UAddComponentTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Add a component to an actor in the currently open level.\n */" },
#endif
		{ "IncludePath", "Tools/Write/AddComponentTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/AddComponentTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a component to an actor in the currently open level." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddComponentTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAddComponentTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddComponentTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddComponentTool_Statics::ClassParams = {
	&UAddComponentTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddComponentTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAddComponentTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAddComponentTool()
{
	if (!Z_Registration_Info_UClass_UAddComponentTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddComponentTool.OuterSingleton, Z_Construct_UClass_UAddComponentTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAddComponentTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UAddComponentTool>()
{
	return UAddComponentTool::StaticClass();
}
UAddComponentTool::UAddComponentTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAddComponentTool);
UAddComponentTool::~UAddComponentTool() {}
// End Class UAddComponentTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddComponentTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAddComponentTool, UAddComponentTool::StaticClass, TEXT("UAddComponentTool"), &Z_Registration_Info_UClass_UAddComponentTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddComponentTool), 1834103641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddComponentTool_h_2045892249(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddComponentTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_AddComponentTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

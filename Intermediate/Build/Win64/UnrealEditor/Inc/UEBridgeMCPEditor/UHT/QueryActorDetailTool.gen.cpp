// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Level/QueryActorDetailTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQueryActorDetailTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryActorDetailTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UQueryActorDetailTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UQueryActorDetailTool
void UQueryActorDetailTool::StaticRegisterNativesUQueryActorDetailTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQueryActorDetailTool);
UClass* Z_Construct_UClass_UQueryActorDetailTool_NoRegister()
{
	return UQueryActorDetailTool::StaticClass();
}
struct Z_Construct_UClass_UQueryActorDetailTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/Level/QueryActorDetailTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Level/QueryActorDetailTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQueryActorDetailTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQueryActorDetailTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryActorDetailTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQueryActorDetailTool_Statics::ClassParams = {
	&UQueryActorDetailTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQueryActorDetailTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UQueryActorDetailTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQueryActorDetailTool()
{
	if (!Z_Registration_Info_UClass_UQueryActorDetailTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQueryActorDetailTool.OuterSingleton, Z_Construct_UClass_UQueryActorDetailTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQueryActorDetailTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UQueryActorDetailTool>()
{
	return UQueryActorDetailTool::StaticClass();
}
UQueryActorDetailTool::UQueryActorDetailTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQueryActorDetailTool);
UQueryActorDetailTool::~UQueryActorDetailTool() {}
// End Class UQueryActorDetailTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryActorDetailTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQueryActorDetailTool, UQueryActorDetailTool::StaticClass, TEXT("UQueryActorDetailTool"), &Z_Registration_Info_UClass_UQueryActorDetailTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQueryActorDetailTool), 100782347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryActorDetailTool_h_3798700685(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryActorDetailTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_QueryActorDetailTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

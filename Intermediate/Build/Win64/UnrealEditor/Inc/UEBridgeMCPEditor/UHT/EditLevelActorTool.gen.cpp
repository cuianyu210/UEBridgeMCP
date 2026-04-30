// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Level/EditLevelActorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditLevelActorTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditLevelActorTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_UEditLevelActorTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class UEditLevelActorTool
void UEditLevelActorTool::StaticRegisterNativesUEditLevelActorTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditLevelActorTool);
UClass* Z_Construct_UClass_UEditLevelActorTool_NoRegister()
{
	return UEditLevelActorTool::StaticClass();
}
struct Z_Construct_UClass_UEditLevelActorTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x85\xb3\xe5\x8d\xa1 Actor \xe7\xbb\xbc\xe5\x90\x88\xe7\xbc\x96\xe8\xbe\x91\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x94\xaf\xe6\x8c\x81 spawn\xe3\x80\x81""delete\xe3\x80\x81""duplicate\xe3\x80\x81set_transform\xe3\x80\x81\n * attach/detach\xe3\x80\x81set_folder\xe3\x80\x81set_label\xe3\x80\x81""add/remove_component \xe7\xad\x89\xe6\x93\x8d\xe4\xbd\x9c\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "Tools/Level/EditLevelActorTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Level/EditLevelActorTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe5\x8d\xa1 Actor \xe7\xbb\xbc\xe5\x90\x88\xe7\xbc\x96\xe8\xbe\x91\xe5\xb7\xa5\xe5\x85\xb7 \xe2\x80\x94 \xe6\x94\xaf\xe6\x8c\x81 spawn\xe3\x80\x81""delete\xe3\x80\x81""duplicate\xe3\x80\x81set_transform\xe3\x80\x81\nattach/detach\xe3\x80\x81set_folder\xe3\x80\x81set_label\xe3\x80\x81""add/remove_component \xe7\xad\x89\xe6\x93\x8d\xe4\xbd\x9c\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditLevelActorTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEditLevelActorTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditLevelActorTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditLevelActorTool_Statics::ClassParams = {
	&UEditLevelActorTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditLevelActorTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditLevelActorTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditLevelActorTool()
{
	if (!Z_Registration_Info_UClass_UEditLevelActorTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditLevelActorTool.OuterSingleton, Z_Construct_UClass_UEditLevelActorTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditLevelActorTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<UEditLevelActorTool>()
{
	return UEditLevelActorTool::StaticClass();
}
UEditLevelActorTool::UEditLevelActorTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditLevelActorTool);
UEditLevelActorTool::~UEditLevelActorTool() {}
// End Class UEditLevelActorTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_EditLevelActorTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditLevelActorTool, UEditLevelActorTool::StaticClass, TEXT("UEditLevelActorTool"), &Z_Registration_Info_UClass_UEditLevelActorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditLevelActorTool), 4102729022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_EditLevelActorTool_h_2796618144(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_EditLevelActorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Level_EditLevelActorTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

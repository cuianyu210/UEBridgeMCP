// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCPEditor/Public/Tools/Write/SetPropertyTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetPropertyTool() {}

// Begin Cross Module References
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_USetPropertyTool();
UEBRIDGEMCPEDITOR_API UClass* Z_Construct_UClass_USetPropertyTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCPEditor();
// End Cross Module References

// Begin Class USetPropertyTool
void USetPropertyTool::StaticRegisterNativesUSetPropertyTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USetPropertyTool);
UClass* Z_Construct_UClass_USetPropertyTool_NoRegister()
{
	return USetPropertyTool::StaticClass();
}
struct Z_Construct_UClass_USetPropertyTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Universal property setter tool.\n * Sets any property on any asset type using UE reflection.\n *\n * Supports:\n * - Simple properties (int, float, bool, string, name, text)\n * - Nested properties via dot notation (e.g., \"Stats.MaxHealth\")\n * - Array elements via bracket notation (e.g., \"Items[0].Value\")\n * - Struct properties (as JSON objects or arrays for FVector, FRotator, FLinearColor)\n * - Enum properties (by name or integer value)\n *\n * Examples:\n * - Blueprint variable: { \"asset_path\": \"/Game/BP_Player\", \"property_path\": \"Health\", \"value\": 100 }\n * - Nested struct: { \"asset_path\": \"/Game/BP_Player\", \"property_path\": \"Stats.MaxHealth\", \"value\": 200 }\n * - Vector: { \"asset_path\": \"/Game/BP_Actor\", \"property_path\": \"Location\", \"value\": [100, 200, 0] }\n * - Enum: { \"asset_path\": \"/Game/BP_Actor\", \"property_path\": \"State\", \"value\": \"Active\" }\n */" },
#endif
		{ "IncludePath", "Tools/Write/SetPropertyTool.h" },
		{ "ModuleRelativePath", "Public/Tools/Write/SetPropertyTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Universal property setter tool.\nSets any property on any asset type using UE reflection.\n\nSupports:\n- Simple properties (int, float, bool, string, name, text)\n- Nested properties via dot notation (e.g., \"Stats.MaxHealth\")\n- Array elements via bracket notation (e.g., \"Items[0].Value\")\n- Struct properties (as JSON objects or arrays for FVector, FRotator, FLinearColor)\n- Enum properties (by name or integer value)\n\nExamples:\n- Blueprint variable: { \"asset_path\": \"/Game/BP_Player\", \"property_path\": \"Health\", \"value\": 100 }\n- Nested struct: { \"asset_path\": \"/Game/BP_Player\", \"property_path\": \"Stats.MaxHealth\", \"value\": 200 }\n- Vector: { \"asset_path\": \"/Game/BP_Actor\", \"property_path\": \"Location\", \"value\": [100, 200, 0] }\n- Enum: { \"asset_path\": \"/Game/BP_Actor\", \"property_path\": \"State\", \"value\": \"Active\" }" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetPropertyTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USetPropertyTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMcpToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCPEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USetPropertyTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USetPropertyTool_Statics::ClassParams = {
	&USetPropertyTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USetPropertyTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USetPropertyTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USetPropertyTool()
{
	if (!Z_Registration_Info_UClass_USetPropertyTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetPropertyTool.OuterSingleton, Z_Construct_UClass_USetPropertyTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USetPropertyTool.OuterSingleton;
}
template<> UEBRIDGEMCPEDITOR_API UClass* StaticClass<USetPropertyTool>()
{
	return USetPropertyTool::StaticClass();
}
USetPropertyTool::USetPropertyTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USetPropertyTool);
USetPropertyTool::~USetPropertyTool() {}
// End Class USetPropertyTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SetPropertyTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USetPropertyTool, USetPropertyTool::StaticClass, TEXT("USetPropertyTool"), &Z_Registration_Info_UClass_USetPropertyTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetPropertyTool), 2453787574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SetPropertyTool_h_2152130504(TEXT("/Script/UEBridgeMCPEditor"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SetPropertyTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCPEditor_Public_Tools_Write_SetPropertyTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEBridgeMCP/Public/Tools/McpToolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpToolBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase();
UEBRIDGEMCP_API UClass* Z_Construct_UClass_UMcpToolBase_NoRegister();
UEBRIDGEMCP_API UScriptStruct* Z_Construct_UScriptStruct_FMcpToolContext();
UPackage* Z_Construct_UPackage__Script_UEBridgeMCP();
// End Cross Module References

// Begin ScriptStruct FMcpToolContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_McpToolContext;
class UScriptStruct* FMcpToolContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_McpToolContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_McpToolContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpToolContext, (UObject*)Z_Construct_UPackage__Script_UEBridgeMCP(), TEXT("McpToolContext"));
	}
	return Z_Registration_Info_UScriptStruct_McpToolContext.OuterSingleton;
}
template<> UEBRIDGEMCP_API UScriptStruct* StaticStruct<FMcpToolContext>()
{
	return FMcpToolContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMcpToolContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tool execution context\n */" },
#endif
		{ "ModuleRelativePath", "Public/Tools/McpToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tool execution context" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpToolContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpToolContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
	nullptr,
	&NewStructOps,
	"McpToolContext",
	nullptr,
	0,
	sizeof(FMcpToolContext),
	alignof(FMcpToolContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpToolContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMcpToolContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMcpToolContext()
{
	if (!Z_Registration_Info_UScriptStruct_McpToolContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_McpToolContext.InnerSingleton, Z_Construct_UScriptStruct_FMcpToolContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_McpToolContext.InnerSingleton;
}
// End ScriptStruct FMcpToolContext

// Begin Class UMcpToolBase
void UMcpToolBase::StaticRegisterNativesUMcpToolBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMcpToolBase);
UClass* Z_Construct_UClass_UMcpToolBase_NoRegister()
{
	return UMcpToolBase::StaticClass();
}
struct Z_Construct_UClass_UMcpToolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Abstract base class for MCP tools\n */" },
#endif
		{ "IncludePath", "Tools/McpToolBase.h" },
		{ "ModuleRelativePath", "Public/Tools/McpToolBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract base class for MCP tools" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMcpToolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMcpToolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UEBridgeMCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMcpToolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMcpToolBase_Statics::ClassParams = {
	&UMcpToolBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMcpToolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMcpToolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMcpToolBase()
{
	if (!Z_Registration_Info_UClass_UMcpToolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMcpToolBase.OuterSingleton, Z_Construct_UClass_UMcpToolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMcpToolBase.OuterSingleton;
}
template<> UEBRIDGEMCP_API UClass* StaticClass<UMcpToolBase>()
{
	return UMcpToolBase::StaticClass();
}
UMcpToolBase::UMcpToolBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMcpToolBase);
UMcpToolBase::~UMcpToolBase() {}
// End Class UMcpToolBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMcpToolContext::StaticStruct, Z_Construct_UScriptStruct_FMcpToolContext_Statics::NewStructOps, TEXT("McpToolContext"), &Z_Registration_Info_UScriptStruct_McpToolContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMcpToolContext), 3949239211U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMcpToolBase, UMcpToolBase::StaticClass, TEXT("UMcpToolBase"), &Z_Registration_Info_UClass_UMcpToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMcpToolBase), 1980728211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolBase_h_1851213480(TEXT("/Script/UEBridgeMCP"),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_NetWorkLearn_Plugins_UEBridgeMCP_Source_UEBridgeMCP_Public_Tools_McpToolBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

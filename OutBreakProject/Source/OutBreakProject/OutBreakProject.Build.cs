// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OutBreakProject : ModuleRules
{
	public OutBreakProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

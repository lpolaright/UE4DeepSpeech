// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DeepSpeech : ModuleRules
{
	public DeepSpeech(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"DeepSpeechLibrary",
				"Voice"
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"InputCore",
				"DeepSpeechLibrary",
				"OnlineSubsystemUtils",
				"Voice"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"Voice"
				//"Voice"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[] {

				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}

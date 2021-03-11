using System;
using System.IO;
using UnrealBuildTool;

public class DeepSpeechLibrary : ModuleRules
{
    public DeepSpeechLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        // Add any macros that need to be set
        // PublicDefinitions.Add("WITH_MYTHIRDPARTYLIBRARY=1");

        // Add any include paths for the plugin
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "inc"));

        //PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "lib"));

        // Add any import libraries or static libraries
        PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "libdeepspeech.so.if.lib"));

        RuntimeDependencies.Add("$(BinaryOutputDir)/libdeepspeech.so", Path.Combine(ModuleDirectory, "lib", "libdeepspeech.so"));
    }
}
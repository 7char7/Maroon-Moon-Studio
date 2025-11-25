using UnrealBuildTool;

public class SheepyStudiosClientTarget : TargetRules
{
	public SheepyStudiosClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("SheepyStudios");
	}
}

class CfgPatches
{
	class aftp_c_units_aftp
	{
		version=1;
		author="AFTP Golas & Waffel";
		units[]=
		{
			"aftp_01_wz93",
			"aftp_01_tl_wz93",
			"aftp_01_gr_wz93",
			"aftp_01_ar_wz93",
			"aftp_sf_wz93",
			"aftp_02_wz93",
			"aftp_03_wz93",
			"aftp_04_wz93",
			"aftp_05_wz93",
			"aftp_01_wzd93",
			"aftp_01_tl_wzd93",
			"aftp_01_gr_wzd93",
			"aftp_01_ar_wzd93",
			"aftp_sf_wzd93",
			"aftp_02_wzd93",
			"aftp_03_wzd93",
			"aftp_04_wzd93",
			"aftp_05_wzd93",
			"aftp_01_mc",
			"aftp_01_tl_mc",
			"aftp_01_gr_mc",
			"aftp_01_ar_mc",
			"aftp_sf_mc",
			"aftp_02_mc",
			"aftp_03_mc",
			"aftp_04_mc",
			"aftp_05_mc",
			"",
			"aftp_01_mct",
			"aftp_01_tl_mct",
			"aftp_01_gr_mct",
			"aftp_01_ar_mct",
			"aftp_sf_mct",
			"aftp_02_mct",
			"aftp_03_mct",
			"aftp_04_mct",
			"aftp_05_mct",
			"aftp_01_mca",
			"aftp_01_tl_mca",
			"aftp_01_gr_mca",
			"aftp_01_ar_mca",
			"aftp_sf_mca",
			"aftp_02_mca",
			"aftp_03_mca",
			"aftp_04_mca",
			"aftp_01_aau",
			"aftp_01_tl_aau",
			"aftp_01_gr_aau",
			"aftp_01_ar_aau",
			"aftp_sf_aau",
			"aftp_02_aau",
			"aftp_03_aau",
			"aftp_04_aau",
			"aftp_05_aau",
			"aftp_01_afg",
			"aftp_01_tl_afg",
			"aftp_01_gr_afg",
			"aftp_01_ar_afg",
			"aftp_sf_afg",
			"aftp_02_afg",
			"aftp_03_afg",
			"aftp_04_afg",
			"aftp_05_afg",
			"aftp_01_ale",
			"aftp_01_tl_ale",
			"aftp_01_gr_ale",
			"aftp_01_ar_ale",
			"aftp_sf_ale",
			"aftp_02_ale",
			"aftp_03_ale",
			"aftp_04_ale"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F_Heads",
			"A3_Modules_F",
			"A3_UI_F",
			"A3_Structures_F_Items_Electronics",
			"aftp_units"
		};
	};
};
class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};
class cfgFactionClasses
{
	class aftp_units_wz93
	{
		displayName="AFTP Units Pantera";
		icon="\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority=1;
		side=1;
	};
	class aftp_units_wzd93
	{
		displayName="AFTP Units Pantera Desert";
		icon="\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority=1;
		side=1;
	};
	class aftp_units_mc
	{
		displayName="AFTP Units Multicam";
		icon="\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority=1;
		side=1;
	};
	class aftp_units_mct
	{
		displayName="AFTP Units Multicam Tropic";
		icon="\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority=1;
		side=1;
	};
	class aftp_units_mca
	{
		displayName="AFTP Units Multicam Alpine";
		icon="\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority=1;
		side=1;
	};
	class aftp_units_aau
	{
		displayName="AFTP Units A-TACS AU";
		icon="\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority=1;
		side=1;
	};
	class aftp_units_afg
	{
		displayName="AFTP Units A-TACS FG";
		icon="\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority=1;
		side=1;
	};
	class aftp_units_ale
	{
		displayName="AFTP Units A-TACS LE";
		icon="\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority=1;
		side=1;
	};
};
class CfgVehicleClasses
{
	class aftp_units
	{
		displayName="AFTP Units";
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class b_soldier_survival_F;
	class B_Soldier_sniper_base_F;
	class aftp_01_wz93: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_base_F";
		faction="aftp_units_wz93";
		canCarryBackPack=1;
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		camouflage=0.89999998;
		backpack="aftp_kitbag_wz93";
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="uni01_wz93";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_wz93.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_wz93",
			"AFTP_vest01_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_wz93",
			"AFTP_vest01_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class aftp_01_wzind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_wzind_01";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indwz.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_01.p3d";
	};
	class aftp_02_wzind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_wzind_02";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indwz.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_02.p3d";
	};
	class aftp_01_wzdind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_wzdind_01";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indwzd.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_01.p3d";
	};
	class aftp_02_wzdind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_wzdind_02";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indwzd.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_02.p3d";
	};
	class aftp_01_mcind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_mcind_01";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indmc.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_01.p3d";
	};
	class aftp_02_mcind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_mcind_02";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indmc.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_02.p3d";
	};
	class aftp_01_mctind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_mctind_01";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indmct.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_01.p3d";
	};
	class aftp_02_mctind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_mctind_02";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indmct.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_02.p3d";
	};
	class aftp_01_mcaind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_mcaind_01";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indmca.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_01.p3d";
	};
	class aftp_02_mcaind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_mcaind_02";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indmca.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_02.p3d";
	};
	class aftp_01_aauind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_aauind_01";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indau.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_01.p3d";
	};
	class aftp_02_aauind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_aauind_02";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indau.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_02.p3d";
	};
	class aftp_01_afgind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_afgind_01";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indafg.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_01.p3d";
	};
	class aftp_02_afgind: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="aftp_afgind_02";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\indafg.paa"
		};
		model="\A3\Characters_F_Beta\indep\ia_soldier_02.p3d";
	};
	class aftp_01_tl_wz93: aftp_01_wz93
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Team Leader";
		linkedItems[]=
		{
			"AFTP_helmet02_wz93",
			"AFTP_vest01_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_wz93",
			"AFTP_vest01_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManLeader";
	};
	class aftp_01_gr_wz93: aftp_01_wz93
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_wz93",
			"AFTP_hvest01_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_wz93",
			"AFTP_hvest01_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_01_ar_wz93: aftp_01_wz93
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Automatic Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet02_wz93",
			"AFTP_hvest02_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_wz93",
			"AFTP_hvest02_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManMG";
	};
	class aftp_sf_wz93: aftp_01_wz93
	{
		scope=2;
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="SF Operator";
		attendant=1;
		canDeactivateMines=1;
		engineer=1;
		linkedItems[]=
		{
			"AFTP_helmet03_wz93",
			"AFTP_vest01_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_wz93",
			"AFTP_vest01_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_02_wz93: aftp_01_wz93
	{
		uniformClass="uni02_wz93";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Medic";
		attendant=1;
		linkedItems[]=
		{
			"AFTP_helmet01_wz93",
			"AFTP_vest02_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_wz93",
			"AFTP_vest02_wz93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		picture="pictureHeal";
		icon="iconManMedic";
	};
	class aftp_03_wz93: aftp_01_wz93
	{
		uniformClass="uni03_wz93";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_wz93.paa",
			"\A3\Characters_F\Common\Data\basicbody_green_co.paa"
		};
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Engineer";
		canDeactivateMines=1;
		engineer=1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class aftp_04_wz93: b_soldier_survival_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Diver";
		nakedUniform="U_BasicBody";
		faction="aftp_units_wz93";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet03_wz93",
			"AFTP_vest02_wz93",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_wz93",
			"AFTP_vest02_wz93",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni04_wz93";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_wz93.paa",
			"\A3\Characters_F\Common\Data\basicbody_green_co.paa"
		};
		model="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		canDeactivateMines=1;
		engineer=1;
	};
	class aftp_05_wz93: B_Soldier_sniper_base_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Sniper";
		nakedUniform="U_BasicBody";
		faction="aftp_units_wz93";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni05_wz93";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_wz93.paa",
			"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"
		};
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		attendant=1;
	};
	class aftp_01_wzd93: aftp_01_wz93
	{
		_generalMacro="B_Soldier_base_F";
		faction="aftp_units_wzd93";
		canCarryBackPack=1;
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		camouflage=0.89999998;
		backpack="aftp_kitbag_wzd93";
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="uni01_wzd93";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_wzd93.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_wzd93",
			"AFTP_vest01_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_wzd93",
			"AFTP_vest01_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class aftp_01_tl_wzd93: aftp_01_wzd93
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Team Leader";
		linkedItems[]=
		{
			"AFTP_helmet02_wzd93",
			"AFTP_vest01_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_wzd93",
			"AFTP_vest01_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManLeader";
	};
	class aftp_01_gr_wzd93: aftp_01_wzd93
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_wzd93",
			"AFTP_hvest01_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_wzd93",
			"AFTP_hvest01_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_01_ar_wzd93: aftp_01_wzd93
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Automatic Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet02_wzd93",
			"AFTP_hvest02_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_wzd93",
			"AFTP_hvest02_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManMG";
	};
	class aftp_sf_wzd93: aftp_01_wzd93
	{
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="SF Operator";
		attendant=1;
		canDeactivateMines=1;
		engineer=1;
		linkedItems[]=
		{
			"AFTP_helmet03_wzd93",
			"AFTP_vest01_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_wzd93",
			"AFTP_vest01_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_02_wzd93: aftp_01_wzd93
	{
		uniformClass="uni02_wzd93";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Medic";
		attendant=1;
		linkedItems[]=
		{
			"AFTP_helmet01_wzd93",
			"AFTP_vest02_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_wzd93",
			"AFTP_vest02_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		picture="pictureHeal";
		icon="iconManMedic";
	};
	class aftp_03_wzd93: aftp_01_wzd93
	{
		uniformClass="uni03_wzd93";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_wzd93.paa",
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Engineer";
		canDeactivateMines=1;
		engineer=1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class aftp_04_wzd93: b_soldier_survival_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Diver";
		nakedUniform="U_BasicBody";
		faction="aftp_units_wzd93";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_wzd93",
			"AFTP_vest01_wzd93",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_wzd93",
			"AFTP_vest01_wzd93",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni04_wzd93";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_wzd93.paa",
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		model="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		canDeactivateMines=1;
		engineer=1;
	};
	class aftp_05_wzd93: B_Soldier_sniper_base_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Sniper";
		nakedUniform="U_BasicBody";
		faction="aftp_units_wzd93";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet03_wzd93",
			"AFTP_vest02_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_wzd93",
			"AFTP_vest02_wzd93",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni05_wzd93";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_wzd93.paa",
			"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"
		};
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		attendant=1;
	};
	class aftp_01_mc: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_base_F";
		faction="aftp_units_mc";
		canCarryBackPack=1;
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		camouflage=0.89999998;
		backpack="aftp_kitbag_mc";
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="uni01_mc";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_mc.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_mc",
			"AFTP_vest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mc",
			"AFTP_vest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class aftp_01_tl_mc: aftp_01_mc
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Team Leader";
		linkedItems[]=
		{
			"AFTP_helmet02_mc",
			"AFTP_vest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_mc",
			"AFTP_vest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManLeader";
	};
	class aftp_01_gr_mc: aftp_01_mc
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_mc",
			"AFTP_hvest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mc",
			"AFTP_hvest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_01_ar_mc: aftp_01_mc
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Automatic Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet02_mc",
			"AFTP_hvest02_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_mc",
			"AFTP_hvest02_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManMG";
	};
	class aftp_sf_mc: aftp_01_mc
	{
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="SF Operator";
		attendant=1;
		canDeactivateMines=1;
		engineer=1;
		linkedItems[]=
		{
			"AFTP_helmet03_mc",
			"AFTP_vest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_mc",
			"AFTP_vest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_02_mc: aftp_01_mc
	{
		uniformClass="uni02_mc";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Medic";
		attendant=1;
		linkedItems[]=
		{
			"AFTP_helmet01_mc",
			"AFTP_vest02_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mc",
			"AFTP_vest02_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		picture="pictureHeal";
		icon="iconManMedic";
	};
	class aftp_03_mc: aftp_01_mc
	{
		uniformClass="uni03_mc";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_mc.paa",
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Engineer";
		canDeactivateMines=1;
		engineer=1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class aftp_04_mc: b_soldier_survival_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Diver";
		nakedUniform="U_BasicBody";
		faction="aftp_units_mc";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet03_mc",
			"AFTP_vest02_mc",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_mc",
			"AFTP_vest02_mc",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni04_mc";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_mc.paa",
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		model="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		canDeactivateMines=1;
		engineer=1;
	};
	class aftp_05_mc: B_Soldier_sniper_base_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Sniper";
		nakedUniform="U_BasicBody";
		faction="aftp_units_mc";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_mc",
			"AFTP_vest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mc",
			"AFTP_vest01_mc",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni05_mc";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_mc.paa",
			"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"
		};
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		attendant=1;
	};
	class aftp_01_mct: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_base_F";
		faction="aftp_units_mct";
		canCarryBackPack=1;
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		camouflage=0.89999998;
		backpack="aftp_kitbag_mct";
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="uni01_mct";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_mct.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_mct",
			"AFTP_vest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mct",
			"AFTP_vest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class aftp_01_tl_mct: aftp_01_mct
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Team Leader";
		linkedItems[]=
		{
			"AFTP_helmet02_mct",
			"AFTP_vest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_mct",
			"AFTP_vest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManLeader";
	};
	class aftp_01_gr_mct: aftp_01_mct
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_mct",
			"AFTP_hvest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mct",
			"AFTP_hvest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_01_ar_mct: aftp_01_mct
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Automatic Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet02_mct",
			"AFTP_hvest02_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_mct",
			"AFTP_hvest02_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManMG";
	};
	class aftp_sf_mct: aftp_01_mct
	{
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="SF Operator";
		attendant=1;
		canDeactivateMines=1;
		engineer=1;
		linkedItems[]=
		{
			"AFTP_helmet03_mct",
			"AFTP_vest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_mct",
			"AFTP_vest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_02_mct: aftp_01_mct
	{
		uniformClass="uni02_mct";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Medic";
		attendant=1;
		linkedItems[]=
		{
			"AFTP_helmet01_mct",
			"AFTP_vest02_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mct",
			"AFTP_vest02_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		picture="pictureHeal";
		icon="iconManMedic";
	};
	class aftp_03_mct: aftp_01_mct
	{
		uniformClass="uni03_mct";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_mct.paa",
			"\A3\Characters_F\Common\Data\basicbody_green_co.paa"
		};
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Engineer";
		canDeactivateMines=1;
		engineer=1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class aftp_04_mct: b_soldier_survival_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Diver";
		nakedUniform="U_BasicBody";
		faction="aftp_units_mct";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet03_mct",
			"AFTP_vest02_mct",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_mct",
			"AFTP_vest02_mct",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni04_mct";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_mct.paa",
			"\A3\Characters_F\Common\Data\basicbody_green_co.paa"
		};
		model="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		canDeactivateMines=1;
		engineer=1;
	};
	class aftp_05_mct: B_Soldier_sniper_base_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Sniper";
		nakedUniform="U_BasicBody";
		faction="aftp_units_mct";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_mct",
			"AFTP_vest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mct",
			"AFTP_vest01_mct",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni05_mct";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_mct.paa",
			"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"
		};
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		attendant=1;
	};
	class aftp_01_mca: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_base_F";
		faction="aftp_units_mca";
		canCarryBackPack=1;
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		camouflage=0.89999998;
		backpack="aftp_kitbag_mca";
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="uni01_mca";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_mca.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_mca",
			"AFTP_vest01_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mca",
			"AFTP_vest01_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class aftp_01_tl_mca: aftp_01_mca
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Team Leader";
		linkedItems[]=
		{
			"AFTP_helmet02_mca",
			"AFTP_vest01_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_mca",
			"AFTP_vest01_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManLeader";
	};
	class aftp_01_gr_mca: aftp_01_mca
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_mca",
			"AFTP_hvest01_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mca",
			"AFTP_hvest01_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_01_ar_mca: aftp_01_mca
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Automatic Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet02_mca",
			"AFTP_hvest02_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_mca",
			"AFTP_hvest02_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManMG";
	};
	class aftp_sf_mca: aftp_01_mca
	{
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="SF Operator";
		attendant=1;
		canDeactivateMines=1;
		engineer=1;
		linkedItems[]=
		{
			"AFTP_helmet03_mca",
			"AFTP_vest01_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_mca",
			"AFTP_vest01_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_02_mca: aftp_01_mca
	{
		uniformClass="uni02_mca";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Medic";
		attendant=1;
		linkedItems[]=
		{
			"AFTP_helmet01_mca",
			"AFTP_vest02_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_mca",
			"AFTP_vest02_mca",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		picture="pictureHeal";
		icon="iconManMedic";
	};
	class aftp_03_mca: aftp_01_mca
	{
		scope=1;
		uniformClass="uni03_mca";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		author="AFTP Golas & Waffel";
		scopeCurator=2;
	};
	class aftp_04_mca: aftp_01_mca
	{
		uniformClass="uni02_mca";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Engineer";
		canDeactivateMines=1;
		engineer=1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class aftp_01_aau: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_base_F";
		faction="aftp_units_aau";
		canCarryBackPack=1;
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		camouflage=0.89999998;
		backpack="aftp_kitbag_aau";
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="uni01_aau";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_aau.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_aau",
			"AFTP_vest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_aau",
			"AFTP_vest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class aftp_01_tl_aau: aftp_01_aau
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Team Leader";
		linkedItems[]=
		{
			"AFTP_helmet02_aau",
			"AFTP_vest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_aau",
			"AFTP_vest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManLeader";
	};
	class aftp_01_gr_aau: aftp_01_aau
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_aau",
			"AFTP_hvest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_aau",
			"AFTP_hvest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_01_ar_aau: aftp_01_aau
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Automatic Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet02_aau",
			"AFTP_hvest02_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_aau",
			"AFTP_hvest02_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManMG";
	};
	class aftp_sf_aau: aftp_01_aau
	{
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="SF Operator";
		attendant=1;
		canDeactivateMines=1;
		engineer=1;
		linkedItems[]=
		{
			"AFTP_helmet03_aau",
			"AFTP_vest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_aau",
			"AFTP_vest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_02_aau: aftp_01_aau
	{
		uniformClass="uni02_aau";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Medic";
		attendant=1;
		linkedItems[]=
		{
			"AFTP_helmet01_aau",
			"AFTP_vest02_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_aau",
			"AFTP_vest02_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		picture="pictureHeal";
		icon="iconManMedic";
	};
	class aftp_03_aau: aftp_01_aau
	{
		uniformClass="uni03_aau";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_aau.paa",
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Engineer";
		canDeactivateMines=1;
		engineer=1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class aftp_04_aau: b_soldier_survival_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Diver";
		nakedUniform="U_BasicBody";
		faction="aftp_units_aau";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_plain_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet03_aau",
			"AFTP_vest02_aau",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_aau",
			"AFTP_vest02_aau",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni04_aau";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_aau.paa",
			"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
		};
		model="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		canDeactivateMines=1;
		engineer=1;
	};
	class aftp_05_aau: B_Soldier_sniper_base_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Sniper A-TACS AU";
		nakedUniform="U_BasicBody";
		faction="aftp_units_aau";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_aau",
			"AFTP_vest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_aau",
			"AFTP_vest01_aau",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni05_aau";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_aau.paa",
			"\A3\Characters_F\Common\Data\ghillie_desert_co.paa"
		};
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		attendant=1;
	};
	class aftp_01_afg: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_base_F";
		faction="aftp_units_afg";
		canCarryBackPack=1;
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		camouflage=0.89999998;
		backpack="aftp_kitbag_afg";
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="uni01_afg";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_afg.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_afg",
			"AFTP_vest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_afg",
			"AFTP_vest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	class aftp_01_tl_afg: aftp_01_afg
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Team Leader";
		linkedItems[]=
		{
			"AFTP_helmet02_afg",
			"AFTP_vest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_afg",
			"AFTP_vest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManLeader";
	};
	class aftp_01_gr_afg: aftp_01_afg
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_afg",
			"AFTP_hvest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_afg",
			"AFTP_hvest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_01_ar_afg: aftp_01_afg
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Automatic Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet02_afg",
			"AFTP_hvest02_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_afg",
			"AFTP_hvest02_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManMG";
	};
	class aftp_sf_afg: aftp_01_afg
	{
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="SF Operator";
		attendant=1;
		canDeactivateMines=1;
		engineer=1;
		linkedItems[]=
		{
			"AFTP_helmet03_afg",
			"AFTP_vest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_afg",
			"AFTP_vest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_02_afg: aftp_01_afg
	{
		uniformClass="uni02_afg";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Medic";
		attendant=1;
		linkedItems[]=
		{
			"AFTP_helmet01_afg",
			"AFTP_vest02_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_afg",
			"AFTP_vest02_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		picture="pictureHeal";
		icon="iconManMedic";
	};
	class aftp_03_afg: aftp_01_afg
	{
		uniformClass="uni03_afg";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_afg.paa",
			"\A3\Characters_F\Common\Data\basicbody_green_co.paa"
		};
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Engineer";
		canDeactivateMines=1;
		engineer=1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class aftp_04_afg: b_soldier_survival_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Diver";
		nakedUniform="U_BasicBody";
		faction="aftp_units_afg";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet03_afg",
			"AFTP_vest02_afg",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_afg",
			"AFTP_vest02_afg",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni04_afg";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_afg.paa",
			"\A3\Characters_F\Common\Data\basicbody_green_co.paa"
		};
		model="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		canDeactivateMines=1;
		engineer=1;
	};
	class aftp_05_afg: B_Soldier_sniper_base_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Sniper A-TACS FG Camo";
		nakedUniform="U_BasicBody";
		faction="aftp_units_afg";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"srifle_LRR_camo_SOS_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_afg",
			"AFTP_vest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_afg",
			"AFTP_vest01_afg",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni05_afg";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_afg.paa",
			"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"
		};
		model="A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		attendant=1;
	};
	class aftp_01_ale: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_base_F";
		faction="aftp_units_ale";
		canCarryBackPack=1;
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		camouflage=0.89999998;
		backpack="aftp_kitbag_ale";
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="uni01_ale";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_ale.paa"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_ale",
			"AFTP_vest01_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_ale",
			"AFTP_vest01_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		icon="iconManLeader";
	};
	class aftp_01_tl_ale: aftp_01_ale
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Team Leader";
		linkedItems[]=
		{
			"AFTP_helmet02_ale",
			"AFTP_vest01_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_ale",
			"AFTP_vest01_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_01_gr_ale: aftp_01_ale
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		linkedItems[]=
		{
			"AFTP_helmet01_ale",
			"AFTP_hvest01_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_ale",
			"AFTP_hvest01_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_01_ar_ale: aftp_01_ale
	{
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Automatic Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"LMG_Mk200_MRCO_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet02_ale",
			"AFTP_hvest02_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet02_ale",
			"AFTP_hvest02_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		icon="iconManMG";
	};
	class aftp_sf_ale: aftp_01_ale
	{
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_TRG21_ARCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="SF Operator";
		attendant=1;
		canDeactivateMines=1;
		engineer=1;
		linkedItems[]=
		{
			"AFTP_helmet03_ale",
			"AFTP_vest01_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_ale",
			"AFTP_vest01_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
	};
	class aftp_02_ale: aftp_01_ale
	{
		uniformClass="uni02_ale";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Medic";
		attendant=1;
		linkedItems[]=
		{
			"AFTP_helmet01_ale",
			"AFTP_vest02_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet01_ale",
			"AFTP_vest02_ale",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		picture="pictureHeal";
		icon="iconManMedic";
	};
	class aftp_03_ale: aftp_01_ale
	{
		uniformClass="uni03_ale";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		displayName="Engineer";
		canDeactivateMines=1;
		engineer=1;
		icon="iconManEngineer";
		picture="pictureRepair";
	};
	class aftp_04_ale: b_soldier_survival_F
	{
		_generalMacro="B_Soldier_F";
		displayName="Diver";
		nakedUniform="U_BasicBody";
		faction="aftp_units_ale";
		weapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Rangefinder",
			"arifle_Mk20_MRCO_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag"
		};
		linkedItems[]=
		{
			"AFTP_helmet03_ale",
			"AFTP_vest02_ale",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AFTP_helmet03_ale",
			"AFTP_vest02_ale",
			"G_Diving",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"NVGoggles"
		};
		Items[]={};
		RespawnItems[]={};
		uniformClass="uni04_ale";
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\uni_ale.paa",
			"\A3\Characters_F\Common\Data\basicbody_black_co.paa"
		};
		model="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope=2;
		author="AFTP Golas & Waffel";
		scopeCurator=2;
		canDeactivateMines=1;
		engineer=1;
	};
	class B_Carryall_Base;
	class B_Kitbag_Base;
	class B_AssaultPack_Base;
	class AFTP_carryall_wz93: B_Carryall_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Backpack Carryall Pantera";
		picture="\AFTP_units\data\ico_carryall_wz93.paa";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\carryall_wz93.paa"
		};
	};
	class AFTP_caryall_wzd93: AFTP_carryall_wz93
	{
		displayName="AFTP Backpack Carryall Pantera Desert";
		picture="\AFTP_units\data\ico_carryall_wzd93.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\carryall_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_caryall_mc: AFTP_carryall_wz93
	{
		displayName="AFTP Backpack Carryall Multicam";
		picture="\AFTP_units\data\ico_carryall_mc.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\carryall_mc.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_caryall_mct: AFTP_carryall_wz93
	{
		displayName="AFTP Backpack Carryall Multicam Tropic";
		picture="\AFTP_units\data\ico_carryall_mct.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\carryall_mct.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_caryall_mca: AFTP_carryall_wz93
	{
		displayName="AFTP Backpack Carryall Multicam Alpine";
		picture="\AFTP_units\data\ico_carryall_mca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\carryall_mca.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_caryall_aau: AFTP_carryall_wz93
	{
		displayName="AFTP Backpack Carryall A-TACS AU";
		picture="\AFTP_units\data\ico_carryall_aau.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\carryall_aau.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_caryall_afg: AFTP_carryall_wz93
	{
		displayName="AFTP Backpack Carryall A-TACS FG";
		picture="\AFTP_units\data\ico_carryall_afg.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\carryall_afg.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_kitbag_wz93: B_Kitbag_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Kitbag Pantera";
		picture="\AFTP_units\data\ico_kitbag_wz93.paa";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\kitbag_wz93.paa"
		};
	};
	class AFTP_kitbag_wzd93: AFTP_kitbag_wz93
	{
		displayName="AFTP Kitbag Pantera Desert";
		picture="\AFTP_units\data\ico_kitbag_wzd93.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\kitbag_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_kitbag_aau: AFTP_kitbag_wz93
	{
		displayName="AFTP Kitbag A-TACS AU";
		picture="\AFTP_units\data\ico_kitbag_aau.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\kitbag_aau.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_kitbag_afg: AFTP_kitbag_wz93
	{
		displayName="AFTP Kitbag A-TACS FG";
		picture="\AFTP_units\data\ico_kitbag_afg.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\kitbag_afg.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_kitbag_ale: AFTP_kitbag_wz93
	{
		displayName="AFTP Kitbag A-TACS LE";
		picture="\AFTP_units\data\ico_kitbag_ale.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\kitbag_ale.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_kitbag_mc: AFTP_kitbag_wz93
	{
		displayName="AFTP Kitbag Multicam";
		picture="\AFTP_units\data\ico_kitbag_mc.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\kitbag_mc.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_kitbag_mca: AFTP_kitbag_wz93
	{
		displayName="AFTP Kitbag Multicam Alpine";
		picture="\AFTP_units\data\ico_kitbag_mca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\kitbag_mca.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_kitbag_mct: AFTP_kitbag_wz93
	{
		displayName="AFTP Kitbag Multicam Tropic";
		picture="\AFTP_units\data\ico_kitbag_mct.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\kitbag_mct.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_assaultpack_wz93: B_AssaultPack_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Assault Pack Pantera";
		picture="\AFTP_units\data\ico_assaultpack_wz93.paa";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\assaultpack_wz93.paa"
		};
	};
	class AFTP_assaultpack_wzd93: AFTP_assaultpack_wz93
	{
		displayName="AFTP Assault Pack Pantera Desert";
		picture="\AFTP_units\data\ico_assaultpack_wzd93.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\assaultpack_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_assaultpack_mc: AFTP_assaultpack_wz93
	{
		displayName="AFTP Assault Pack Multicam";
		picture="\AFTP_units\data\ico_assaultpack_mc.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\assaultpack_mc.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_assaultpack_mca: AFTP_assaultpack_wz93
	{
		displayName="AFTP Assault Pack Multicam Alpine";
		picture="\AFTP_units\data\ico_assaultpack_mca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\assaultpack_mca.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_assaultpack_mct: AFTP_assaultpack_wz93
	{
		displayName="AFTP Assault Pack Multicam Tropic";
		picture="\AFTP_units\data\ico_assaultpack_mct.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\assaultpack_mct.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_assaultpack_aau: AFTP_assaultpack_wz93
	{
		displayName="AFTP Assault Pack A-TACS AU";
		picture="\AFTP_units\data\ico_assaultpack_aau.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\assaultpack_aau.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_assaultpack_afg: AFTP_assaultpack_wz93
	{
		displayName="AFTP Assault Pack A-TACS FG";
		picture="\AFTP_units\data\ico_assaultpack_afg.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\AFTP_units\data\assaultpack_afg.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
};
class CfgGroups
{
	class WEST
	{
		name="BLUEFOR";
		side=1;
		class aftp_units_wz93
		{
			name="AFTP Pantera Company";
			class SpecOps
			{
				name="SF Operators";
				class divers_wz93
				{
					name="Diver team";
					faction="aftp_units_wz93";
					rarityGroup=0.2;
					side=1;
					class dt01_aftp_wz93
					{
						side=1;
						vehicle="aftp_04_wz93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class dt02_aftp_wz93
					{
						side=1;
						vehicle="aftp_04_wz93";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class dt03_aftp_wz93
					{
						side=1;
						vehicle="aftp_04_wz93";
						rank="PRIVATE";
						position[]={1,0,0};
					};
					class dt04_aftp_wz93
					{
						side=1;
						vehicle="aftp_04_wz93";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Sniperteam_wz93
				{
					name="Sniper Team";
					faction="aftp_units_wz93";
					rarityGroup=0.40000001;
					side=1;
					class st01_aftp_wz93
					{
						side=1;
						vehicle="aftp_05_wz93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class st02_aftp_wz93
					{
						side=1;
						vehicle="aftp_05_wz93";
						rank="CORPORAL";
						position[]={1,0,0};
					};
				};
				class sfoperators_wz93
				{
					name="SF Team";
					faction="aftp_units_wz93";
					rarityGroup=0.80000001;
					side=1;
					class sf01_aftp_wz93
					{
						side=1;
						vehicle="aftp_sf_wz93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sf02_aftp_wz93
					{
						side=1;
						vehicle="aftp_sf_wz93";
						rank="SERGEANT";
						position[]={1,0,0};
					};
					class sf03_aftp_wz93
					{
						side=1;
						vehicle="aftp_sf_wz93";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class sf04_aftp_wz93
					{
						side=1;
						vehicle="aftp_sf_wz93";
						rank="CORPORAL";
						position[]={1,1,0};
					};
				};
			};
			class Infantry
			{
				name="Infantry";
				class Fireteam_wz93
				{
					name="Fireteam";
					faction="aftp_units_wz93";
					rarityGroup=0.80000001;
					side=1;
					class ft01_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_tl_wz93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class ft02_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_gr_wz93";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class ft03_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_ar_wz93";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class ft04_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_wz93";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Squad_wz93
				{
					name="Squad";
					faction="aftp_units_wz93";
					rarityGroup=0.40000001;
					side=1;
					class sq01_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_tl_wz93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sq02_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_gr_wz93";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class sq03_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_ar_wz93";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class sq04_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_wz93";
						rank="PRIVATE";
						position[]={1,1,0};
					};
					class sq05_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_ar_wz93";
						rank="PRIVATE";
						position[]={2,0,0};
					};
					class sq06_aftp_wz93
					{
						side=1;
						vehicle="aftp_02_wz93";
						rank="CORPORAL";
						position[]={0,2,0};
					};
					class sq07_aftp_wz93
					{
						side=1;
						vehicle="aftp_01_gr_wz93";
						rank="CORPORAL";
						position[]={2,2,0};
					};
					class sq08_aftp_wz93
					{
						side=1;
						vehicle="aftp_03_wz93";
						rank="CORPORAL";
						position[]={3,3,0};
					};
				};
			};
		};
		class aftp_units_wzd93
		{
			name="AFTP Pantera Desert Company";
			class SpecOps
			{
				name="SF Operators";
				class divers_wzd93
				{
					name="Diver team";
					faction="aftp_units_wzd93";
					rarityGroup=0.2;
					side=1;
					class dt01_aftp_wzd93
					{
						side=1;
						vehicle="aftp_04_wzd93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class dt02_aftp_wzd93
					{
						side=1;
						vehicle="aftp_04_wzd93";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class dt03_aftp_wzd93
					{
						side=1;
						vehicle="aftp_04_wzd93";
						rank="PRIVATE";
						position[]={1,0,0};
					};
					class dt04_aftp_wzd93
					{
						side=1;
						vehicle="aftp_04_wzd93";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Sniperteam_wzd93
				{
					name="Sniper Team";
					faction="aftp_units_wzd93";
					rarityGroup=0.40000001;
					side=1;
					class st01_aftp_wzd93
					{
						side=1;
						vehicle="aftp_05_wzd93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class st02_aftp_wzd93
					{
						side=1;
						vehicle="aftp_05_wzd93";
						rank="CORPORAL";
						position[]={1,0,0};
					};
				};
				class sfoperators_wzd93
				{
					name="SF Team";
					faction="aftp_units_wzd93";
					rarityGroup=0.80000001;
					side=1;
					class sf01_aftp_wzd93
					{
						side=1;
						vehicle="aftp_sf_wzd93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sf02_aftp_wzd93
					{
						side=1;
						vehicle="aftp_sf_wzd93";
						rank="SERGEANT";
						position[]={1,0,0};
					};
					class sf03_aftp_wzd93
					{
						side=1;
						vehicle="aftp_sf_wzd93";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class sf04_aftp_wzd93
					{
						side=1;
						vehicle="aftp_sf_wzd93";
						rank="CORPORAL";
						position[]={1,1,0};
					};
				};
			};
			class Infantry
			{
				name="Infantry";
				class Fireteam_wzd93
				{
					name="Fireteam";
					faction="aftp_units_wzd93";
					rarityGroup=0.80000001;
					side=1;
					class ft01_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_tl_wzd93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class ft02_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_gr_wzd93";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class ft03_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_ar_wzd93";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class ft04_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_wzd93";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Squad_wzd93
				{
					name="Squad";
					faction="aftp_units_wzd93";
					rarityGroup=0.40000001;
					side=1;
					class sq01_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_tl_wzd93";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sq02_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_gr_wzd93";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class sq03_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_ar_wzd93";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class sq04_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_wzd93";
						rank="PRIVATE";
						position[]={1,1,0};
					};
					class sq05_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_ar_wzd93";
						rank="PRIVATE";
						position[]={2,0,0};
					};
					class sq06_aftp_wzd93
					{
						side=1;
						vehicle="aftp_02_wzd93";
						rank="CORPORAL";
						position[]={0,2,0};
					};
					class sq07_aftp_wzd93
					{
						side=1;
						vehicle="aftp_01_gr_wzd93";
						rank="CORPORAL";
						position[]={2,2,0};
					};
					class sq08_aftp_wzd93
					{
						side=1;
						vehicle="aftp_03_wzd93";
						rank="CORPORAL";
						position[]={3,3,0};
					};
				};
			};
		};
		class aftp_units_mc
		{
			name="AFTP Multicam Company";
			class SpecOps
			{
				name="SF Operators";
				class divers_mc
				{
					name="Diver team";
					faction="aftp_units_mc";
					rarityGroup=0.2;
					side=1;
					class dt01_aftp_mc
					{
						side=1;
						vehicle="aftp_04_mc";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class dt02_aftp_mc
					{
						side=1;
						vehicle="aftp_04_mc";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class dt03_aftp_mc
					{
						side=1;
						vehicle="aftp_04_mc";
						rank="PRIVATE";
						position[]={1,0,0};
					};
					class dt04_aftp_mc
					{
						side=1;
						vehicle="aftp_04_mc";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Sniperteam_mc
				{
					name="Sniper Team";
					faction="aftp_units_mc";
					rarityGroup=0.40000001;
					side=1;
					class st01_aftp_mc
					{
						side=1;
						vehicle="aftp_05_mc";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class st02_aftp_mc
					{
						side=1;
						vehicle="aftp_05_mc";
						rank="CORPORAL";
						position[]={1,0,0};
					};
				};
				class sfoperators_mc
				{
					name="SF Team";
					faction="aftp_units_mc";
					rarityGroup=0.80000001;
					side=1;
					class sf01_aftp_mc
					{
						side=1;
						vehicle="aftp_sf_mc";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sf02_aftp_mc
					{
						side=1;
						vehicle="aftp_sf_mc";
						rank="SERGEANT";
						position[]={1,0,0};
					};
					class sf03_aftp_mc
					{
						side=1;
						vehicle="aftp_sf_mc";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class sf04_aftp_mc
					{
						side=1;
						vehicle="aftp_sf_mc";
						rank="CORPORAL";
						position[]={1,1,0};
					};
				};
			};
			class Infantry
			{
				name="Infantry";
				class Fireteam_mc
				{
					name="Fireteam";
					faction="aftp_units_mc";
					rarityGroup=0.80000001;
					side=1;
					class ft01_aftp_mc
					{
						side=1;
						vehicle="aftp_01_tl_mc";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class ft02_aftp_mc
					{
						side=1;
						vehicle="aftp_01_gr_mc";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class ft03_aftp_mc
					{
						side=1;
						vehicle="aftp_01_ar_mc";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class ft04_aftp_mc
					{
						side=1;
						vehicle="aftp_01_mc";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Squad_mc
				{
					name="Squad";
					faction="aftp_units_mc";
					rarityGroup=0.40000001;
					side=1;
					class sq01_aftp_mc
					{
						side=1;
						vehicle="aftp_01_tl_mc";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sq02_aftp_mc
					{
						side=1;
						vehicle="aftp_01_gr_mc";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class sq03_aftp_mc
					{
						side=1;
						vehicle="aftp_01_ar_mc";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class sq04_aftp_mc
					{
						side=1;
						vehicle="aftp_01_mc";
						rank="PRIVATE";
						position[]={1,1,0};
					};
					class sq05_aftp_mc
					{
						side=1;
						vehicle="aftp_01_ar_mc";
						rank="PRIVATE";
						position[]={2,0,0};
					};
					class sq06_aftp_mc
					{
						side=1;
						vehicle="aftp_02_mc";
						rank="CORPORAL";
						position[]={0,2,0};
					};
					class sq07_aftp_mc
					{
						side=1;
						vehicle="aftp_01_gr_mc";
						rank="CORPORAL";
						position[]={2,2,0};
					};
					class sq08_aftp_mc
					{
						side=1;
						vehicle="aftp_03_mc";
						rank="CORPORAL";
						position[]={3,3,0};
					};
				};
			};
		};
		class aftp_units_mct
		{
			name="AFTP Multicam Tropic Company";
			class SpecOps
			{
				name="SF Operators";
				class divers_mct
				{
					name="Diver team";
					faction="aftp_units_mct";
					rarityGroup=0.2;
					side=1;
					class dt01_aftp_mct
					{
						side=1;
						vehicle="aftp_04_mct";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class dt02_aftp_mct
					{
						side=1;
						vehicle="aftp_04_mct";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class dt03_aftp_mct
					{
						side=1;
						vehicle="aftp_04_mct";
						rank="PRIVATE";
						position[]={1,0,0};
					};
					class dt04_aftp_mct
					{
						side=1;
						vehicle="aftp_04_mct";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Sniperteam_mct
				{
					name="Sniper Team";
					faction="aftp_units_mct";
					rarityGroup=0.40000001;
					side=1;
					class st01_aftp_mct
					{
						side=1;
						vehicle="aftp_05_mct";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class st02_aftp_mct
					{
						side=1;
						vehicle="aftp_05_mct";
						rank="CORPORAL";
						position[]={1,0,0};
					};
				};
				class sfoperators_mct
				{
					name="SF Team";
					faction="aftp_units_mct";
					rarityGroup=0.80000001;
					side=1;
					class sf01_aftp_mct
					{
						side=1;
						vehicle="aftp_sf_mct";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sf02_aftp_mct
					{
						side=1;
						vehicle="aftp_sf_mct";
						rank="SERGEANT";
						position[]={1,0,0};
					};
					class sf03_aftp_mct
					{
						side=1;
						vehicle="aftp_sf_mct";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class sf04_aftp_mct
					{
						side=1;
						vehicle="aftp_sf_mct";
						rank="CORPORAL";
						position[]={1,1,0};
					};
				};
			};
			class Infantry
			{
				name="Infantry";
				class Fireteam_mct
				{
					name="Fireteam";
					faction="aftp_units_mct";
					rarityGroup=0.80000001;
					side=1;
					class ft01_aftp_mct
					{
						side=1;
						vehicle="aftp_01_tl_mct";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class ft02_aftp_mct
					{
						side=1;
						vehicle="aftp_01_gr_mct";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class ft03_aftp_mct
					{
						side=1;
						vehicle="aftp_01_ar_mct";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class ft04_aftp_mct
					{
						side=1;
						vehicle="aftp_01_mct";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Squad_mct
				{
					name="Squad";
					faction="aftp_units_mct";
					rarityGroup=0.40000001;
					side=1;
					class sq01_aftp_mct
					{
						side=1;
						vehicle="aftp_01_tl_mct";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sq02_aftp_mct
					{
						side=1;
						vehicle="aftp_01_gr_mct";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class sq03_aftp_mct
					{
						side=1;
						vehicle="aftp_01_ar_mct";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class sq04_aftp_mct
					{
						side=1;
						vehicle="aftp_01_mct";
						rank="PRIVATE";
						position[]={1,1,0};
					};
					class sq05_aftp_mct
					{
						side=1;
						vehicle="aftp_01_ar_mct";
						rank="PRIVATE";
						position[]={2,0,0};
					};
					class sq06_aftp_mct
					{
						side=1;
						vehicle="aftp_02_mct";
						rank="CORPORAL";
						position[]={0,2,0};
					};
					class sq07_aftp_mct
					{
						side=1;
						vehicle="aftp_01_gr_mct";
						rank="CORPORAL";
						position[]={2,2,0};
					};
					class sq08_aftp_mct
					{
						side=1;
						vehicle="aftp_03_mct";
						rank="CORPORAL";
						position[]={3,3,0};
					};
				};
			};
		};
		class aftp_units_aau
		{
			name="AFTP A-TACS AU Company";
			class SpecOps
			{
				name="SF Operators";
				class divers_aau
				{
					name="Diver team";
					faction="aftp_units_aau";
					rarityGroup=0.2;
					side=1;
					class dt01_aftp_aau
					{
						side=1;
						vehicle="aftp_04_aau";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class dt02_aftp_aau
					{
						side=1;
						vehicle="aftp_04_aau";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class dt03_aftp_aau
					{
						side=1;
						vehicle="aftp_04_aau";
						rank="PRIVATE";
						position[]={1,0,0};
					};
					class dt04_aftp_aau
					{
						side=1;
						vehicle="aftp_04_aau";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Sniperteam_aau
				{
					name="Sniper Team";
					faction="aftp_units_aau";
					rarityGroup=0.40000001;
					side=1;
					class st01_aftp_aau
					{
						side=1;
						vehicle="aftp_05_aau";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class st02_aftp_aau
					{
						side=1;
						vehicle="aftp_05_aau";
						rank="CORPORAL";
						position[]={1,0,0};
					};
				};
				class sfoperators_aau
				{
					name="SF Team";
					faction="aftp_units_aau";
					rarityGroup=0.80000001;
					side=1;
					class sf01_aftp_aau
					{
						side=1;
						vehicle="aftp_sf_aau";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sf02_aftp_aau
					{
						side=1;
						vehicle="aftp_sf_aau";
						rank="SERGEANT";
						position[]={1,0,0};
					};
					class sf03_aftp_aau
					{
						side=1;
						vehicle="aftp_sf_aau";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class sf04_aftp_aau
					{
						side=1;
						vehicle="aftp_sf_aau";
						rank="CORPORAL";
						position[]={1,1,0};
					};
				};
			};
			class Infantry
			{
				name="Infantry";
				class Fireteam_aau
				{
					name="Fireteam";
					faction="aftp_units_aau";
					rarityGroup=0.80000001;
					side=1;
					class ft01_aftp_aau
					{
						side=1;
						vehicle="aftp_01_tl_aau";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class ft02_aftp_aau
					{
						side=1;
						vehicle="aftp_01_gr_aau";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class ft03_aftp_aau
					{
						side=1;
						vehicle="aftp_01_ar_aau";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class ft04_aftp_aau
					{
						side=1;
						vehicle="aftp_01_aau";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Squad_aau
				{
					name="Squad";
					faction="aftp_units_aau";
					rarityGroup=0.40000001;
					side=1;
					class sq01_aftp_aau
					{
						side=1;
						vehicle="aftp_01_tl_aau";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sq02_aftp_aau
					{
						side=1;
						vehicle="aftp_01_gr_aau";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class sq03_aftp_aau
					{
						side=1;
						vehicle="aftp_01_ar_aau";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class sq04_aftp_aau
					{
						side=1;
						vehicle="aftp_01_aau";
						rank="PRIVATE";
						position[]={1,1,0};
					};
					class sq05_aftp_aau
					{
						side=1;
						vehicle="aftp_01_ar_aau";
						rank="PRIVATE";
						position[]={2,0,0};
					};
					class sq06_aftp_aau
					{
						side=1;
						vehicle="aftp_02_aau";
						rank="CORPORAL";
						position[]={0,2,0};
					};
					class sq07_aftp_aau
					{
						side=1;
						vehicle="aftp_01_gr_aau";
						rank="CORPORAL";
						position[]={2,2,0};
					};
					class sq08_aftp_aau
					{
						side=1;
						vehicle="aftp_03_aau";
						rank="CORPORAL";
						position[]={3,3,0};
					};
				};
			};
		};
		class aftp_units_afg
		{
			name="AFTP A-TACS FG Company";
			class SpecOps
			{
				name="SF Operators";
				class divers_afg
				{
					name="Diver team";
					faction="aftp_units_afg";
					rarityGroup=0.2;
					side=1;
					class dt01_aftp_afg
					{
						side=1;
						vehicle="aftp_04_afg";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class dt02_aftp_afg
					{
						side=1;
						vehicle="aftp_04_afg";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class dt03_aftp_afg
					{
						side=1;
						vehicle="aftp_04_afg";
						rank="PRIVATE";
						position[]={1,0,0};
					};
					class dt04_aftp_afg
					{
						side=1;
						vehicle="aftp_04_afg";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Sniperteam_afg
				{
					name="Sniper Team";
					faction="aftp_units_afg";
					rarityGroup=0.40000001;
					side=1;
					class st01_aftp_afg
					{
						side=1;
						vehicle="aftp_05_afg";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class st02_aftp_afg
					{
						side=1;
						vehicle="aftp_05_afg";
						rank="CORPORAL";
						position[]={1,0,0};
					};
				};
				class sfoperators_afg
				{
					name="SF Team";
					faction="aftp_units_afg";
					rarityGroup=0.80000001;
					side=1;
					class sf01_aftp_afg
					{
						side=1;
						vehicle="aftp_sf_afg";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sf02_aftp_afg
					{
						side=1;
						vehicle="aftp_sf_afg";
						rank="SERGEANT";
						position[]={1,0,0};
					};
					class sf03_aftp_afg
					{
						side=1;
						vehicle="aftp_sf_afg";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class sf04_aftp_afg
					{
						side=1;
						vehicle="aftp_sf_afg";
						rank="CORPORAL";
						position[]={1,1,0};
					};
				};
			};
			class Infantry
			{
				name="Infantry";
				class Fireteam_afg
				{
					name="Fireteam";
					faction="aftp_units_afg";
					rarityGroup=0.80000001;
					side=1;
					class ft01_aftp_afg
					{
						side=1;
						vehicle="aftp_01_tl_afg";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class ft02_aftp_afg
					{
						side=1;
						vehicle="aftp_01_gr_afg";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class ft03_aftp_afg
					{
						side=1;
						vehicle="aftp_01_ar_afg";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class ft04_aftp_afg
					{
						side=1;
						vehicle="aftp_01_afg";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Squad_afg
				{
					name="Squad";
					faction="aftp_units_afg";
					rarityGroup=0.40000001;
					side=1;
					class sq01_aftp_afg
					{
						side=1;
						vehicle="aftp_01_tl_afg";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sq02_aftp_afg
					{
						side=1;
						vehicle="aftp_01_gr_afg";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class sq03_aftp_afg
					{
						side=1;
						vehicle="aftp_01_ar_afg";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class sq04_aftp_afg
					{
						side=1;
						vehicle="aftp_01_afg";
						rank="PRIVATE";
						position[]={1,1,0};
					};
					class sq05_aftp_afg
					{
						side=1;
						vehicle="aftp_01_ar_afg";
						rank="PRIVATE";
						position[]={2,0,0};
					};
					class sq06_aftp_afg
					{
						side=1;
						vehicle="aftp_02_afg";
						rank="CORPORAL";
						position[]={0,2,0};
					};
					class sq07_aftp_afg
					{
						side=1;
						vehicle="aftp_01_gr_afg";
						rank="CORPORAL";
						position[]={2,2,0};
					};
					class sq08_aftp_afg
					{
						side=1;
						vehicle="aftp_03_afg";
						rank="CORPORAL";
						position[]={3,3,0};
					};
				};
			};
		};
		class aftp_units_ale
		{
			name="AFTP A-TACS LE Company";
			class SpecOps
			{
				name="SF Operators";
				class divers_ale
				{
					name="Diver team";
					faction="aftp_units_ale";
					rarityGroup=0.2;
					side=1;
					class dt01_aftp_ale
					{
						side=1;
						vehicle="aftp_04_ale";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class dt02_aftp_ale
					{
						side=1;
						vehicle="aftp_04_ale";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class dt03_aftp_ale
					{
						side=1;
						vehicle="aftp_04_ale";
						rank="PRIVATE";
						position[]={1,0,0};
					};
					class dt04_aftp_ale
					{
						side=1;
						vehicle="aftp_04_ale";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class sfoperators_ale
				{
					name="SF Team";
					faction="aftp_units_ale";
					rarityGroup=0.80000001;
					side=1;
					class sf01_aftp_ale
					{
						side=1;
						vehicle="aftp_sf_ale";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sf02_aftp_ale
					{
						side=1;
						vehicle="aftp_sf_ale";
						rank="SERGEANT";
						position[]={1,0,0};
					};
					class sf03_aftp_ale
					{
						side=1;
						vehicle="aftp_sf_ale";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class sf04_aftp_ale
					{
						side=1;
						vehicle="aftp_sf_ale";
						rank="CORPORAL";
						position[]={1,1,0};
					};
				};
			};
			class Infantry
			{
				name="Infantry";
				class Fireteam_ale
				{
					name="Fireteam";
					faction="aftp_units_ale";
					rarityGroup=0.80000001;
					side=1;
					class ft01_aftp_ale
					{
						side=1;
						vehicle="aftp_01_tl_ale";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class ft02_aftp_ale
					{
						side=1;
						vehicle="aftp_01_gr_ale";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class ft03_aftp_ale
					{
						side=1;
						vehicle="aftp_01_ar_ale";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class ft04_aftp_ale
					{
						side=1;
						vehicle="aftp_01_ale";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Squad_ale
				{
					name="Squad";
					faction="aftp_units_ale";
					rarityGroup=0.40000001;
					side=1;
					class sq01_aftp_ale
					{
						side=1;
						vehicle="aftp_01_tl_ale";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sq02_aftp_ale
					{
						side=1;
						vehicle="aftp_01_gr_ale";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class sq03_aftp_ale
					{
						side=1;
						vehicle="aftp_01_ar_ale";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class sq04_aftp_ale
					{
						side=1;
						vehicle="aftp_01_ale";
						rank="PRIVATE";
						position[]={1,1,0};
					};
					class sq05_aftp_ale
					{
						side=1;
						vehicle="aftp_01_ar_ale";
						rank="PRIVATE";
						position[]={2,0,0};
					};
					class sq06_aftp_ale
					{
						side=1;
						vehicle="aftp_02_ale";
						rank="CORPORAL";
						position[]={0,2,0};
					};
					class sq07_aftp_ale
					{
						side=1;
						vehicle="aftp_01_gr_ale";
						rank="CORPORAL";
						position[]={2,2,0};
					};
					class sq08_aftp_ale
					{
						side=1;
						vehicle="aftp_03_ale";
						rank="CORPORAL";
						position[]={3,3,0};
					};
				};
			};
		};
		class aftp_units_mca
		{
			name="AFTP Multicam Alpine Company";
			class SpecOps
			{
				name="SF Operators";
				class sfoperators_mca
				{
					name="SF Team";
					faction="aftp_units_mca";
					rarityGroup=0.80000001;
					side=1;
					class sf01_aftp_mca
					{
						side=1;
						vehicle="aftp_sf_mca";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sf02_aftp_mca
					{
						side=1;
						vehicle="aftp_sf_mca";
						rank="SERGEANT";
						position[]={1,0,0};
					};
					class sf03_aftp_mca
					{
						side=1;
						vehicle="aftp_sf_mca";
						rank="CORPORAL";
						position[]={0,1,0};
					};
					class sf04_aftp_mca
					{
						side=1;
						vehicle="aftp_sf_mca";
						rank="CORPORAL";
						position[]={1,1,0};
					};
				};
			};
			class Infantry
			{
				name="Infantry";
				class Fireteam_mca
				{
					name="Fireteam";
					faction="aftp_units_mca";
					rarityGroup=0.80000001;
					side=1;
					class ft01_aftp_mca
					{
						side=1;
						vehicle="aftp_01_tl_mca";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class ft02_aftp_mca
					{
						side=1;
						vehicle="aftp_01_gr_mca";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class ft03_aftp_mca
					{
						side=1;
						vehicle="aftp_01_ar_mca";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class ft04_aftp_mca
					{
						side=1;
						vehicle="aftp_01_mca";
						rank="PRIVATE";
						position[]={1,1,0};
					};
				};
				class Squad_mca
				{
					name="Squad";
					faction="aftp_units_mca";
					rarityGroup=0.40000001;
					side=1;
					class sq01_aftp_mca
					{
						side=1;
						vehicle="aftp_01_tl_mca";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class sq02_aftp_mca
					{
						side=1;
						vehicle="aftp_01_gr_mca";
						rank="CORPORAL";
						position[]={1,0,0};
					};
					class sq03_aftp_mca
					{
						side=1;
						vehicle="aftp_01_ar_mca";
						rank="PRIVATE";
						position[]={0,1,0};
					};
					class sq04_aftp_mca
					{
						side=1;
						vehicle="aftp_01_mca";
						rank="PRIVATE";
						position[]={1,1,0};
					};
					class sq05_aftp_mca
					{
						side=1;
						vehicle="aftp_01_ar_mca";
						rank="PRIVATE";
						position[]={2,0,0};
					};
					class sq06_aftp_mca
					{
						side=1;
						vehicle="aftp_02_mca";
						rank="CORPORAL";
						position[]={0,2,0};
					};
					class sq07_aftp_mca
					{
						side=1;
						vehicle="aftp_01_gr_mca";
						rank="CORPORAL";
						position[]={2,2,0};
					};
					class sq08_aftp_mca
					{
						side=1;
						vehicle="aftp_03_mca";
						rank="CORPORAL";
						position[]={3,3,0};
					};
				};
			};
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
	class Vest_Camo_Base;
	class Vest_NoCamo_Base;
	class VestItem;
	class ItemInfo;
	class U_I_GhillieSuit;
	class H_Booniehat_khk_hs;
	class H_MilCap_gry;
	class H_HelmetB;
	class H_HelmetB_Plain;
	class H_HelmetB_Light;
	class U_B_survival_uniform;
	class V_PlateCarrierSpec_blk;
	class V_PlateCarrierGL_blk;
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl;
	class V_PlateCarrierIAGL_dgtl;
	class aftp_ivmc_01: V_PlateCarrierIA1_dgtl
	{
		picture="\aftp_units\data\ico_iv_mc.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Multicam 03";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivmc.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivmc_02: V_PlateCarrierIA2_dgtl
	{
		picture="\aftp_units\data\ico_iva_mc.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Multicam 04";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivmc.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivmc_03: V_PlateCarrierIAGL_dgtl
	{
		picture="\aftp_units\data\ico_iva_mc.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Multicam 05";
		model="A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivmc.paa",
			"aftp_units\data\ivamc.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class aftp_ivmct_01: V_PlateCarrierIA1_dgtl
	{
		picture="\aftp_units\data\ico_iv_mct.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Multicam Tropic 03";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivmct.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivmct_02: V_PlateCarrierIA2_dgtl
	{
		picture="\aftp_units\data\ico_iva_mct.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Multicam Tropic 04";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivmct.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivmct_03: V_PlateCarrierIAGL_dgtl
	{
		picture="\aftp_units\data\ico_iva_mct.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Multicam Tropic 05";
		model="A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivmct.paa",
			"aftp_units\data\ivamct.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class aftp_ivmca_01: V_PlateCarrierIA1_dgtl
	{
		picture="\aftp_units\data\ico_iv_mca.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Multicam Alpine 03";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivmca.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivmca_02: V_PlateCarrierIA2_dgtl
	{
		picture="\aftp_units\data\ico_iva_mca.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Multicam Alpine 04";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivmca.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivmca_03: V_PlateCarrierIAGL_dgtl
	{
		picture="\aftp_units\data\ico_iva_mca.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Multicam Alpine 05";
		model="A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivmca.paa",
			"aftp_units\data\ivamca.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class aftp_ivwz_01: V_PlateCarrierIA1_dgtl
	{
		picture="\aftp_units\data\ico_iv_wz93.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Pantera 03";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivwz.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivwz_02: V_PlateCarrierIA2_dgtl
	{
		picture="\aftp_units\data\ico_iva_wz93.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Pantera 04";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivwz.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivwz_03: V_PlateCarrierIAGL_dgtl
	{
		picture="\aftp_units\data\ico_iva_wz93.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Pantera 05";
		model="A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivwz.paa",
			"aftp_units\data\ivawz.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class aftp_ivwzd_01: V_PlateCarrierIA1_dgtl
	{
		picture="\aftp_units\data\ico_iv_wz93d.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Pantera Desert 03";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivwzd.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivwzd_02: V_PlateCarrierIA2_dgtl
	{
		picture="\aftp_units\data\ico_iva_wz93d.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Pantera Desert 04";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivwzd.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivwzd_03: V_PlateCarrierIAGL_dgtl
	{
		picture="\aftp_units\data\ico_iva_wz93d.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest Pantera Desert 05";
		model="A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivwzd.paa",
			"aftp_units\data\ivawzd.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class aftp_ivaau_01: V_PlateCarrierIA1_dgtl
	{
		picture="\aftp_units\data\ico_iv_aau.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest A-TACS AU 03";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivaau.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivaau_02: V_PlateCarrierIA2_dgtl
	{
		picture="\aftp_units\data\ico_iva_aau.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest A-TACS AU 04";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivaau.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivaau_03: V_PlateCarrierIAGL_dgtl
	{
		picture="\aftp_units\data\ico_iva_aau.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest A-TACS AU 05";
		model="A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivaau.paa",
			"aftp_units\data\ivaaau.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class aftp_ivafg_01: V_PlateCarrierIA1_dgtl
	{
		picture="\aftp_units\data\ico_iv_afg.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest A-TACS FG 03";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivafg.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivafg_02: V_PlateCarrierIA2_dgtl
	{
		picture="\aftp_units\data\ico_iva_afg.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest A-TACS FG 04";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivafg.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_ivafg_03: V_PlateCarrierIAGL_dgtl
	{
		picture="\aftp_units\data\ico_iva_afg.paa";
		author="AFTP Golas & Waffel";
		displayname="AFTP Vest A-TACS FG 05";
		model="A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"aftp_units\data\ivafg.paa",
			"aftp_units\data\ivaafg.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class AFTP_helmet_mich_wz: H_HelmetB
	{
		author="AFTP Golas & Waffel";
		displayName="AFTP MICH Pantera";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\indhwz.paa"
		};
		picture="\aftp_units\data\ico_mich_wz93.paa";
		class ItemInfo: ItemInfo
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AFTP_helmet_mich_wzd: H_HelmetB
	{
		author="AFTP Golas & Waffel";
		displayName="AFTP MICH Pantera Desert";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\indhwzd.paa"
		};
		picture="\aftp_units\data\ico_mich_wz93d.paa";
		class ItemInfo: ItemInfo
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AFTP_helmet_mich_mc: H_HelmetB
	{
		author="AFTP Golas & Waffel";
		displayName="AFTP MICH Multicam";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\indhmc.paa"
		};
		picture="\aftp_units\data\ico_mich_mc.paa";
		class ItemInfo: ItemInfo
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AFTP_helmet_mich_mct: H_HelmetB
	{
		author="AFTP Golas & Waffel";
		displayName="AFTP MICH Multicam Tropic";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\indhmct.paa"
		};
		picture="\aftp_units\data\ico_mich_mct.paa";
		class ItemInfo: ItemInfo
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AFTP_helmet_mich_mca: H_HelmetB
	{
		author="AFTP Golas & Waffel";
		displayName="AFTP MICH Multicam Alpine";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\indhmca.paa"
		};
		picture="\aftp_units\data\ico_mich_mca.paa";
		class ItemInfo: ItemInfo
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AFTP_helmet_mich_au: H_HelmetB
	{
		author="AFTP Golas & Waffel";
		displayName="AFTP MICH A-TACS AU";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\indhau.paa"
		};
		picture="\aftp_units\data\ico_mich_aau.paa";
		class ItemInfo: ItemInfo
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AFTP_helmet_mich_afg: H_HelmetB
	{
		author="AFTP Golas & Waffel";
		displayName="AFTP MICH A-TACS FG";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\indhfg.paa"
		};
		picture="\aftp_units\data\ico_mich_afg.paa";
		class ItemInfo: ItemInfo
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[]={2,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AFTP_booniehat_wz93: H_Booniehat_khk_hs
	{
		author="AFTP Golas & Waffel";
		displayname="AFTP Booniehat Pantera";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\booniehat_wz93.paa"
		};
		picture="\AFTP_units\data\ico_booniehat_wz93.paa";
		scope=2;
	};
	class AFTP_booniehat_wzd93: AFTP_booniehat_wz93
	{
		displayname="AFTP Booniehat Pantera Desert";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\booniehat_wzd93.paa"
		};
		picture="\AFTP_units\data\ico_booniehat_wzd93.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_booniehat_aau: AFTP_booniehat_wz93
	{
		displayname="AFTP Booniehat A-TACS AU";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\booniehat_aau.paa"
		};
		picture="\AFTP_units\data\ico_booniehat_aau.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_booniehat_afg: AFTP_booniehat_wz93
	{
		displayname="AFTP Booniehat A-TACS FG";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\booniehat_afg.paa"
		};
		picture="\AFTP_units\data\ico_booniehat_afg.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_booniehat_mc: AFTP_booniehat_wz93
	{
		displayname="AFTP Booniehat Multicam";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\booniehat_mc.paa"
		};
		picture="\AFTP_units\data\ico_booniehat_mc.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_booniehat_mct: AFTP_booniehat_wz93
	{
		displayname="AFTP Booniehat Multicam Tropic";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\booniehat_mct.paa"
		};
		picture="\AFTP_units\data\ico_booniehat_mct.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_patrolcap_wz93: H_MilCap_gry
	{
		author="AFTP Golas & Waffel";
		displayname="AFTP Patrol Cap Pantera";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\patrolcap_wz93.paa"
		};
		picture="\AFTP_units\data\ico_patrolcap_wz93.paa";
		scope=2;
	};
	class AFTP_patrolcap_wzd93: AFTP_patrolcap_wz93
	{
		displayname="AFTP Patrol Cap Pantera Desert";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\patrolcap_wzd93.paa"
		};
		picture="\AFTP_units\data\ico_patrolcap_wzd93.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_patrolcap_aau: AFTP_patrolcap_wz93
	{
		displayname="AFTP Patrol Cap A-TACS AU";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\patrolcap_aau.paa"
		};
		picture="\AFTP_units\data\ico_patrolcap_aau.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_patrolcap_afg: AFTP_patrolcap_wz93
	{
		displayname="AFTP Patrol Cap A-TACS FG";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\patrolcap_afg.paa"
		};
		picture="\AFTP_units\data\ico_patrolcap_afg.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_patrolcap_mc: AFTP_patrolcap_wz93
	{
		displayname="AFTP Patrol Cap Multicam";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\patrolcap_mc.paa"
		};
		picture="\AFTP_units\data\ico_patrolcap_mc.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_patrolcap_mct: AFTP_patrolcap_wz93
	{
		displayname="AFTP Patrol Cap Multicam Tropic";
		hiddenselectionstextures[]=
		{
			"aftp_units\data\patrolcap_mct.paa"
		};
		picture="\AFTP_units\data\ico_patrolcap_mct.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class AFTP_helmet01_wz93: ItemCore
	{
		scope=2;
		author="AFTP Golas & Waffel";
		weaponPoolAvailable=1;
		displayName="AFTP Helmet Pantera";
		picture="\aftp_units\data\ico_hp_wz93.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_wz93.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class AFTP_helmet02_wz93: ItemCore
	{
		scope=2;
		author="AFTP Golas & Waffel";
		weaponPoolAvailable=1;
		displayName="AFTP Helmet Ballistic Pantera";
		picture="\aftp_units\data\ico_hb_wz93.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_wz93.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class AFTP_helmet03_wz93: ItemCore
	{
		scope=2;
		author="AFTP Golas & Waffel";
		weaponPoolAvailable=1;
		displayName="AFTP Helmet Light Pantera";
		picture="\aftp_units\data\ico_hl_wz93.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_wz93.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class AFTP_helmet01_wzd93: AFTP_helmet01_wz93
	{
		displayName="AFTP Helmet Pantera Desert";
		picture="\aftp_units\data\ico_hp_wzd93.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet02_wzd93: AFTP_helmet02_wz93
	{
		displayName="AFTP Helmet Ballistic Pantera Desert";
		picture="\aftp_units\data\ico_hb_wzd93.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet03_wzd93: AFTP_helmet03_wz93
	{
		displayName="AFTP Helmet Light Pantera Desert";
		picture="\aftp_units\data\ico_hl_wzd93.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet01_mc: AFTP_helmet01_wz93
	{
		displayName="AFTP Helmet Multicam";
		picture="\aftp_units\data\ico_hp_mc.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_mc.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet02_mc: AFTP_helmet02_wz93
	{
		displayName="AFTP Helmet Ballistic Multicam";
		picture="\aftp_units\data\ico_hb_mc.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_mc.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet03_mc: AFTP_helmet03_wz93
	{
		displayName="AFTP Helmet Light Multicam";
		picture="\aftp_units\data\ico_hl_mc.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_mc.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet01_mca: AFTP_helmet01_wz93
	{
		displayName="AFTP Helmet Multicam Alpine";
		picture="\aftp_units\data\ico_hp_mca.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_mca.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet02_mca: AFTP_helmet02_wz93
	{
		displayName="AFTP Helmet Ballistic Multicam Alpine";
		picture="\aftp_units\data\ico_hb_mca.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_mca.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet03_mca: AFTP_helmet03_wz93
	{
		displayName="AFTP Helmet Light Multicam Alpine";
		picture="\aftp_units\data\ico_hl_mca.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_mca.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet01_mct: AFTP_helmet01_wz93
	{
		displayName="AFTP Helmet Multicam Tropic";
		picture="\aftp_units\data\ico_hp_mct.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_mct.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet02_mct: AFTP_helmet02_wz93
	{
		displayName="AFTP Helmet Ballistic Multicam Tropic";
		picture="\aftp_units\data\ico_hb_mct.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_mct.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet03_mct: AFTP_helmet03_wz93
	{
		displayName="AFTP Helmet Light Multicam Tropic";
		picture="\aftp_units\data\ico_hl_mct.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_mct.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet01_aau: AFTP_helmet01_wz93
	{
		displayName="AFTP Helmet A-TACS AU";
		picture="\aftp_units\data\ico_hp_aau.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_aau.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet02_aau: AFTP_helmet02_wz93
	{
		displayName="AFTP Helmet Ballistic A-TACS AU";
		picture="\aftp_units\data\ico_hb_aau.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_aau.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet03_aau: AFTP_helmet03_wz93
	{
		displayName="AFTP Helmet Light A-TACS AU";
		picture="\aftp_units\data\ico_hl_aau.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_aau.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet01_afg: AFTP_helmet01_wz93
	{
		displayName="AFTP Helmet A-TACS FG";
		picture="\aftp_units\data\ico_hp_afg.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_afg.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet02_afg: AFTP_helmet02_wz93
	{
		displayName="AFTP Helmet Ballistic A-TACS FG";
		picture="\aftp_units\data\ico_hb_afg.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_afg.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet03_afg: AFTP_helmet03_wz93
	{
		displayName="AFTP Helmet Light A-TACS FG";
		picture="\aftp_units\data\ico_hl_afg.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_afg.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet01_ale: AFTP_helmet01_wz93
	{
		displayName="AFTP Helmet A-TACS LE";
		picture="\aftp_units\data\ico_hp_ale.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_ale.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet02_ale: AFTP_helmet02_wz93
	{
		displayName="AFTP Helmet Ballistic A-TACS LE";
		picture="\aftp_units\data\ico_hb_ale.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_ale.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class AFTP_helmet03_ale: AFTP_helmet03_wz93
	{
		displayName="AFTP Helmet Light A-TACS LE";
		picture="\aftp_units\data\ico_hl_ale.paa";
		hiddenSelectionsTextures[]=
		{
			"aftp_units\data\helmet_ale.paa"
		};
		author="AFTP Golas & Waffel";
	};
	class aftp_vest01_wz93: Vest_NoCamo_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Vest Pantera 01";
		picture="\aftp_units\data\ico_vest01_wz93.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_wz93.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			containerClass="Supply140";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_vest02_wz93: Vest_NoCamo_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Vest Pantera 02";
		picture="\aftp_units\data\ico_vest02_wz93.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_wz93.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			containerClass="Supply140";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class aftp_vest01_wzd93: aftp_vest01_wz93
	{
		displayName="AFTP Vest Pantera Desert 01";
		picture="\aftp_units\data\ico_vest01_wzd93.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest02_wzd93: aftp_vest02_wz93
	{
		displayName="AFTP Vest Pantera Desert 02";
		picture="\aftp_units\data\ico_vest02_wzd93.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest01_mc: aftp_vest01_wz93
	{
		displayName="AFTP Vest Multicam 01";
		picture="\aftp_units\data\ico_vest01_mc.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_mc.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest02_mc: aftp_vest02_wz93
	{
		displayName="AFTP Vest Multicam 02";
		picture="\aftp_units\data\ico_vest02_mc.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_mc.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest01_mca: aftp_vest01_wz93
	{
		displayName="AFTP Vest Multicam Alpine 01";
		picture="\aftp_units\data\ico_vest01_mca.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_mca.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest02_mca: aftp_vest02_wz93
	{
		displayName="AFTP Vest Multicam Alpine 02";
		picture="\aftp_units\data\ico_vest02_mca.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_mca.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest01_mct: aftp_vest01_wz93
	{
		displayName="AFTP Vest Multicam Tropic 01";
		picture="\aftp_units\data\ico_vest01_mct.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_mct.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest02_mct: aftp_vest02_wz93
	{
		displayName="AFTP Vest Multicam Tropic 02";
		picture="\aftp_units\data\ico_vest02_mct.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_mct.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest01_aau: aftp_vest01_wz93
	{
		displayName="AFTP Vest A-TACS AU 01";
		picture="\aftp_units\data\ico_vest01_aau.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_aau.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest02_aau: aftp_vest02_wz93
	{
		displayName="AFTP Vest A-TACS AU 02";
		picture="\aftp_units\data\ico_vest02_aau.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_aau.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest01_afg: aftp_vest01_wz93
	{
		displayName="AFTP Vest A-TACS FG 01";
		picture="\aftp_units\data\ico_vest01_afg.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_afg.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest02_afg: aftp_vest02_wz93
	{
		displayName="AFTP Vest A-TACS FG 02";
		picture="\aftp_units\data\ico_vest02_afg.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_afg.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest01_ale: aftp_vest01_wz93
	{
		displayName="AFTP Vest A-TACS LE 01";
		picture="\aftp_units\data\ico_vest01_ale.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_ale.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_vest02_ale: aftp_vest02_wz93
	{
		displayName="AFTP Vest A-TACS LE 02";
		picture="\aftp_units\data\ico_vest02_ale.paa";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\vest_ale.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest01_mc: V_PlateCarrierGL_blk
	{
		picture="\aftp_units\data\ico_hvest_mc.paa";
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Carrier GL Rig Mullticam";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_mc.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			hiddenSelections[]=
			{
				"camo"
			};
			mass=120;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
		};
	};
	class aftp_hvest02_mc: V_PlateCarrierSpec_blk
	{
		picture="\aftp_units\data\ico_hvest_mc.paa";
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Carrier Special Rig Multicam";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_mc.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo"
			};
			mass=100;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		};
	};
	class aftp_hvest01_mct: aftp_hvest01_mc
	{
		displayName="AFTP Carrier GL Rig Multicam Tropic";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_mct.paa"
		};
		picture="\aftp_units\data\ico_hvest_mct.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest02_mct: aftp_hvest02_mc
	{
		displayName="AFTP Carrier Special Rig Multicam Tropic";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_mct.paa"
		};
		picture="\aftp_units\data\ico_hvest_mct.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest01_mca: aftp_hvest01_mc
	{
		displayName="AFTP Carrier GL Rig Multicam Alpine";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_mca.paa"
		};
		picture="\aftp_units\data\ico_hvest_mca.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest02_mca: aftp_hvest02_mc
	{
		displayName="AFTP Carrier Special Rig Multicam Alpine";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_mca.paa"
		};
		picture="\aftp_units\data\ico_hvest_mca.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest01_aau: aftp_hvest01_mc
	{
		displayName="AFTP Carrier GL Rig A-TACS AU";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_aau.paa"
		};
		picture="\aftp_units\data\ico_hvest_aau.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest02_aau: aftp_hvest02_mc
	{
		displayName="AFTP Carrier Special Rig A-TACS AU";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_aau.paa"
		};
		picture="\aftp_units\data\ico_hvest_aau.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest01_afg: aftp_hvest01_mc
	{
		displayName="AFTP Carrier GL Rig A-TACS FG";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_afg.paa"
		};
		picture="\aftp_units\data\ico_hvest_afg.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest02_afg: aftp_hvest02_mc
	{
		displayName="AFTP Carrier Special Rig A-TACS FG";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_afg.paa"
		};
		picture="\aftp_units\data\ico_hvest_afg.paa";
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest01_ale: aftp_hvest01_mc
	{
		displayName="AFTP Carrier GL Rig A-TACS LE";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_ale.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest02_ale: aftp_hvest02_mc
	{
		displayName="AFTP Carrier Special Rig A-TACS LE";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_ale.paa"
		};
		author="AFTP Golas & Waffel";
		scope=2;
	};
	class aftp_hvest01_wz93: aftp_hvest01_mc
	{
		displayName="AFTP Carrier GL Rig Pantera wz93";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_wz93.paa"
		};
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_hvest_wz93.paa";
		scope=2;
	};
	class aftp_hvest02_wz93: aftp_hvest02_mc
	{
		displayName="AFTP Carrier Special Rig Pantera wz93";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_wz93.paa"
		};
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_hvest_wz93.paa";
		scope=2;
	};
	class aftp_hvest01_wzd93: aftp_hvest01_mc
	{
		displayName="AFTP Carrier GL Rig Pantera Desert wz93";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_hvest_wzd93.paa";
		scope=2;
	};
	class aftp_hvest02_wzd93: aftp_hvest02_mc
	{
		displayName="AFTP Carrier Special Rig Pantera Desert wz93";
		hiddenSelectionsTextures[]=
		{
			"\aftp_units\data\heavyvest_wzd93.paa"
		};
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_hvest_wzd93.paa";
		scope=2;
	};
	class uni01_wz93: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Pantera 01";
		picture="\aftp_units\data\ico_uni01_wz93.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_wz93";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni02_wz93: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Pantera 02";
		picture="\aftp_units\data\ico_uni02_wz93.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_wz93";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni03_wz93: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Pantera 03";
		picture="\aftp_units\data\ico_uni03_wz93.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_03_wz93";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni04_wz93: U_B_survival_uniform
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Pantera with fins";
		picture="\aftp_units\data\ico_uni03_wz93.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_04_wz93";
			containerClass="Supply50";
			uniformType="Neopren";
			mass=80;
		};
	};
	class uni05_wz93: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Ghillie Pantera camo";
		picture="\aftp_units\data\ico_ghillie_wz93.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_05_wz93";
			containerClass="Supply50";
			mass=80;
		};
	};
	class uni01_wzd93: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Pantera Desert 01";
		picture="\aftp_units\data\ico_uni01_wzd93.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_wzd93";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni02_wzd93: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Pantera Desert 02";
		picture="\aftp_units\data\ico_uni02_wzd93.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_wzd93";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni03_wzd93: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Pantera Desert 03";
		picture="\aftp_units\data\ico_uni03_wzd93.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_03_wzd93";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni04_wzd93: U_B_survival_uniform
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Pantera Desert with fins";
		picture="\aftp_units\data\ico_uni03_wzd93.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_04_wzd93";
			containerClass="Supply50";
			uniformType="Neopren";
			mass=80;
		};
	};
	class uni05_wzd93: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Ghillie Pantera Desert camo";
		picture="\aftp_units\data\ico_ghillie_wzd93.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_05_wzd93";
			containerClass="Supply50";
			mass=80;
		};
	};
	class uni01_mc: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Multicam 01";
		picture="\aftp_units\data\ico_uni01_mc.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_mc";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni02_mc: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Multicam 02";
		picture="\aftp_units\data\ico_uni02_mc.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_mc";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni03_mc: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Multicam 03";
		picture="\aftp_units\data\ico_uni03_mc.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_03_mc";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni04_mc: U_B_survival_uniform
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Multicam with fins";
		picture="\aftp_units\data\ico_uni03_mc.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_04_mc";
			containerClass="Supply50";
			uniformType="Neopren";
			mass=80;
		};
	};
	class uni05_mc: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Ghillie Multicam camo";
		picture="\aftp_units\data\ico_ghillie_mc.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_05_mc";
			containerClass="Supply50";
			mass=80;
		};
	};
	class uni01_mct: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Multicam Tropic 01";
		picture="\aftp_units\data\ico_uni01_mct.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_mct";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni02_mct: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Multicam Tropic 02";
		picture="\aftp_units\data\ico_uni02_mct.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_mct";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni03_mct: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Multicam Tropic 03";
		picture="\aftp_units\data\ico_uni03_mct.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_03_mct";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni04_mct: U_B_survival_uniform
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Multicam Tropic with fins";
		picture="\aftp_units\data\ico_uni03_mct.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_04_mct";
			containerClass="Supply50";
			uniformType="Neopren";
			mass=80;
		};
	};
	class uni05_mct: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Ghillie Multicam Tropic camo";
		picture="\aftp_units\data\ico_ghillie_mct.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_05_mct";
			containerClass="Supply50";
			mass=80;
		};
	};
	class uni01_mca: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Multicam Alpine 01";
		picture="\aftp_units\data\ico_uni01_mca.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_mca";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni02_mca: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Multicam Alpine 02";
		picture="\aftp_units\data\ico_uni02_mca.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_mca";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni03_mca: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP Multicam Alpine 03";
		picture="\aftp_units\data\ico_uni03_mca.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_03_mca";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni01_aau: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP A-TACS AU 01";
		picture="\aftp_units\data\ico_uni01_aau.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_aau";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni02_aau: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP A-TACS AU 02";
		picture="\aftp_units\data\ico_uni02_aau.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_aau";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni03_aau: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP A-TACS AU 03";
		picture="\aftp_units\data\ico_uni03_aau.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_03_aau";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni04_aau: U_B_survival_uniform
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP A-TACS AU with fins";
		picture="\aftp_units\data\ico_uni03_aau.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_04_aau";
			containerClass="Supply50";
			uniformType="Neopren";
			mass=80;
		};
	};
	class uni05_aau: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Ghillie A-TACS AU camo";
		picture="\aftp_units\data\ico_ghillie_aau.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_05_aau";
			containerClass="Supply50";
			mass=80;
		};
	};
	class uni01_afg: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP A-TACS FG 01";
		picture="\aftp_units\data\ico_uni01_afg.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_afg";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni02_afg: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP A-TACS FG 02";
		picture="\aftp_units\data\ico_uni02_afg.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_afg";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni03_afg: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP A-TACS FG 03";
		picture="\aftp_units\data\ico_uni03_afg.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_03_afg";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni04_afg: U_B_survival_uniform
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP A-TACS FG with fins";
		picture="\aftp_units\data\ico_uni03_afg.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_04_afg";
			containerClass="Supply50";
			uniformType="Neopren";
			mass=80;
		};
	};
	class uni05_afg: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Ghillie A-TACS FG camo";
		picture="\aftp_units\data\ico_ghillie_afg.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_05_afg";
			containerClass="Supply50";
			mass=80;
		};
	};
	class uni01_ale: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP A-TACS LE 01";
		picture="\aftp_units\data\ico_uni01_ale.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_ale";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni02_ale: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP A-TACS LE 02";
		picture="\aftp_units\data\ico_uni02_ale.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_ale";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni03_ale: Uniform_Base
	{
		scope=2;
		author="AFTP Golas & Waffel";
		displayName="AFTP A-TACS LE 03";
		picture="\aftp_units\data\ico_uni03_ale.paa";
		model="\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_03_ale";
			containerClass="Supply40";
			mass=40;
		};
	};
	class uni04_ale: U_B_survival_uniform
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP A-TACS LE with fins";
		picture="\aftp_units\data\ico_uni03_ale.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_04_ale";
			containerClass="Supply50";
			uniformType="Neopren";
			mass=80;
		};
	};
	class aftp_wzind01: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Pantera 04";
		picture="\aftp_units\data\ico_iul_wz93.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_wzind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_wzind02: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		scope=2;
		displayName="AFTP Pantera 05";
		picture="\aftp_units\data\ico_ius_wz93.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_wzind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_wzdind01: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_iul_wz93d.paa";
		scope=2;
		displayName="AFTP Pantera Desert 04";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_wzdind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_wzdind02: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_ius_wz93d.paa";
		scope=2;
		displayName="AFTP Pantera Desert 05";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_wzdind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_mcind01: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_iul_mc.paa";
		scope=2;
		displayName="AFTP Multicam 04";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_mcind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_mcind02: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_ius_mc.paa";
		scope=2;
		displayName="AFTP Multicam 05";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_mcind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_mctind01: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_iul_mct.paa";
		scope=2;
		displayName="AFTP Multicam Tropic 04";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_mctind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_mctind02: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_ius_mct.paa";
		scope=2;
		displayName="AFTP Multicam Tropic 05";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_mctind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_mcaind01: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_iul_mca.paa";
		scope=2;
		displayName="AFTP Multicam Alpine 04";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_mcaind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_mcaind02: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_ius_mca.paa";
		scope=2;
		displayName="AFTP Mullticam Alpine 05";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_mcaind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_aauind01: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_iul_aau.paa";
		scope=2;
		displayName="AFTP A-TACS AU 04";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_aauind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_aauind02: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_ius_aau.paa";
		scope=2;
		displayName="AFTP A-TACS AU 05";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_aauind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_afgind01: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_iul_afg.paa";
		scope=2;
		displayName="AFTP A-TACS FG 04";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_01_afgind";
			containerClass="Supply50";
			mass=80;
		};
	};
	class aftp_afgind02: Uniform_Base
	{
		author="AFTP Golas & Waffel";
		picture="\aftp_units\data\ico_ius_afg.paa";
		scope=2;
		displayName="AFTP A-TACS FG 05";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="aftp_02_afgind";
			containerClass="Supply50";
			mass=80;
		};
	};
};
class cfgMods
{
	author="76561198011045447";
	requiredAddons[]=
	{
		"A3_Characters_F_BLUFOR",
		"A3_Characters_F_Common",
		"A3_Characters_F_Heads",
		"A3_Modules_F",
		"A3_UI_F",
		"A3_Structures_F_Items_Electronics",
		"aftp_units"
	};
	timepacked=1439840809;
};

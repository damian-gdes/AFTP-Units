	class B_Soldier_base_F;
	class b_soldier_survival_F;
	class B_Soldier_sniper_base_F;

#define AuthorMacro author = "AFTP Golas & Waffel";
#define Standard_Equipment "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "FirstAidKit", "FirstAidKit", "FirstAidKit"
#define Standard_Weapons "Throw", "Put", "Rangefinder", "arifle_Mk20_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"
#define StandardDES_Weapons "Throw", "Put", "Rangefinder", "arifle_Mk20_MRCO_plain_F", "hgun_Pistol_heavy_01_MRD_F"
#define StandardGR_Weapons "Throw", "Put", "Rangefinder", "arifle_Mk20_GL_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"
#define StandardGRDES_Weapons "Throw", "Put", "Rangefinder", "arifle_Mk20_GL_plain_F", "hgun_Pistol_heavy_01_MRD_F"
#define SF_Weapons "Throw", "Put", "Rangefinder", "arifle_TRG21_ARCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"
#define StandardAR_Weapons "Throw", "Put", "Rangefinder", "LMG_Mk200_MRCO_F", "hgun_Pistol_heavy_01_MRD_F"
#define Standard_Ammo "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"
#define StandardGR_Ammo "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"
#define StandardAR_Ammo "200Rnd_65x39_cased_Box_Tracer", "200Rnd_65x39_cased_Box_Tracer", "200Rnd_65x39_cased_Box_Tracer", "200Rnd_65x39_cased_Box_Tracer", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"
#define StandardS_Weapons "Throw", "Put", "Rangefinder", "srifle_LRR_camo_SOS_F", "hgun_Pistol_heavy_01_MRD_F"
#define StandardS_Ammo "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"
	
	class aftp_01_wz93 : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units_wz93";
		canCarryBackPack = 1;
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_wz93";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_wz93";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wz93.paa"};
		weapons[] = {Standard_Weapons};
		respawnWeapons[] = {Standard_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_01_tl_wz93 : aftp_01_wz93 {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"AFTP_helmet02_wz93", "AFTP_vest01_wz93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_wz93", "AFTP_vest01_wz93", Standard_Equipment};
	};
	
	class aftp_01_gr_wz93 : aftp_01_wz93 {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {StandardGR_Weapons};
		respawnWeapons[] = {StandardGR_Weapons};
		magazines[] = {StandardGR_Ammo};
		respawnMagazines[] = {StandardGR_Ammo};
		linkedItems[] = {"AFTP_helmet01_wz93", "AFTP_hvest01_wz93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_wz93", "AFTP_hvest01_wz93", Standard_Equipment};
	};	
	
	class aftp_01_ar_wz93 : aftp_01_wz93 {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		weapons[] = {StandardAR_Weapons};
		respawnWeapons[] = {StandardAR_Weapons};
		magazines[] = {StandardAR_Ammo};
		respawnMagazines[] = {StandardAR_Ammo};
		linkedItems[] = {"AFTP_helmet02_wz93", "AFTP_hvest02_wz93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_wz93", "AFTP_hvest02_wz93", Standard_Equipment};
	};
	
	class aftp_sf_wz93 : aftp_01_wz93 {
		scope = public;
		weapons[] = {SF_Weapons};
		respawnWeapons[] = {SF_Weapons};
		AuthorMacro
		scopeCurator = 2;
		displayName = "SF Operator";
		displayName = "SF Operator";
		attendant = true; 
		canDeactivateMines = true;
        engineer = true;
		linkedItems[] = {"AFTP_helmet03_wz93", "AFTP_vest01_wz93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_wz93", "AFTP_vest01_wz93", Standard_Equipment};
	};
	
	class aftp_02_wz93 : aftp_01_wz93 {
		uniformClass = "uni02_wz93";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Medic";
		attendant = true; 
		linkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest02_wz93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest02_wz93", Standard_Equipment};
	};
	
	class aftp_03_wz93 : aftp_01_wz93 {
		uniformClass = "uni03_wz93";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wz93.paa", "\A3\Characters_F\Common\Data\basicbody_green_co.paa"};
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Engineer";
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_04_wz93 : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";
		displayName = "Diver";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_wz93";
		weapons[] = {Standard_Weapons};
		respawnWeapons[] = {Standard_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet03_wz93", "AFTP_vest02_wz93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_wz93", "AFTP_vest02_wz93", Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_wz93";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wz93.paa", "\A3\Characters_F\Common\Data\basicbody_green_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_05_wz93 : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";
		displayName = "Sniper";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_wz93";
		weapons[] = {StandardS_Weapons};
		respawnWeapons[] = {StandardS_Weapons};
		magazines[] = {StandardS_Ammo};
		respawnMagazines[] = {StandardS_Ammo};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_wz93";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wz93.paa", "\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		attendant = true; 
	};
	
	class aftp_01_wzd93 : aftp_01_wz93 {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units_wzd93";
		canCarryBackPack = 1;
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_wz93";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_wzd93";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wzd93.paa"};
		weapons[] = {StandardDES_Weapons};
		respawnWeapons[] = {StandardDES_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet01_wzd93", "AFTP_vest01_wzd93",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_wzd93", "AFTP_vest01_wzd93",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_01_tl_wzd93 : aftp_01_wzd93 {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"AFTP_helmet02_wzd93", "AFTP_vest01_wzd93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_wzd93", "AFTP_vest01_wzd93", Standard_Equipment};
	};
	
	class aftp_01_gr_wzd93 : aftp_01_wzd93 {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {StandardGRDES_Weapons};
		respawnWeapons[] = {StandardGRDES_Weapons};
		magazines[] = {StandardGR_Ammo};
		respawnMagazines[] = {StandardGR_Ammo};
		linkedItems[] = {"AFTP_helmet01_wzd93", "AFTP_hvest01_wzd93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_wzd93", "AFTP_hvest01_wzd93", Standard_Equipment};
	};	
	
	class aftp_01_ar_wzd93 : aftp_01_wzd93 {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		weapons[] = {StandardAR_Weapons};
		respawnWeapons[] = {StandardAR_Weapons};
		magazines[] = {StandardAR_Ammo};
		respawnMagazines[] = {StandardAR_Ammo};
		linkedItems[] = {"AFTP_helmet02_wzd93", "AFTP_hvest02_wzd93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_wzd93", "AFTP_hvest02_wzd93", Standard_Equipment};
	};
	
	class aftp_sf_wzd93 : aftp_01_wzd93 {
		weapons[] = {SF_Weapons};
		respawnWeapons[] = {SF_Weapons};
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "SF Operator";
		displayName = "SF Operator";
		attendant = true; 
		canDeactivateMines = true;
        engineer = true;
		linkedItems[] = {"AFTP_helmet03_wzd93", "AFTP_vest01_wzd93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_wzd93", "AFTP_vest01_wzd93", Standard_Equipment};
	};
	
	class aftp_02_wzd93 : aftp_01_wzd93 {
		uniformClass = "uni02_wzd93";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Medic";
		attendant = true;
		linkedItems[] = {"AFTP_helmet01_wzd93", "AFTP_vest02_wzd93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_wzd93", "AFTP_vest02_wzd93", Standard_Equipment};
	};
	
	class aftp_03_wzd93 : aftp_01_wzd93 {
		uniformClass = "uni03_wzd93";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wzd93.paa", "\A3\Characters_F\Common\Data\basicbody_brown_co.paa"};
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Engineer";
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_04_wzd93 : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Diver";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_wzd93";
		weapons[] = {StandardDES_Weapons};
		respawnWeapons[] = {StandardDES_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet01_wzd93", "AFTP_vest01_wzd93",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_wzd93", "AFTP_vest01_wzd93",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_wzd93";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wzd93.paa", "\A3\Characters_F\Common\Data\basicbody_brown_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_05_wzd93 : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Sniper";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_wzd93";
		weapons[] = {StandardS_Weapons};
		respawnWeapons[] = {StandardS_Weapons};
		magazines[] = {StandardS_Ammo};
		respawnMagazines[] = {StandardS_Ammo};
		linkedItems[] = {"AFTP_helmet03_wzd93", "AFTP_vest02_wzd93", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_wzd93", "AFTP_vest02_wzd93", Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_wzd93";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wzd93.paa", "\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		attendant = true; 
	};
	
	class aftp_01_mc : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units_mc";
		canCarryBackPack = 1;

		scope = public;
		AuthorMacro
		scopeCurator = 2;
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_mc";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_mc";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mc.paa"};
		weapons[] = {StandardDES_Weapons};
		respawnWeapons[] = {StandardDES_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_01_tl_mc : aftp_01_mc {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"AFTP_helmet02_mc", "AFTP_vest01_mc", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_mc", "AFTP_vest01_mc", Standard_Equipment};
	};
	
	class aftp_01_gr_mc : aftp_01_mc {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {StandardGRDES_Weapons};
		respawnWeapons[] = {StandardGRDES_Weapons};
		magazines[] = {StandardGR_Ammo};
		respawnMagazines[] = {StandardGR_Ammo};
		linkedItems[] = {"AFTP_helmet01_mc", "AFTP_hvest01_mc", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mc", "AFTP_hvest01_mc", Standard_Equipment};
	};	
	
	class aftp_01_ar_mc : aftp_01_mc {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		weapons[] = {StandardAR_Weapons};
		respawnWeapons[] = {StandardAR_Weapons};
		magazines[] = {StandardAR_Ammo};
		respawnMagazines[] = {StandardAR_Ammo};
		linkedItems[] = {"AFTP_helmet02_mc", "AFTP_hvest02_mc", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_mc", "AFTP_hvest02_mc", Standard_Equipment};
	};
	
	class aftp_sf_mc : aftp_01_mc {
		weapons[] = {SF_Weapons};
		respawnWeapons[] = {SF_Weapons};
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "SF Operator";
		displayName = "SF Operator";
		attendant = true; 
		canDeactivateMines = true;
        engineer = true;
		linkedItems[] = {"AFTP_helmet03_mc", "AFTP_vest01_mc", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_mc", "AFTP_vest01_mc", Standard_Equipment};
	};
	
	class aftp_02_mc : aftp_01_mc {
		uniformClass = "uni02_mc";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Medic - Pantera Desert";
		attendant = true;
		linkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest02_mc", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest02_mc", Standard_Equipment};
	};
	
	class aftp_02_mc : aftp_01_mc {
		uniformClass = "uni02_mc";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Medic";
		attendant = true; 
	};
	
	class aftp_03_mc : aftp_01_mc {
		uniformClass = "uni03_mc";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mc.paa", "\A3\Characters_F\Common\Data\basicbody_brown_co.paa"};
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Engineer";
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_04_mc : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Diver";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_mc";
		weapons[] = {StandardDES_Weapons};
		respawnWeapons[] = {StandardDES_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet03_mc", "AFTP_vest02_mc", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_mc", "AFTP_vest02_mc", Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_mc";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mc.paa", "\A3\Characters_F\Common\Data\basicbody_brown_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_05_mc : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Sniper";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_mc";
		weapons[] = {StandardS_Weapons};
		respawnWeapons[] = {StandardS_Weapons};
		magazines[] = {StandardS_Ammo};
		respawnMagazines[] = {StandardS_Ammo};
		linkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_mc";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mc.paa", "\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		attendant = true;
	};
	
	class aftp_01_mct : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units_mct";
		canCarryBackPack = 1;

		scope = public;
		AuthorMacro
		scopeCurator = 2;
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_mct";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_mct";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mct.paa"};
		weapons[] = {Standard_Weapons};
		respawnWeapons[] = {Standard_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_01_tl_mct : aftp_01_mct {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"AFTP_helmet02_mct", "AFTP_vest01_mct", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_mct", "AFTP_vest01_mct", Standard_Equipment};
	};
	
	class aftp_01_gr_mct : aftp_01_mct {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {StandardGR_Weapons};
		respawnWeapons[] = {StandardGR_Weapons};
		magazines[] = {StandardGR_Ammo};
		respawnMagazines[] = {StandardGR_Ammo};
		linkedItems[] = {"AFTP_helmet01_mct", "AFTP_hvest01_mct", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mct", "AFTP_hvest01_mct", Standard_Equipment};
	};	
	
	class aftp_01_ar_mct : aftp_01_mct {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		weapons[] = {StandardAR_Weapons};
		respawnWeapons[] = {StandardAR_Weapons};
		magazines[] = {StandardAR_Ammo};
		respawnMagazines[] = {StandardAR_Ammo};
		linkedItems[] = {"AFTP_helmet02_mct", "AFTP_hvest02_mct", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_mct", "AFTP_hvest02_mct", Standard_Equipment};
	};
	
	class aftp_sf_mct : aftp_01_mct {
		weapons[] = {SF_Weapons};
		respawnWeapons[] = {SF_Weapons};
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "SF Operator";
		displayName = "SF Operator";
		attendant = true; 
		canDeactivateMines = true;
        engineer = true;
		linkedItems[] = {"AFTP_helmet03_mct", "AFTP_vest01_mct", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_mct", "AFTP_vest01_mct", Standard_Equipment};
	};
	
	class aftp_02_mct : aftp_01_mct {
		uniformClass = "uni02_mct";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Medic";
		attendant = true; 
		linkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest02_mct", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest02_mct", Standard_Equipment};
	};
	
	class aftp_03_mct : aftp_01_mct {
		uniformClass = "uni03_mct";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mct.paa", "\A3\Characters_F\Common\Data\basicbody_green_co.paa"};
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Engineer";
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_04_mct : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Diver";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_mct";
		weapons[] = {Standard_Weapons};
		respawnWeapons[] = {Standard_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet03_mct", "AFTP_vest02_mct", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_mct", "AFTP_vest02_mct", Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_mct";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mct.paa", "\A3\Characters_F\Common\Data\basicbody_green_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_05_mct : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Sniper";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_mct";
		weapons[] = {StandardS_Weapons};
		respawnWeapons[] = {StandardS_Weapons};
		magazines[] = {StandardS_Ammo};
		respawnMagazines[] = {StandardS_Ammo};
		linkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_mct";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mct.paa", "\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		attendant = true; 
	};
	
	class aftp_01_mca : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units_mca";
		canCarryBackPack = 1;

		scope = public;
		AuthorMacro
		scopeCurator = 2;
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_mca";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_mca";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mca.paa"};
		weapons[] = {Standard_Weapons};
		respawnWeapons[] = {Standard_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet01_mca", "AFTP_vest01_mca",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mca", "AFTP_vest01_mca",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_01_tl_mca : aftp_01_mca {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"AFTP_helmet02_mca", "AFTP_vest01_mca", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_mca", "AFTP_vest01_mca", Standard_Equipment};
	};
	
	class aftp_01_gr_mca : aftp_01_mca {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {StandardGR_Weapons};
		respawnWeapons[] = {StandardGR_Weapons};
		magazines[] = {StandardGR_Ammo};
		respawnMagazines[] = {StandardGR_Ammo};
		linkedItems[] = {"AFTP_helmet01_mca", "AFTP_hvest01_mca", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mca", "AFTP_hvest01_mca", Standard_Equipment};
	};	
	
	class aftp_01_ar_mca : aftp_01_mca {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		weapons[] = {StandardAR_Weapons};
		respawnWeapons[] = {StandardAR_Weapons};
		magazines[] = {StandardAR_Ammo};
		respawnMagazines[] = {StandardAR_Ammo};
		linkedItems[] = {"AFTP_helmet02_mca", "AFTP_hvest02_mca", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_mca", "AFTP_hvest02_mca", Standard_Equipment};
	};
	
	class aftp_sf_mca : aftp_01_mca {
		weapons[] = {SF_Weapons};
		respawnWeapons[] = {SF_Weapons};
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "SF Operator";
		displayName = "SF Operator";
		attendant = true; 
		canDeactivateMines = true;
        engineer = true;
		linkedItems[] = {"AFTP_helmet03_mca", "AFTP_vest01_mca", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_mca", "AFTP_vest01_mca", Standard_Equipment};
	};
	
	class aftp_02_mca : aftp_01_mca {
		uniformClass = "uni02_mca";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Medic";
		attendant = true; 
		linkedItems[] = {"AFTP_helmet01_mca", "AFTP_vest02_mca", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_mca", "AFTP_vest02_mca", Standard_Equipment};
	};
	
	class aftp_03_mca : aftp_01_mca {
		scope = 1;
		uniformClass = "uni03_mca";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
	};
	
		class aftp_04_mca : aftp_01_mca {
		uniformClass = "uni02_mca";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Engineer";
		canDeactivateMines = true;
        engineer = true;
	};
	
		class aftp_01_aau : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units_aau";
		canCarryBackPack = 1;
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_aau";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_aau";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_aau.paa"};
		weapons[] = {StandardDES_Weapons};
		respawnWeapons[] = {StandardDES_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_01_tl_aau : aftp_01_aau {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"AFTP_helmet02_aau", "AFTP_vest01_aau", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_aau", "AFTP_vest01_aau", Standard_Equipment};
	};
	
	class aftp_01_gr_aau : aftp_01_aau {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {StandardGRDES_Weapons};
		respawnWeapons[] = {StandardGRDES_Weapons};
		magazines[] = {StandardGR_Ammo};
		respawnMagazines[] = {StandardGR_Ammo};
		linkedItems[] = {"AFTP_helmet01_aau", "AFTP_hvest01_aau", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_aau", "AFTP_hvest01_aau", Standard_Equipment};
	};	
	
	class aftp_01_ar_aau : aftp_01_aau {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		weapons[] = {StandardAR_Weapons};
		respawnWeapons[] = {StandardAR_Weapons};
		magazines[] = {StandardAR_Ammo};
		respawnMagazines[] = {StandardAR_Ammo};
		linkedItems[] = {"AFTP_helmet02_aau", "AFTP_hvest02_aau", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_aau", "AFTP_hvest02_aau", Standard_Equipment};
	};
	
	class aftp_sf_aau : aftp_01_aau {
		weapons[] = {SF_Weapons};
		respawnWeapons[] = {SF_Weapons};
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "SF Operator";
		displayName = "SF Operator";
		attendant = true; 
		canDeactivateMines = true;
        engineer = true;
		linkedItems[] = {"AFTP_helmet03_aau", "AFTP_vest01_aau", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_aau", "AFTP_vest01_aau", Standard_Equipment};
	};
	
	class aftp_02_aau : aftp_01_aau {
		uniformClass = "uni02_aau";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Medic";
		attendant = true; 
		linkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest02_aau", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest02_aau", Standard_Equipment};
	};
	
	class aftp_03_aau : aftp_01_aau {
		uniformClass = "uni03_aau";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_aau.paa", "\A3\Characters_F\Common\Data\basicbody_brown_co.paa"};
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Engineer";
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_04_aau : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Diver";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_aau";
		weapons[] = {StandardDES_Weapons};
		respawnWeapons[] = {StandardDES_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet03_aau", "AFTP_vest02_aau", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_aau", "AFTP_vest02_aau", Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_aau";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_aau.paa", "\A3\Characters_F\Common\Data\basicbody_brown_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_05_aau : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Sniper A-TACS AU";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_aau";
		weapons[] = {StandardS_Weapons};
		respawnWeapons[] = {StandardS_Weapons};
		magazines[] = {StandardS_Ammo};
		respawnMagazines[] = {StandardS_Ammo};
		linkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_aau";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_aau.paa", "\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
		attendant = true; 
	};
	
	
class aftp_01_afg : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units_afg";
		canCarryBackPack = 1;
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_afg";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_afg";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_afg.paa"};
		weapons[] = {Standard_Weapons};
		respawnWeapons[] = {Standard_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_01_tl_afg : aftp_01_afg {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"AFTP_helmet02_afg", "AFTP_vest01_afg", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_afg", "AFTP_vest01_afg", Standard_Equipment};
	};
	
	class aftp_01_gr_afg : aftp_01_afg {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {StandardGR_Weapons};
		respawnWeapons[] = {StandardGR_Weapons};
		magazines[] = {StandardGR_Ammo};
		respawnMagazines[] = {StandardGR_Ammo};
		linkedItems[] = {"AFTP_helmet01_afg", "AFTP_hvest01_afg", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_afg", "AFTP_hvest01_afg", Standard_Equipment};
	};	
	
	class aftp_01_ar_afg : aftp_01_afg {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		weapons[] = {StandardAR_Weapons};
		respawnWeapons[] = {StandardAR_Weapons};
		magazines[] = {StandardAR_Ammo};
		respawnMagazines[] = {StandardAR_Ammo};
		linkedItems[] = {"AFTP_helmet02_afg", "AFTP_hvest02_afg", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_afg", "AFTP_hvest02_afg", Standard_Equipment};
	};
	
	class aftp_sf_afg : aftp_01_afg {
		weapons[] = {SF_Weapons};
		respawnWeapons[] = {SF_Weapons};
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "SF Operator";
		displayName = "SF Operator";
		attendant = true; 
		canDeactivateMines = true;
        engineer = true;
		linkedItems[] = {"AFTP_helmet03_afg", "AFTP_vest01_afg", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_afg", "AFTP_vest01_afg", Standard_Equipment};
	};
	
	class aftp_02_afg : aftp_01_afg {
		uniformClass = "uni02_afg";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Medic";
		attendant = true; 
		linkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest02_afg", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest02_afg", Standard_Equipment};
	};
	
	class aftp_03_afg : aftp_01_afg {
		uniformClass = "uni03_afg";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_afg.paa", "\A3\Characters_F\Common\Data\basicbody_green_co.paa"};
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Engineer";
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_04_afg : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Diver";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_afg";
		weapons[] = {Standard_Weapons};
		respawnWeapons[] = {Standard_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet03_afg", "AFTP_vest02_afg", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_afg", "AFTP_vest02_afg", Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_afg";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_afg.paa", "\A3\Characters_F\Common\Data\basicbody_green_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_05_afg : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";

		displayName = "Sniper A-TACS FG Camo";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_afg";
		weapons[] = {StandardS_Weapons};
		respawnWeapons[] = {StandardS_Weapons};
		magazines[] = {StandardS_Ammo};
		respawnMagazines[] = {StandardS_Ammo};
		linkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_afg";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_afg.paa", "\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		attendant = true; 
	};
	
		class aftp_01_ale : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units_ale";
		canCarryBackPack = 1;

		scope = public;
		AuthorMacro
		scopeCurator = 2;
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_ale";
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_ale";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_ale.paa"};
		weapons[] = {Standard_Weapons};
		respawnWeapons[] = {Standard_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet01_ale", "AFTP_vest01_ale",Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_ale", "AFTP_vest01_ale",Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_01_tl_ale : aftp_01_ale {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Team Leader";
		linkedItems[] = {"AFTP_helmet02_ale", "AFTP_vest01_ale", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_ale", "AFTP_vest01_ale", Standard_Equipment};
	};
	
	class aftp_01_gr_ale : aftp_01_ale {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {StandardGR_Weapons};
		respawnWeapons[] = {StandardGR_Weapons};
		magazines[] = {StandardGR_Ammo};
		respawnMagazines[] = {StandardGR_Ammo};
		linkedItems[] = {"AFTP_helmet01_ale", "AFTP_hvest01_ale", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_ale", "AFTP_hvest01_ale", Standard_Equipment};
	};	
	
	class aftp_01_ar_ale : aftp_01_ale {
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Automatic Rifleman";
		weapons[] = {StandardAR_Weapons};
		respawnWeapons[] = {StandardAR_Weapons};
		magazines[] = {StandardAR_Ammo};
		respawnMagazines[] = {StandardAR_Ammo};
		linkedItems[] = {"AFTP_helmet02_ale", "AFTP_hvest02_ale", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet02_ale", "AFTP_hvest02_ale", Standard_Equipment};
	};	
	
	class aftp_sf_ale : aftp_01_ale {
		weapons[] = {SF_Weapons};
		respawnWeapons[] = {SF_Weapons};
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "SF Operator";
		attendant = true; 
		canDeactivateMines = true;
        engineer = true;
		linkedItems[] = {"AFTP_helmet03_ale", "AFTP_vest01_ale", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_ale", "AFTP_vest01_ale", Standard_Equipment};
	};
	
	class aftp_02_ale : aftp_01_ale {
		uniformClass = "uni02_ale";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Medic";
		attendant = true; 
		linkedItems[] = {"AFTP_helmet01_ale", "AFTP_vest02_ale", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet01_ale", "AFTP_vest02_ale", Standard_Equipment};
	};
	
	class aftp_03_ale : aftp_01_ale {
		uniformClass = "uni03_ale";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		displayName = "Engineer";
		canDeactivateMines = true;
        engineer = true; 
	};
	
	class aftp_04_ale : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";
		displayName = "Diver";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units_ale";
		weapons[] = {Standard_Weapons};
		respawnWeapons[] = {Standard_Weapons};
		magazines[] = {Standard_Ammo};
		respawnMagazines[] = {Standard_Ammo};
		linkedItems[] = {"AFTP_helmet03_ale", "AFTP_vest02_ale", Standard_Equipment};
		respawnLinkedItems[] = {"AFTP_helmet03_ale", "AFTP_vest02_ale", Standard_Equipment};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_ale";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_ale.paa", "\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		scope = public;
		AuthorMacro
		scopeCurator = 2;
		canDeactivateMines = true;
        engineer = true; 
	};
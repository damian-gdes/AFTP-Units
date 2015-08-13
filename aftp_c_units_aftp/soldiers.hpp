	class B_Soldier_base_F;
	class b_soldier_survival_F;
	class B_Soldier_sniper_base_F;

class aftp_01_wz93 : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units";
		canCarryBackPack = 1;
		scope = public;
		author = "AFTP Golas & Waffel";
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_wz93";
		displayName = "Operator Pantera Camo";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_wz93";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wz93.paa"};
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		engineer = 1;
		uav = 0;
		canDeactivateMines = true;
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_02_wz93 : aftp_01_wz93 {
		uniformClass = "uni02_wz93";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	};
	
	class aftp_03_wz93 : aftp_01_wz93 {
		uniformClass = "uni03_wz93";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	};
	
	class aftp_04_wz93 : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Operator Pantera Camo with fins";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_wz93";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wz93.paa", "\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
	};
	
	class aftp_05_wz93 : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Sniper Pantera Camo";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_wz93";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wz93.paa", "\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
	};
	
		class aftp_01_wzd93 : aftp_01_wz93 {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units";
		canCarryBackPack = 1;
		scope = public;
		author = "AFTP Golas & Waffel";
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_wz93";
		displayName = "Operator Pantera Desert Camo";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_wzd93";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wzd93.paa"};
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		engineer = 1;
		uav = 0;
		canDeactivateMines = true;
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_02_wzd93 : aftp_01_wzd93 {
		uniformClass = "uni02_wzd93";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	};
	
	class aftp_03_wzd93 : aftp_01_wzd93 {
		uniformClass = "uni03_wzd93";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	};
	
	class aftp_04_wzd93 : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Operator Pantera Desert Camo with fins";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_wzd93";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wzd93.paa", "\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
	};
	
	class aftp_05_wzd93 : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Sniper Pantera Desert Camo";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_wz93", "AFTP_vest01_wz93", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_wzd93";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_wzd93.paa", "\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
	};


	
	
	class aftp_01_mc : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units";
		canCarryBackPack = 1;
		scope = public;
		author = "AFTP Golas & Waffel";
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_mc";
		displayName = "Operator Multicam Camo";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_mc";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mc.paa"};
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		engineer = 1;
		uav = 0;
		canDeactivateMines = true;
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_02_mc : aftp_01_mc {
		uniformClass = "uni02_mc";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	};
	
	class aftp_03_mc : aftp_01_mc {
		uniformClass = "uni03_mc";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	};
	
	class aftp_04_mc : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Operator Multicam Camo with fins";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_mc";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mc.paa", "\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
	};
	
	class aftp_05_mc : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Sniper Multicam Camo";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_mc", "AFTP_vest01_mc", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_mc";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mc.paa", "\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
	};
	
	class aftp_01_mct : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units";
		canCarryBackPack = 1;
		scope = public;
		author = "AFTP Golas & Waffel";
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_mct";
		displayName = "Operator Multicam Tropic Camo";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_mct";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mct.paa"};
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		engineer = 1;
		uav = 0;
		canDeactivateMines = true;
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_02_mct : aftp_01_mct {
		uniformClass = "uni02_mct";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	};
	
	class aftp_03_mct : aftp_01_mct {
		uniformClass = "uni03_mct";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	};
	
	class aftp_04_mct : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Operator Multicam Tropic Camo with fins";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_mct";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mct.paa", "\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
	};
	
	class aftp_05_mct : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Sniper Multicam Tropic Camo";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_mct", "AFTP_vest01_mct", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_mct";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mct.paa", "\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
	};
	
	class aftp_01_mca : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units";
		canCarryBackPack = 1;
		scope = public;
		author = "AFTP Golas & Waffel";
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_mca";
		displayName = "Operator Multicam Alpine Camo";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_mca";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_mca.paa"};
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_mca", "AFTP_vest01_mca", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_mca", "AFTP_vest01_mca", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		engineer = 1;
		uav = 0;
		canDeactivateMines = true;
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_02_mca : aftp_01_mca {
		uniformClass = "uni02_mca";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	};
	
	class aftp_03_mca : aftp_01_mca {
		uniformClass = "uni03_mca";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	};
	
	class aftp_01_aau : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units";
		canCarryBackPack = 1;
		scope = public;
		author = "AFTP Golas & Waffel";
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_aau";
		displayName = "Operator A-TACS AU Camo";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_aau";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_aau.paa"};
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		engineer = 1;
		uav = 0;
		canDeactivateMines = true;
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_02_aau : aftp_01_aau {
		uniformClass = "uni02_aau";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	};
	
	class aftp_03_aau : aftp_01_aau {
		uniformClass = "uni03_aau";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	};
	
	class aftp_04_aau : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Operator A-TACS AU Camo with fins";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_aau";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_aau.paa", "\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
	};
	
	class aftp_05_aau : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Sniper A-TACS AU Camo";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_aau", "AFTP_vest01_aau", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_aau";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_aau.paa", "\A3\Characters_F\Common\Data\ghillie_desert_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
	};
	
	class aftp_01_afg : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units";
		canCarryBackPack = 1;
		scope = public;
		author = "AFTP Golas & Waffel";
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_afg";
		displayName = "Operator A-TACS FG Camo";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_afg";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_afg.paa"};
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		engineer = 1;
		uav = 0;
		canDeactivateMines = true;
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_02_afg : aftp_01_afg {
		uniformClass = "uni02_afg";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	};
	
	class aftp_03_afg : aftp_01_afg {
		uniformClass = "uni03_afg";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	};
	
	class aftp_04_afg : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Operator A-TACS FG Camo with fins";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_afg";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_afg.paa", "\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
	};
	
	class aftp_05_afg : B_Soldier_sniper_base_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Sniper A-TACS FG Camo";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_afg", "AFTP_vest01_afg", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni05_afg";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_afg.paa", "\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"};
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
	};
	
	class aftp_01_ale : B_Soldier_base_F {
		_generalMacro = "B_Soldier_base_F";
		faction = "aftp_units";
		canCarryBackPack = 1;
		scope = public;
		author = "AFTP Golas & Waffel";
		camouflage = 0.9;	// how dificult to spot - bigger - better spotable
		backpack = "aftp_kitbag_ale";
		displayName = "Operator A-TACS LE Camo";
		nakedUniform = "U_BasicBody";
		uniformClass = "uni01_ale";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_ale.paa"};
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_ale", "AFTP_vest01_ale", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_ale", "AFTP_vest01_ale", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		engineer = 1;
		uav = 0;
		canDeactivateMines = true;
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	};
	
	class aftp_02_ale : aftp_01_ale {
		uniformClass = "uni02_ale";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	};
	
	class aftp_03_ale : aftp_01_ale {
		uniformClass = "uni03_ale";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	};
	
	class aftp_04_ale : b_soldier_survival_F {
		_generalMacro = "B_Soldier_F";
		scope = public;
		displayName = "Operator A-TACS LE Camo with fins";
		nakedUniform = "U_BasicBody";
		faction = "aftp_units";
		weapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		respawnWeapons[] = {"Throw", "Put", "Rangefinder", "srifle_EBR_MRCO_pointer_F", "hgun_Pistol_heavy_01_MRD_F"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag"};
		linkedItems[] = {"AFTP_helmet01_ale", "AFTP_vest01_ale", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		respawnLinkedItems[] = {"AFTP_helmet01_ale", "AFTP_vest01_ale", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "FirstAidKit"};
		Items[] = {};
		RespawnItems[] = {};
		uniformClass = "uni04_ale";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\uni_ale.paa", "\A3\Characters_F\Common\Data\basicbody_black_co.paa"};
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
	};
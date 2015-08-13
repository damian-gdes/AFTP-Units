	class aftp_vest01_wz93 : Vest_NoCamo_Base {
		scope = public;
		author = "AFTP Golas & Waffel";
		displayName = "AFTP Vest Pantera 01";
		picture = "\aftp_units\data\ico_vest01_wz93.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_wz93.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			mass = 75;
			armor = 90;
			passThrough = 0.7;
			containerClass = "Supply140";
			hiddenSelections[] = {"camo"};
		};
	};
	
	class aftp_vest02_wz93 : Vest_NoCamo_Base {
		scope = public;
		author = "AFTP Golas & Waffel";
		displayName = "AFTP Vest Pantera 02";
		picture = "\aftp_units\data\ico_vest02_wz93.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_wz93.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			mass = 75;
			armor = 90;
			passThrough = 0.7;
			containerClass = "Supply140";
			hiddenSelections[] = {"camo"};
		};
	};
	
		class aftp_vest01_wzd93 : aftp_vest01_wz93 {
		displayName = "AFTP Vest Pantera Desert 01";
		picture = "\aftp_units\data\ico_vest01_wzd93.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_wzd93.paa"};
	};
	
	class aftp_vest02_wzd93 : aftp_vest02_wz93 {
		displayName = "AFTP Vest Pantera Desert 02";
		picture = "\aftp_units\data\ico_vest02_wzd93.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_wzd93.paa"};
	};
	
	class aftp_vest01_mc : aftp_vest01_wz93 {
		displayName = "AFTP Vest Multicam 01";
		picture = "\aftp_units\data\ico_vest01_mc.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_mc.paa"};
	};
	
	class aftp_vest02_mc : aftp_vest02_wz93 {
		displayName = "AFTP Vest Multicam 02";
		picture = "\aftp_units\data\ico_vest02_mc.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_mc.paa"};
	};	
	
	class aftp_vest01_mca : aftp_vest01_wz93 {
		displayName = "AFTP Vest Multicam Alpine 01";
		picture = "\aftp_units\data\ico_vest01_mca.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_mca.paa"};
	};
	
	class aftp_vest02_mca : aftp_vest02_wz93 {
		displayName = "AFTP Vest Multicam Alpine 02";
		picture = "\aftp_units\data\ico_vest02_mca.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_mca.paa"};
	};	
	
	class aftp_vest01_mct : aftp_vest01_wz93 {
		displayName = "AFTP Vest Multicam Tropic 01";
		picture = "\aftp_units\data\ico_vest01_mct.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_mct.paa"};
	};
	
	class aftp_vest02_mct : aftp_vest02_wz93 {
		displayName = "AFTP Vest Multicam Tropic 02";
		picture = "\aftp_units\data\ico_vest02_mct.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_mct.paa"};
	};	
	
	class aftp_vest01_aau : aftp_vest01_wz93 {
		displayName = "AFTP Vest A-TACS AU 01";
		picture = "\aftp_units\data\ico_vest01_aau.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_aau.paa"};
	};
	
	class aftp_vest02_aau : aftp_vest02_wz93 {
		displayName = "AFTP Vest A-TACS AU 02";
		picture = "\aftp_units\data\ico_vest02_aau.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_aau.paa"};
	};	
	
	class aftp_vest01_afg : aftp_vest01_wz93 {
		displayName = "AFTP Vest A-TACS FG 01";
		picture = "\aftp_units\data\ico_vest01_afg.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_afg.paa"};
	};
	
	class aftp_vest02_afg : aftp_vest02_wz93 {
		displayName = "AFTP Vest A-TACS FG 02";
		picture = "\aftp_units\data\ico_vest02_afg.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_afg.paa"};
	};	
	
	class aftp_vest01_ale : aftp_vest01_wz93 {
		displayName = "AFTP Vest A-TACS LE 01";
		picture = "\aftp_units\data\ico_vest01_ale.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_ale.paa"};
	};
	
	class aftp_vest02_ale : aftp_vest02_wz93 {
		displayName = "AFTP Vest A-TACS LE 02";
		picture = "\aftp_units\data\ico_vest02_ale.paa";
		hiddenSelectionsTextures[] = {"\aftp_units\data\vest_ale.paa"};
	};	
	
	class aftp_hvest01_mc : V_PlateCarrierGL_blk {
		picture = "\aftp_units\data\ico_hvest_mc.paa";
		author = "AFTP Golas & Waffel";
		scope = public;
		displayName = "AFP Carrier GL Rig Mullticam";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_mc.paa"};
		
		class ItemInfo : ItemInfo {
			armor = 100;
			containerClass = "Supply140";
			hiddenSelections[] = {"camo"};
			mass = 120;
			passThrough = 0.7;
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
		};
	};
	
	class aftp_hvest02_mc : V_PlateCarrierSpec_blk {
		picture = "\aftp_units\data\ico_hvest_mc.paa";
		author = "AFTP Golas & Waffel";
		scope = public;
		displayName = "AFP Carrier Special Rig Multicam";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_mc.paa"};
		
		class ItemInfo : ItemInfo {
			armor = 100;
			containerClass = "Supply100";
			hiddenSelections[] = {"camo"};
			mass = 100;
			passThrough = 0.1;
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		};
	};
	
	class aftp_hvest01_mct : aftp_hvest01_mc {
		displayName = "AFP Carrier GL Rig Multicam Tropic";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_mct.paa"};
		picture = "\aftp_units\data\ico_hvest_mct.paa";
	};
	
	class aftp_hvest02_mct : aftp_hvest02_mc {
		displayName = "AFP Carrier Special Rig Multicam Tropic";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_mct.paa"};
		picture = "\aftp_units\data\ico_hvest_mct.paa";
	};
	
	class aftp_hvest01_mca : aftp_hvest01_mc {
		displayName = "AFP Carrier GL Rig Multicam Alpine";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_mca.paa"};
		picture = "\aftp_units\data\ico_hvest_mca.paa";
	};
	
	class aftp_hvest02_mca : aftp_hvest02_mc {
		displayName = "AFP Carrier Special Rig Multicam Alpine";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_mca.paa"};
		picture = "\aftp_units\data\ico_hvest_mca.paa";
	};
	
	class aftp_hvest01_aau : aftp_hvest01_mc {
		displayName = "AFP Carrier GL Rig A-TACS AU";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_aau.paa"};
		picture = "\aftp_units\data\ico_hvest_aau.paa";
	};
	
	class aftp_hvest02_aau : aftp_hvest02_mc {
		displayName = "AFP Carrier Special Rig A-TACS AU";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_aau.paa"};
		picture = "\aftp_units\data\ico_hvest_aau.paa";
	};
	
	class aftp_hvest01_afg : aftp_hvest01_mc {
		displayName = "AFP Carrier GL Rig A-TACS FG";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_afg.paa"};
		picture = "\aftp_units\data\ico_hvest_afg.paa";
	};
	
	class aftp_hvest02_afg : aftp_hvest02_mc {
		displayName = "AFP Carrier Special Rig A-TACS FG";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_afg.paa"};
		picture = "\aftp_units\data\ico_hvest_afg.paa";
	};
	
	class aftp_hvest01_ale : aftp_hvest01_mc {
		displayName = "AFP Carrier GL Rig A-TACS LE";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_ale.paa"};
	};
	
	class aftp_hvest02_ale : aftp_hvest02_mc {
		displayName = "AFP Carrier Special Rig A-TACS LE";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_ale.paa"};
	};
	
	class aftp_hvest01_wz93 : aftp_hvest01_mc {
		displayName = "AFP Carrier GL Rig Pantera wz93";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_wz93.paa"};
		picture = "\aftp_units\data\ico_hvest_wz93.paa";
	};
	
	class aftp_hvest02_wz93 : aftp_hvest02_mc {
		displayName = "AFP Carrier Special Rig Pantera wz93";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_wz93.paa"};
		picture = "\aftp_units\data\ico_hvest_wz93.paa";
	};
	
	class aftp_hvest01_wzd93 : aftp_hvest01_mc {
		displayName = "AFP Carrier GL Rig Pantera Desert wz93";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_wzd93.paa"};
		picture = "\aftp_units\data\ico_hvest_wzd93.paa";
	};
	
	class aftp_hvest02_wzd93 : aftp_hvest02_mc {
		displayName = "AFP Carrier Special Rig Pantera Desert wz93";
		hiddenSelectionsTextures[] = {"\aftp_units\data\heavyvest_wzd93.paa"};
		picture = "\aftp_units\data\ico_hvest_wzd93.paa";
	};
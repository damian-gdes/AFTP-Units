class AFTP_helmet01_wz93 : ItemCore {
		scope = public;
		
		author = "AFTP Golas & Waffel";
		weaponPoolAvailable = 1;
		displayName = "AFTP Helmet Pantera";
		picture = "\aftp_units\data\ico_hp_wz93.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_wz93.paa"};
		
		class ItemInfo : HeadGearItem {
			mass = 50;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3, 1};
			armor = 5;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class AFTP_helmet02_wz93 : ItemCore {
		scope = public;
		
		author = "AFTP Golas & Waffel";
		weaponPoolAvailable = 1;
		displayName = "AFTP Helmet Ballistic Pantera";
		picture = "\aftp_units\data\ico_hb_wz93.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_wz93.paa"};
		
		class ItemInfo : HeadGearItem {
			mass = 50;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3, 1};
			armor = 5;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class AFTP_helmet03_wz93 : ItemCore {
		scope = public;
		
		author = "AFTP Golas & Waffel";
		weaponPoolAvailable = 1;
		displayName = "AFTP Helmet Light Pantera";
		picture = "\aftp_units\data\ico_hl_wz93.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_wz93.paa"};
		
		class ItemInfo : HeadGearItem {
			mass = 50;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3, 1};
			armor = 5;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
	
	class AFTP_helmet01_wzd93 : AFTP_helmet01_wz93 {
		displayName = "AFTP Helmet Pantera Desert";
		picture = "\aftp_units\data\ico_hp_wzd93.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_wzd93.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet02_wzd93 : AFTP_helmet02_wz93 {
		displayName = "AFTP Helmet Ballistic Pantera Desert";
		picture = "\aftp_units\data\ico_hb_wzd93.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_wzd93.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet03_wzd93 : AFTP_helmet03_wz93 {
		displayName = "AFTP Helmet Light Pantera Desert";
		picture = "\aftp_units\data\ico_hl_wzd93.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_wzd93.paa"};
		author = "AFTP Golas & Waffel";
	};

	class AFTP_helmet01_mc : AFTP_helmet01_wz93 {
		displayName = "AFTP Helmet Multicam";
		picture = "\aftp_units\data\ico_hp_mc.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_mc.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet02_mc : AFTP_helmet02_wz93 {
		displayName = "AFTP Helmet Ballistic Multicam";
		picture = "\aftp_units\data\ico_hb_mc.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_mc.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet03_mc : AFTP_helmet03_wz93 {
		displayName = "AFTP Helmet Light Multicam";
		picture = "\aftp_units\data\ico_hl_mc.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_mc.paa"};
		author = "AFTP Golas & Waffel";
	};	
	
	class AFTP_helmet01_mca : AFTP_helmet01_wz93 {
		displayName = "AFTP Helmet Multicam Alpine";
		picture = "\aftp_units\data\ico_hp_mca.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_mca.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet02_mca : AFTP_helmet02_wz93 {
		displayName = "AFTP Helmet Ballistic Multicam Alpine";
		picture = "\aftp_units\data\ico_hb_mca.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_mca.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet03_mca : AFTP_helmet03_wz93 {
		displayName = "AFTP Helmet Light Multicam Alpine";
		picture = "\aftp_units\data\ico_hl_mca.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_mca.paa"};
		author = "AFTP Golas & Waffel";
	};	
	
	class AFTP_helmet01_mct : AFTP_helmet01_wz93 {
		displayName = "AFTP Helmet Multicam Tropic";
		picture = "\aftp_units\data\ico_hp_mct.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_mct.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet02_mct : AFTP_helmet02_wz93 {
		displayName = "AFTP Helmet Ballistic Multicam Tropic";
		picture = "\aftp_units\data\ico_hb_mct.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_mct.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet03_mct : AFTP_helmet03_wz93 {
		displayName = "AFTP Helmet Light Multicam Tropic";
		picture = "\aftp_units\data\ico_hl_mct.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_mct.paa"};
		author = "AFTP Golas & Waffel";
	};	

		class AFTP_helmet01_aau : AFTP_helmet01_wz93 {
		displayName = "AFTP Helmet A-TACS AU";
		picture = "\aftp_units\data\ico_hp_aau.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_aau.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet02_aau : AFTP_helmet02_wz93 {
		displayName = "AFTP Helmet Ballistic A-TACS AU";
		picture = "\aftp_units\data\ico_hb_aau.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_aau.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet03_aau : AFTP_helmet03_wz93 {
		displayName = "AFTP Helmet Light A-TACS AU";
		picture = "\aftp_units\data\ico_hl_aau.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_aau.paa"};
		author = "AFTP Golas & Waffel";
	};	
	
		class AFTP_helmet01_afg : AFTP_helmet01_wz93 {
		displayName = "AFTP Helmet A-TACS FG";
		picture = "\aftp_units\data\ico_hp_afg.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_afg.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet02_afg : AFTP_helmet02_wz93 {
		displayName = "AFTP Helmet Ballistic A-TACS FG";
		picture = "\aftp_units\data\ico_hb_afg.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_afg.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet03_afg : AFTP_helmet03_wz93 {
		displayName = "AFTP Helmet Light A-TACS FG";
		picture = "\aftp_units\data\ico_hl_afg.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_afg.paa"};
		author = "AFTP Golas & Waffel";
	};	
	
		class AFTP_helmet01_ale : AFTP_helmet01_wz93 {
		displayName = "AFTP Helmet A-TACS LE";
		picture = "\aftp_units\data\ico_hp_ale.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_ale.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet02_ale : AFTP_helmet02_wz93 {
		displayName = "AFTP Helmet Ballistic A-TACS LE";
		picture = "\aftp_units\data\ico_hb_ale.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_ale.paa"};
		author = "AFTP Golas & Waffel";
	};
	
	class AFTP_helmet03_ale : AFTP_helmet03_wz93 {
		displayName = "AFTP Helmet Light A-TACS LE";
		picture = "\aftp_units\data\ico_hl_ale.paa";
		hiddenSelectionsTextures[] = {"aftp_units\data\helmet_ale.paa"};
		author = "AFTP Golas & Waffel";
	};	
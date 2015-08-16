	class B_Carryall_Base;
	class B_Kitbag_Base;
	class B_AssaultPack_Base ;
	
	class AFTP_carryall_wz93 : B_Carryall_Base {
		scope = public;

		author = "AFTP Golas & Waffel";
		displayName = "AFTP Backpack Carryall Pantera";
		picture = "\AFTP_units\data\ico_carryall_wz93.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\carryall_wz93.paa"};
	};
	
	class AFTP_caryall_wzd93 : AFTP_carryall_wz93 {
		displayName = "AFTP Backpack Carryall Pantera Desert";
		picture = "\AFTP_units\data\ico_carryall_wzd93.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\carryall_wzd93.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
	class AFTP_caryall_mc : AFTP_carryall_wz93 {
		displayName = "AFTP Backpack Carryall Multicam";
		picture = "\AFTP_units\data\ico_carryall_mc.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\carryall_mc.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
	class AFTP_caryall_mct : AFTP_carryall_wz93 {
		displayName = "AFTP Backpack Carryall Multicam Tropic";
		picture = "\AFTP_units\data\ico_carryall_mct.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\carryall_mct.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};

		class AFTP_caryall_mca : AFTP_carryall_wz93 {
		displayName = "AFTP Backpack Carryall Multicam Alpine";
		picture = "\AFTP_units\data\ico_carryall_mca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\carryall_mca.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
	class AFTP_caryall_aau : AFTP_carryall_wz93 {
		displayName = "AFTP Backpack Carryall A-TACS AU";
		picture = "\AFTP_units\data\ico_carryall_aau.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\carryall_aau.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
	class AFTP_caryall_afg : AFTP_carryall_wz93 {
		displayName = "AFTP Backpack Carryall A-TACS FG";
		picture = "\AFTP_units\data\ico_carryall_afg.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\carryall_afg.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	/*
	class AFTP_caryall_ale : AFTP_carryall_wz93 {
		displayName = "AFTP Backpack Carryall A-TACS LE";
		picture = "\AFTP_units\data\ico_carryall_ale.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\carryall_ale.paa"};
		author = "AFTP Golas & Waffel";
	};
	*/
	
		class AFTP_kitbag_wz93 : B_Kitbag_Base {
		scope = public;

		author = "AFTP Golas & Waffel";
		displayName = "AFTP Kitbag Pantera";
		picture = "\AFTP_units\data\ico_kitbag_wz93.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\kitbag_wz93.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};

		class AFTP_kitbag_wzd93 : AFTP_kitbag_wz93 {
		displayName = "AFTP Kitbag Pantera Desert";
		picture = "\AFTP_units\data\ico_kitbag_wzd93.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\kitbag_wzd93.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};

		class AFTP_kitbag_aau : AFTP_kitbag_wz93 {
		displayName = "AFTP Kitbag A-TACS AU";
		picture = "\AFTP_units\data\ico_kitbag_aau.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\kitbag_aau.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
		class AFTP_kitbag_afg : AFTP_kitbag_wz93 {
		displayName = "AFTP Kitbag A-TACS FG";
		picture = "\AFTP_units\data\ico_kitbag_afg.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\kitbag_afg.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
		class AFTP_kitbag_ale : AFTP_kitbag_wz93 {
		displayName = "AFTP Kitbag A-TACS LE";
		picture = "\AFTP_units\data\ico_kitbag_ale.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\kitbag_ale.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
		class AFTP_kitbag_mc : AFTP_kitbag_wz93 {
		displayName = "AFTP Kitbag Multicam";
		picture = "\AFTP_units\data\ico_kitbag_mc.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\kitbag_mc.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};

		class AFTP_kitbag_mca : AFTP_kitbag_wz93 {
		displayName = "AFTP Kitbag Multicam Alpine";
		picture = "\AFTP_units\data\ico_kitbag_mca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\kitbag_mca.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
		class AFTP_kitbag_mct : AFTP_kitbag_wz93 {
		displayName = "AFTP Kitbag Multicam Tropic";
		picture = "\AFTP_units\data\ico_kitbag_mct.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\kitbag_mct.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};	

	class AFTP_assaultpack_wz93 : B_AssaultPack_Base {
		scope = public;

		author = "AFTP Golas & Waffel";
		displayName = "AFTP Assault Pack Pantera";
		picture = "\AFTP_units\data\ico_assaultpack_wz93.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\assaultpack_wz93.paa"};
	};

		class AFTP_assaultpack_wzd93 : AFTP_assaultpack_wz93 {
		displayName = "AFTP Assault Pack Pantera Desert";
		picture = "\AFTP_units\data\ico_assaultpack_wzd93.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\assaultpack_wzd93.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
		class AFTP_assaultpack_mc : AFTP_assaultpack_wz93 {
		displayName = "AFTP Assault Pack Multicam";
		picture = "\AFTP_units\data\ico_assaultpack_mc.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\assaultpack_mc.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};

		class AFTP_assaultpack_mca : AFTP_assaultpack_wz93 {
		displayName = "AFTP Assault Pack Multicam Alpine";
		picture = "\AFTP_units\data\ico_assaultpack_mca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\assaultpack_mca.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
		class AFTP_assaultpack_mct : AFTP_assaultpack_wz93 {
		displayName = "AFTP Assault Pack Multicam Tropic";
		picture = "\AFTP_units\data\ico_assaultpack_mct.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\assaultpack_mct.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
		class AFTP_assaultpack_aau : AFTP_assaultpack_wz93 {
		displayName = "AFTP Assault Pack A-TACS AU";
		picture = "\AFTP_units\data\ico_assaultpack_aau.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\assaultpack_aau.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};

		class AFTP_assaultpack_afg : AFTP_assaultpack_wz93 {
		displayName = "AFTP Assault Pack A-TACS FG";
		picture = "\AFTP_units\data\ico_assaultpack_afg.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\assaultpack_afg.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	
	/*
		class AFTP_assaultpack_ale : AFTP_assaultpack_wz93 {
		displayName = "AFTP Assault Pack A-TACS LE";
		picture = "\AFTP_units\data\ico_assaultpack_ale.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AFTP_units\data\assaultpack_ale.paa"};
		author = "AFTP Golas & Waffel";
		scope = public;

	};
	*/
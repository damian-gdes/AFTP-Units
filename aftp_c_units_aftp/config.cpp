#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

class CfgPatches {
	class aftp_c_units_aftp {
		version = 1;
		author = "AFTP Golas & Waffel";
		units[] = {"aftp_01_wz93", "aftp_01_tl_wz93", "aftp_01_gr_wz93", "aftp_01_ar_wz93", "aftp_sf_wz93", "aftp_02_wz93", "aftp_03_wz93", "aftp_04_wz93", "aftp_05_wz93", "aftp_01_wzd93", "aftp_01_tl_wzd93", "aftp_01_gr_wzd93", "aftp_01_ar_wzd93", "aftp_sf_wzd93", "aftp_02_wzd93", "aftp_03_wzd93", "aftp_04_wzd93", "aftp_05_wzd93", "aftp_01_mc", "aftp_01_tl_mc", "aftp_01_gr_mc", "aftp_01_ar_mc", "aftp_sf_mc", "aftp_02_mc", "aftp_03_mc", "aftp_04_mc", "aftp_05_mc", , "aftp_01_mct", "aftp_01_tl_mct", "aftp_01_gr_mct", "aftp_01_ar_mct", "aftp_sf_mct", "aftp_02_mct", "aftp_03_mct", "aftp_04_mct", "aftp_05_mct", "aftp_01_mca", "aftp_01_tl_mca", "aftp_01_gr_mca", "aftp_01_ar_mca", "aftp_sf_mca", "aftp_02_mca", "aftp_03_mca", "aftp_04_mca", "aftp_01_aau", "aftp_01_tl_aau", "aftp_01_gr_aau", "aftp_01_ar_aau", "aftp_sf_aau", "aftp_02_aau", "aftp_03_aau", "aftp_04_aau", "aftp_05_aau", "aftp_01_afg", "aftp_01_tl_afg", "aftp_01_gr_afg", "aftp_01_ar_afg", "aftp_sf_afg", "aftp_02_afg", "aftp_03_afg", "aftp_04_afg", "aftp_05_afg", "aftp_01_ale", "aftp_01_tl_ale", "aftp_01_gr_ale", "aftp_01_ar_ale", "aftp_sf_ale", "aftp_02_ale", "aftp_03_ale", "aftp_04_ale"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR", "A3_Characters_F_Common", "A3_Characters_F_Heads", "A3_Modules_F", A3_UI_F, "A3_Structures_F_Items_Electronics", "aftp_units"};
	};
};

class UniformSlotInfo {
	slotType = 0;
	linkProxy = "-";
};

class cfgFactionClasses {
	class aftp_units_wz93 {
		displayName = "AFTP Units Pantera";
		icon = "\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority = 1;
		side = TWest;
	};
	
	class aftp_units_wzd93 {
		displayName = "AFTP Units Pantera Desert";
		icon = "\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority = 1;
		side = TWest;
	};
	
	class aftp_units_mc {
		displayName = "AFTP Units Multicam";
		icon = "\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority = 1;
		side = TWest;
	};
	
	class aftp_units_mct {
		displayName = "AFTP Units Multicam Tropic";
		icon = "\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority = 1;
		side = TWest;
	};
	
	class aftp_units_mca {
		displayName = "AFTP Units Multicam Alpine";
		icon = "\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority = 1;
		side = TWest;
	};
	
	class aftp_units_aau {
		displayName = "AFTP Units A-TACS AU";
		icon = "\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority = 1;
		side = TWest;
	};
	
	class aftp_units_afg {
		displayName = "AFTP Units A-TACS FG";
		icon = "\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority = 1;
		side = TWest;
	};
	
	class aftp_units_ale {
		displayName = "AFTP Units A-TACS LE";
		icon = "\aftp_units\cfgfactionclasses_pl_ca.paa";
		priority = 1;
		side = TWest;
	};
};

class CfgVehicleClasses {
	class aftp_units {
		displayName = "AFTP Units";
	};
};

class CfgVehicles {
	
	#include "soldiers.hpp"
	#include "backpacks.hpp"
	
};

#include "groups.hpp"

class cfgWeapons {
	
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
	
	#include "booniehats.hpp"
	#include "patrolcaps.hpp"
	#include "helmets.hpp"
	#include "vests.hpp"
	#include "uniforms.hpp"
	
};

class cfgMods {
	author = "AFTP Golas & Waffel";
	requiredAddons[] = {"A3_Characters_F_BLUFOR", "A3_Characters_F_Common", "A3_Characters_F_Heads", "A3_Modules_F", A3_UI_F, "A3_Structures_F_Items_Electronics", "aftp_units"};
};
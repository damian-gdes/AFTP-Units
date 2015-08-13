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
		units[] = {};
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
	class aftp_units {
		displayName = "AFTP Units";
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
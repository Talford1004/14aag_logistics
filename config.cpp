class DefaultEventhandlers;
class CfgPatches
{
	class 14aag_boxes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"14aag_Main"
		};
	};
};
class cfgVehicles
{
	class Box_NATO_Ammo_F;
	class Box_NATO_Wps_F;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_Grenades_F;
	class Box_NATO_WpsLaunch_F;
	class Box_NATO_WpsSpecial_F;
	class Box_NATO_Support_F;
	class B_supplyCrate_F;
	class B_CargoNet_01_ammo_F;
	class Land_Cargo20_military_green_F;
	class Land_MetalBarrel_F;
	class CargoNet_01_barrels_F;
	class StorageBladder_01_fuel_forest_F;
	class StorageBladder_01_fuel_sand_F;
					
	class HQ_Box_AmmoBase: Box_NATO_Ammo_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\HQAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V11_Box_AmmoBase: Box_NATO_Ammo_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V11AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V12_Box_AmmoBase: Box_NATO_Ammo_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V12AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V13_Box_AmmoBase: Box_NATO_Ammo_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V13AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class LK_Box_AmmoBase: Box_NATO_Ammo_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\LKAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class SR_Box_AmmoBase: Box_NATO_Ammo_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\SRAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class HQ_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\HQAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V11_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V11AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V12_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V12AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V13_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V13AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class LK_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\LKAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class SR_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\SRAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class HQ_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\HQAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V11_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V11AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V12_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V12AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V13_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V13AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class LK_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\LKAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class SR_Box_WpsBase: Box_NATO_Wps_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\SRAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class HQ_Box_AmmoOrdBase: Box_NATO_AmmoOrd_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\HQAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V11_Box_AmmoOrdBase: Box_NATO_AmmoOrd_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V11AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V12_Box_AmmoOrdBase: Box_NATO_AmmoOrd_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V12AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V13_Box_AmmoOrdBase: Box_NATO_AmmoOrd_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V13AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class LK_Box_AmmoOrdBase: Box_NATO_AmmoOrd_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\LKAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class SR_Box_AmmoOrdBase: Box_NATO_AmmoOrd_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\SRAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class HQ_Box_GrenadesBase: Box_NATO_Grenades_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\HQAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V11_Box_GrenadesBase: Box_NATO_Grenades_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V11AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V12_Box_GrenadesBase: Box_NATO_Grenades_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V12AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V13_Box_GrenadesBase: Box_NATO_Grenades_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V13AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class LK_Box_GrenadesBase: Box_NATO_Grenades_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\LKAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class SR_Box_GrenadesBase: Box_NATO_Grenades_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\SRAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class HQ_Box_LaunchBase: Box_NATO_WpsLaunch_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\HQAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V11_Box_LaunchBase: Box_NATO_WpsLaunch_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V11AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V12_Box_LaunchBase: Box_NATO_WpsLaunch_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V12AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V13_Box_LaunchBase: Box_NATO_WpsLaunch_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V13AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class LK_Box_LaunchBase: Box_NATO_WpsLaunch_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\LKAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class SR_Box_LaunchBase: Box_NATO_WpsLaunch_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\SRAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};

	class HQ_Box_SpecialBase: Box_NATO_WpsSpecial_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\HQAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V11_Box_SpecialBase: Box_NATO_WpsSpecial_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V11AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V12_Box_SpecialBase: Box_NATO_WpsSpecial_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V12AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V13_Box_SpecialBase: Box_NATO_WpsSpecial_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V13AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class LK_Box_SpecialBase: Box_NATO_WpsSpecial_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\LKAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class SR_Box_SpecialBase: Box_NATO_WpsSpecial_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\SRAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class HQ_Box_SupportBase: Box_NATO_Support_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\HQAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V11_Box_SupportBase: Box_NATO_Support_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V11AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V12_Box_SupportBase: Box_NATO_Support_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V12AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class V13_Box_SupportBase: Box_NATO_Support_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\V13AmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class LK_Box_SupportBase: Box_NATO_Support_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\LKAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
	
	class SR_Box_SupportBase: Box_NATO_Support_F
	{
		author="Halford";
		mapSize=1.47;
		scope=0;
		ace_cargo_canLoad=1;
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Ammunition";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Ammuniton";
		hiddenSelections[]=
		{
			"Camo_14Signs",
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"14aag_logistics\ammoboxes\data\SRAmmoBox_signs_CA.paa",
			"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
		};
	};
		
	class 14aag_Container_Base: Land_Cargo20_military_green_F
	{
		mapSize=1.8099999;
		author="Halford";
		scope=1;
		displayName="14aag_Container_Base";
		icon="iconCrate";
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Supplies";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Supplies";
		ace_cargo_space=24;
		ace_cargo_size=7;
		ace_cargo_hasCargo=1;
	};
	class 14aag_Barrel_Base: Land_MetalBarrel_F
	{
		mapSize=1.8099999;
		author="Halford";
		scope=1;
		displayName="14aag_Barrel_Base";
		icon="iconCrate";
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Supplies";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Supplies";
		ace_refuel_fuelCargo=159;
		ace_refuel_hooks[]=
		{
			{0.38,-3.1700001,-0.69999999},
			{-0.41,-3.1700001,-0.69999999}
		};
		ace_cargo_size=1;
		ace_cargo_canLoad=1;
	};
	class 14aag_BarrelCrate_Base: CargoNet_01_barrels_F
	{
		mapSize=1.8099999;
		author="Halford";
		scope=1;
		displayName="14aag_BarrelCrate_Base";
		icon="iconCrate";
		faction="14aag_FACTION";
		vehicleclass="My_Subgroup_Supplies";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Crate_Supplies";
		ace_cargo_space=4;
		ace_cargo_size=3;
		ace_cargo_hasCargo=1;
	};
	class 14aag_StorageBladder_W_Base: StorageBladder_01_fuel_forest_F
	{
		mapSize=1.8099999;
		author="Halford";
		scope=1;
		displayName="14aag_StorageBladder_W_Base";
		icon="iconCrate";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Object_fob";
		ace_refuel_fuelCargo=760000;
		ace_refuel_hooks[]=
		{
			{0.38,-3.1700001,-0.69999999},
			{-0.41,-3.1700001,-0.69999999}
		};
		ace_cargo_size=7;
		ace_cargo_canLoad=1;
	};
	class 14aag_StorageBladder_D_Base: StorageBladder_01_fuel_sand_F
	{
		mapSize=1.8099999;
		author="Halford";
		scope=1;
		displayName="14aag_StorageBladder_D_Base";
		icon="iconCrate";
		editorCategory="14_aag_Static_Eden_Category";
		editorSubcategory="14_aag_Eden_Subcategory_Object_fob";
		ace_refuel_fuelCargo=760000;
		ace_refuel_hooks[]=
		{
			{0.38,-3.1700001,-0.69999999},
			{-0.41,-3.1700001,-0.69999999}
		};
		ace_cargo_size=7;
		ace_cargo_canLoad=1;
	};
	
	class HQ_Box_Wps: HQ_Box_WpsBase
	{
		author="Halford";
		mapSize=1.8099999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.189;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Wps_F.jpg";
		scope=2;
		displayName="Viking HQ Weapons Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	
	class V11_Box_Wps: V11_Box_WpsBase
	{
		author="Halford";
		mapSize=1.8099999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.189;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Wps_F.jpg";
		scope=2;
		displayName="Viking 11 Weapons Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	
	class V12_Box_Wps: V12_Box_WpsBase
	{
		author="Halford";
		mapSize=1.8099999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.189;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Wps_F.jpg";
		scope=2;
		displayName="Viking 12 Weapons Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	
	class V13_Box_Wps: V13_Box_WpsBase
	{
		author="Halford";
		mapSize=1.8099999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.189;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Wps_F.jpg";
		scope=2;
		displayName="Viking 13 Weapons Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	
	class LK_Box_Wps: LK_Box_WpsBase
	{
		author="Halford";
		mapSize=1.8099999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.189;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Wps_F.jpg";
		scope=2;
		displayName="Loki Weapons Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	
	class SR_Box_Wps: SR_Box_WpsBase
	{
		author="Halford";
		mapSize=1.8099999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.189;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Wps_F.jpg";
		scope=2;
		displayName="SOAR Weapons Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon="iconCrateWpns";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	
	class HQ_Box_WpsSpecial: HQ_Box_SpecialBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.18700001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
		scope=2;
		displayName="Viking HQ Special Purpose Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon="iconCrateLarge";
		maximumLoad=5000;
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
	};
	
	class V11_Box_WpsSpecial: V11_Box_SpecialBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.18700001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
		scope=2;
		displayName="Viking 11 Special Purpose Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon="iconCrateLarge";
		maximumLoad=5000;
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
	};
	
	class V12_Box_WpsSpecial: V12_Box_SpecialBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.18700001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
		scope=2;
		displayName="Viking 12 Special Purpose Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon="iconCrateLarge";
		maximumLoad=5000;
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
	};
	
	class V13_Box_WpsSpecial: V13_Box_SpecialBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.18700001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
		scope=2;
		displayName="Viking 13 Special Purpose Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon="iconCrateLarge";
		maximumLoad=5000;
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
	};
	
	class LK_Box_WpsSpecial: LK_Box_SpecialBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.18700001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
		scope=2;
		displayName="Loki Special Purpose Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon="iconCrateLarge";
		maximumLoad=5000;
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
	};
	
	class SR_Box_WpsSpecial: SR_Box_SpecialBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.18700001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
		scope=2;
		displayName="SOAR Special Purpose Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon="iconCrateLarge";
		maximumLoad=5000;
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
	};

	class HQ_Box_Ammo: HQ_Box_AmmoBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		scope=2;
		displayName="Viking HQ Ammo Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	
	class V11_Box_Ammo: V11_Box_AmmoBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		scope=2;
		displayName="Viking 11 Ammo Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	
	class V12_Box_Ammo: V12_Box_AmmoBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		scope=2;
		displayName="Viking 12 Ammo Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	
	class V13_Box_Ammo: V13_Box_AmmoBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		scope=2;
		displayName="Viking 13 Ammo Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	
	class LK_Box_Ammo: LK_Box_AmmoBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		scope=2;
		displayName="Loki Ammo Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	
	class SR_Box_Ammo: SR_Box_AmmoBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					0
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Ammo_F.jpg";
		scope=2;
		displayName="SOAR Ammo Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateAmmo";
		maximumLoad=1000;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class AmmoOrd_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Grenades_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class Support_source
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
		};
	};
	
	class HQ_Box_AmmoOrd: HQ_Box_AmmoOrdBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					0
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoOrd_F.jpg";
		scope=2;
		displayName="Viking HQ Explosives Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateOrd";
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{			
		};
	};
	
	class V11_Box_AmmoOrd: V11_Box_AmmoOrdBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					0
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoOrd_F.jpg";
		scope=2;
		displayName="Viking 11 Explosives Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateOrd";
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{			
		};
	};
	
	class V12_Box_AmmoOrd: V12_Box_AmmoOrdBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					0
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoOrd_F.jpg";
		scope=2;
		displayName="Viking 12 Explosives Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateOrd";
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{			
		};
	};
	
	class V13_Box_AmmoOrd: V13_Box_AmmoOrdBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					0
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoOrd_F.jpg";
		scope=2;
		displayName="Viking 13 Explosives Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateOrd";
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{			
		};
	};
	
	class LK_Box_AmmoOrd: LK_Box_AmmoOrdBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					0
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoOrd_F.jpg";
		scope=2;
		displayName="Loki Explosives Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateOrd";
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{			
		};
	};
	
	class SR_Box_AmmoOrd: SR_Box_AmmoOrdBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					0
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoOrd_F.jpg";
		scope=2;
		displayName="SOAR Explosives Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateOrd";
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{			
		};
	};
	
	class HQ_Box_Grenades: HQ_Box_GrenadesBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					0
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
		scope=2;
		displayName="Viking HQ Grenade Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateGrenades";
		maximumLoad=500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	
	class V11_Box_Grenades: V11_Box_GrenadesBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					0
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
		scope=2;
		displayName="Viking 11 Grenade Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateGrenades";
		maximumLoad=500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	
	class V12_Box_Grenades: V12_Box_GrenadesBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					0
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
		scope=2;
		displayName="Viking 12 Grenade Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateGrenades";
		maximumLoad=500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	
	class V13_Box_Grenades: V13_Box_GrenadesBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					0
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
		scope=2;
		displayName="Viking 13 Grenade Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateGrenades";
		maximumLoad=500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	
	class LK_Box_Grenades: LK_Box_GrenadesBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					0
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
		scope=2;
		displayName="Loki Grenade Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateGrenades";
		maximumLoad=500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	
	class SR_Box_Grenades: SR_Box_GrenadesBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					0
				},
				
				{
					"support_hide",
					1
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
		scope=2;
		displayName="SOAR Grenade Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateGrenades";
		maximumLoad=500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	
	class HQ_Box_Support: HQ_Box_SupportBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Support_F.jpg";
		scope=2;
		displayName="Viking HQ Support Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateSupp";
		maximumLoad=1500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{			
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	
	class V11_Box_Support: V11_Box_SupportBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Support_F.jpg";
		scope=2;
		displayName="Viking 11 Support Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateSupp";
		maximumLoad=1500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{			
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	
	class V12_Box_Support: V12_Box_SupportBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Support_F.jpg";
		scope=2;
		displayName="Viking 12 Support Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateSupp";
		maximumLoad=1500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{			
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	
	class V13_Box_Support: V13_Box_SupportBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Support_F.jpg";
		scope=2;
		displayName="Viking 13 Support Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateSupp";
		maximumLoad=1500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{			
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	
	class LK_Box_Support: LK_Box_SupportBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Support_F.jpg";
		scope=2;
		displayName="Loki Support Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateSupp";
		maximumLoad=1500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{			
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	
	class SR_Box_Support: SR_Box_SupportBase
	{
		author="Halford";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"ammo_hide",
					1
				},
				
				{
					"ammoord_hide",
					1
				},
				
				{
					"grenades_hide",
					1
				},
				
				{
					"support_hide",
					0
				}
			};
			hide[]={};
			verticalOffset=0.28400001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Support_F.jpg";
		scope=2;
		displayName="SOAR Support Box";
		model="\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon="iconCrateSupp";
		maximumLoad=1500;
		ace_cargo_size=1;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{			
		};
		class AnimationSources
		{
			class Ammo_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class AmmoOrd_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Grenades_source
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Support_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
/	
	class HQ_Box_WpsLaunch: HQ_Box_LaunchBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.15000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
		scope=2;
		displayName="Viking HQ Launcher Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
		icon="iconCrateLong";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{			
		};
	};
	
	class V11_Box_WpsLaunch: V11_Box_LaunchBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.15000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
		scope=2;
		displayName="Viking 11 Launcher Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
		icon="iconCrateLong";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{			
		};
	};
	
	class V12_Box_WpsLaunch: V12_Box_LaunchBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.15000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
		scope=2;
		displayName="Viking 12 Launcher Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
		icon="iconCrateLong";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{			
		};
	};
	
	class V13_Box_WpsLaunch: V13_Box_LaunchBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.15000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
		scope=2;
		displayName="Viking 13 Launcher Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
		icon="iconCrateLong";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{			
		};
	};
	
	class LK_Box_WpsLaunch: LK_Box_LaunchBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.15000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
		scope=2;
		displayName="Loki Launcher Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
		icon="iconCrateLong";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{			
		};
	};
	
	class SR_Box_WpsLaunch: SR_Box_LaunchBase
	{
		author="Halford";
		mapSize=2.3399999;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.15000001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
		scope=2;
		displayName="SOAR Launcher Box";
		model="\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
		icon="iconCrateLong";
		ace_cargo_size=2;
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{			
		};
	};
	
	class HQ_supplyCrate: B_supplyCrate_F
	{
		author="Halford";
		mapSize=1.58;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.89200002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_supplyCrate_F.jpg";
		scope=2;
		displayName="Viking Supply Crate";
		model="\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad=5000;
		ace_cargo_canLoad=1;
		ace_cargo_size=5
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{			
		};
		class TransportBackpacks
		{			
		};
	};
	
	class HQ_CargoNet: B_CargoNet_01_ammo_F
	{
		author="Halford";
		mapSize=1.58;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.89200002;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_CargoNet_01_ammo_F.jpg";
		scope=2;
		displayName="Viking Cargo Crate";
		model="\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
		ace_cargo_canLoad=1;
		ace_cargo_size=6
		class TransportMagazines
		{			
		};
		class TransportWeapons
		{			
		};
		class TransportItems
		{			
		};
		class TransportBackpacks
		{			
		};
	};
		
	class 14aag_Container_Box: 14aag_Container_Base
	{
		author="Halford";
		scope=2;
		displayName="20ft container";
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
		};
	};
	class 14aag_Barrel_Box: Land_MetalBarrel_F
	{
		mapSize=1.8099999;
		author="Halford";
		scope=2;
		displayName="159lt Fuel barrel";
		icon="iconCrate";
	};
	class 14aag_BarrelCrate_Box: CargoNet_01_barrels_F
	{
		mapSize=1.8099999;
		author="Halford";
		scope=2;
		displayName="Fuel Barrel pallet";
		icon="iconCrate";
	};
	class 14aag_StorageBladder_W_Box: StorageBladder_01_fuel_forest_F
	{
		mapSize=1.8099999;
		author="Halford";
		scope=2;
		displayName="Woodland Fuel Bladder";
		icon="iconCrate";
	};
	class 14aag_StorageBladder_D_Box: StorageBladder_01_fuel_sand_F
	{
		mapSize=1.8099999;
		author="Halford";
		scope=2;
		displayName="Desert Fuel Bladder";
		icon="iconCrate";
	};
};
class cfgMods
{
	author="";
	timepacked="";
};

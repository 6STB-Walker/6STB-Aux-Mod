class cfgPatches
{
  class 6STB_6th_Shock_Trooper_Battalion
  {
    units[]={"6STB_109th_ArmorCrew","6STB_109th_Pilot","6STB_109th_AirCrew","6STB_109th_AirCrew_V","6STB_109th_AT_Specialist","6STB_109th_Autorifleman","6STB_109th_Breacher","6STB_109th_Marksman","6STB_109th_Medic","6STB_109th_RTO","6th_Gunfighter_Warlock","6th_UH144","6th_AV15","6th_Pelican_M","6th_Pelican_W","F188_Warlock","C380_Stormwind","C380_Stormwind_C","6th_M12_LRV","6th_Oryx","6th_APC77","6th_APC77_M","6th_IFV77","6th_L53_A","6th_L53_W"};
    weapons[]={"6STB_OPTRE_M7","6STB_OPTRE_M6G_SF_OPTRE_M6G_FlashlightOPTRE_M6G_Scope"};
    requiredVersion=0.1;
    requiredAddons[]={"OPTRE_Weapons_Items","ace_hearing","A3_Weapons_F","OPTRE_Weapons_MG","OPTRE_Weapons_Pistol","OPTRE_UNSC_Units_Army","A3_Characters_F","ace_medical_treatment"};
  };
  class House_Madrigal
  {
	units[]={"HM_Autorifleman","HM_AT_Specialist","HM_Breacher","HM_Marksman","HM_Medic","HM_Rifleman","HM_RTO"};
	weapons[]={"6STB_OPTRE_M7","6STB_OPTRE_M6G_SF_OPTRE_M6G_FlashlightOPTRE_M6G_Scope"};
	requiredVersion=0.1;
    requiredAddons[]={"OPTRE_Weapons_Items","ace_hearing","A3_Weapons_F","OPTRE_Weapons_MG","OPTRE_Weapons_Pistol","OPTRE_UNSC_Units_Army","A3_Characters_F","ace_medical_treatment"};
  };
};

class cfgFactionClasses
{
  class 6STB_6th_Shock_Trooper_Battalion
  {
    icon="";
    displayName = "6th Shock Trooper Battalion";
    side=1;
    priority=1;
  };
  class House_Madrigal
  {
    icon="";
    displayName = "Madrigalian Royal Armed Forces";
    side=2;
    priority=2;
  };
};

class cfgEditorCategories
{
	class 6th_Shock_Trooper_Battalion
	{
		displayName = "6th Shock Trooper Battalion";
	};
	class HM_Royal
	{
    displayName = "Madrigalian Royal Armed Forces";
	};
};

class cfgEditorSubcategories
{
	class 6STB_109th_M
	{
		displayName = "109th Infantry Regiment";
	};
	class 6STB_INF
	{
		displayName = "Infantry";
	};
	class 6STB_Mechanized
	{
		displayName = "Mechanized";
	};
	class 6STB_Rotary
	{
		displayName = "Rotary";
	};
	class 6STB_FW
	{
		displayName = "Fixed Wing";
	};
	class HM_RA
	{
		displayName= "Royal Army";
	};
	class HM_RAF
	{
		displayName= "Royal Air Force";
	};
	class HM_RM
	{
		displayName= "Royal Marines";
	};
	class HM_RN
	{
		displayName= "Royal Navy";
	};	
};

class cfgWeapons
{
  class 6STB_MA5B;
  class 6STB_MA45ATAC;
  class 6STB_MA37K;
  class 6STB_M7;
  class 6STB_M73;
  class 6STB_M6C;
  class 6STB_M392;
};

class cfgVehicles
{	
	class OPTRE_UNSC_Marine_Pilot;
	class OPTRE_UNSC_Army_Soldier_Crewman_WDL;
	class VES_Rifleman_MA5B_URB;
	
  class 6STB_109th_ArmorCrew: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Armored Crewman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    respawnMagazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar","VES_CH252_URB_Heavy","VES_M52A_URB_Vest_B","VES_NVG_Collar","Marine_Backpack","VES_HUD_Balaclava_G_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar","VES_CH252_URB_Heavy","VES_M52A_URB_Vest_B","VES_NVG_Collar","VES_HUD_Balaclava_G_Black"};
    backpack="";
  };
  class 6STB_109th_Pilot: OPTRE_UNSC_Marine_Pilot
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Aviator";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    respawnMagazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL","VES_CH252_URB_Vacuum_Gold","VES_M52A_URB_Vest_B","Marine_Backpack","OPTRE_NVG_UL"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL","VES_CH252_URB_Vacuum_Gold","VES_M52A_URB_Vest_B","OPTRE_NVG_UL"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_AirCrew: OPTRE_UNSC_Marine_Pilot
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Air Crewman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    respawnMagazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar","VES_CH252_URB_Heavy","VES_M52A_URB_Vest_B","VES_NVG_Collar","Marine_Backpack","VES_HUD_Balaclava_G_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar","VES_CH252_URB_Heavy","VES_M52A_URB_Vest_B","VES_NVG_Collar","VES_HUD_Balaclava_G_Black"};
    backpack="Marine_Backpack";
  };
   class 6STB_109th_AirCrew_V: OPTRE_UNSC_Marine_Pilot
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Air Crewman (V)";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M7","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
     magazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    respawnMagazines[]={"6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_60Rnd_5x23mm_Mag_tracer","6STB_8Rnd_127x40_Mag_FR","6STB_8Rnd_127x40_Mag_FG","6STB_12Rnd_127x40_Mag_NARQT","6STB_12Rnd_127x40_Mag_APT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_CNM","VES_CH252_URB_Vacuum","VES_M52A_URB_Vest_B","Marine_Backpack","OPTRE_NVG_CNM"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_CNM","VES_CH252_URB_Vacuum","VES_M52A_URB_Vest_B","OPTRE_NVG_CNM"};
    backpack="Marine_Backpack";
  };
	
  class 6STB_109th_Autorifleman: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Autorifleman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M73","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_OPTRE_M73","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T"};
    respawnMagazines[]={"6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Rifleman_A","Marine_Backpack","VES_NVG_COLLAR"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Rifleman_A","VES_NVG_COLLAR"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_AT_Specialist: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment AT Specialist";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_MA37K","6STB_M6C","OPTRE_M41_SSR","Put","Throw"};
	respawnWeapons[]={"6STB_MA37K","6STB_M6C","OPTRE_M41_SSR","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    respawnMagazines[]={"6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Grenadier_A","Marine_Backpack","VES_HUD_Balaclava_G_Beast"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Grenadier_A","VES_HUD_Balaclava_Beast"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_Breacher: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Breacher";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M45ATAC","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M45ATAC","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
    respawnMagazines[]={"OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Breacher_A","Marine_Backpack","VES_HUD_Balaclava_G_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Breacher_A","VES_HUD_Balaclava_G_Black"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_Marksman: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Marksman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_M392","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M392","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Rifleman_C","Marine_Backpack","G_Bandanna_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Heavy","VES_M52A_URB_Rifleman_C","G_Bandanna_blk"};
    backpack="Marine_Backpack";
  };
  class 6STB_109th_Medic: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment Corpsman";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_MA37K","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_MA37K","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Medical","VES_M52A_URB_Corpsman_A","Medical_Satchel","VES_HUD_Balaclava_G_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Medical","VES_M52A_URB_Corpsman_A","VES_HUD_Balaclava_G_Black"};
    backpack="Medical_Satchel";
  };
  class 6STB_109th_RTO: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="6STB_6th_Shock_Trooper_Battalion";
    editorCategory="6th_Shock_Trooper_Battalion";
	editorSubcategory="6STB_109th_M";
	side=1;
	displayName="109th Regiment RTO";
	uniformClass="TCF_SLIM_UNSCA_BLK_2_UNI";
	weapons[]={"6STB_MA5B","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_MA5B","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Radio","VES_M52A_URB_Rifleman_C","OPTRE_ANPRC_521_Black","OPTRE_HUD_g_Glasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_COLLAR","VES_CH252_URB_Radio","VES_M52A_URB_Rifleman_C","OPTRE_HUD_g_Glasses"};
    backpack="OPTRE_ANPRC_521_Black";
  };
  
  class HM_Autorifleman: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="House_Madrigal";
    editorCategory="HM_Royal";
	editorSubcategory="HM_RA";
	side=2;
	displayName="Royal Army Autorifleman";
	uniformClass="VES_BDU_Urban_Slim";
	weapons[]={"6STB_M73","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_OPTRE_M73","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T"};
    respawnMagazines[]={"6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_100Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T","6STB_250Rnd_95x40_Box_T"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","Marine_Backpack","LM_OPCAN_URB_Shemagh"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","LM_OPCAN_URB_Shemagh"};
    backpack="Marine_Backpack";
  };
  class HM_AT_Specialist: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="House_Madrigal";
    editorCategory="HM_Royal";
	editorSubcategory="HM_RA";
	side=2;
	displayName="Royal Army AT Specialist";
	uniformClass="VES_BDU_Urban_Slim";
	weapons[]={"6STB_MA37K","6STB_M6C","OPTRE_M41_SSR","Put","Throw"};
	respawnWeapons[]={"6STB_MA37K","6STB_M6C","OPTRE_M41_SSR","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    respawnMagazines[]={"6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","6STB_32Rnd_762x51_Mag_Tracer,","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal","OPTRE_M41_Twin_HEAT_Thermal"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","Marine_Backpack","LM_OPCAN_URB_Shemagh"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","LM_OPCAN_URB_Shemagh"};
    backpack="Marine_Backpack";
  };
  class HM_Breacher: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="House_Madrigal";
    editorCategory="HM_Royal";
	editorSubcategory="HM_RA";
	side=2;
	displayName="Royal Army Breacher";
	uniformClass="VES_BDU_Urban_Slim";
	weapons[]={"6STB_M45ATAC","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M45ATAC","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
    respawnMagazines[]={"OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","Marine_Backpack","LM_OPCAN_URB_Shemagh"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","LM_OPCAN_URB_Shemagh"};
    backpack="Marine_Backpack";
  };
  class HM_Marksman: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="House_Madrigal";
    editorCategory="HM_Royal";
	editorSubcategory="HM_RA";
	side=2;
	displayName="Royal Army Marksman";
	uniformClass="VES_BDU_Urban_Slim";
	weapons[]={"6STB_M392","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_M392","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","Marine_Backpack","LM_OPCAN_URB_Shemagheye"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","LM_OPCAN_URB_Shemagheye"};
    backpack="Marine_Backpack";
  };
  class HM_Medic: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="House_Madrigal";
    editorCategory="HM_Royal";
	editorSubcategory="HM_RA";
	side=2;
	displayName="Royal Army Medic";
	uniformClass="VES_BDU_Urban_Slim";
	weapons[]={"6STB_MA37K","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_MA37K","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer","6STB_32Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U_M","TCF_Vest_ODST_CEA_U","Marine_Backpack","LM_OPCAN_URB_Shemagh"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_HURS_CNM","TCF_CH252_MC_CEA_U_M","TCF_Vest_ODST_CEA_U","LM_OPCAN_URB_Shemagh"};
    backpack="Marine_Backpack";
  };
  class HM_RTO: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="House_Madrigal";
    editorCategory="HM_Royal";
	editorSubcategory="HM_RA";
	side=2;
	displayName="Royal Army RTO";
	uniformClass="VES_BDU_Urban_Slim";
	weapons[]={"6STB_MA5B","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_MA5B","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","OPTRE_ANPRC_521_Black","LM_OPCAN_URB_Shemagheye"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG_UL_CNM","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","LM_OPCAN_URB_Shemagheye"};
    backpack="OPTRE_ANPRC_521_Black";
  };
  class HM_Rifleman: OPTRE_UNSC_Army_Soldier_Crewman_WDL
  {
	faction="House_Madrigal";
    editorCategory="HM_Royal";
	editorSubcategory="HM_RA";
	side=2;
	displayName="Royal Army Rifleman";
	uniformClass="VES_BDU_Urban_Slim";
	weapons[]={"6STB_MA5B","6STB_M6C","Put","Throw"};
	respawnWeapons[]={"6STB_MA5B","6STB_M6C","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_EarPlugs","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer"};
    respawnMagazines[]={"6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer","6STB_60Rnd_762x51_Mag_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar_VAC","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","OPTRE_ANPRC_521_Black","VES_HUD_Balaclava_Gray"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","VES_NVG_Collar_VAC","TCF_CH252_MC_CEA_U","TCF_Vest_ODST_CEA_U","VES_HUD_Balaclava_Gray"};
    backpack="Marine_Backpack";
  };
  
	class LandVehicle;
	class Car: LandVehicle
	{
	};
	class Car_F: Car
	{
	};
	class LSV_01_base_F: Car_F
	{
	};
	class LSV_01_armed_base_F: LSV_01_base_F
	{
	};
	class B_LSV_01_armed_F: LSV_01_armed_base_F
	{
	};
	class OPTRE_M12_LRV;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class RCWSOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class APC_Tracked_03_base_F: Tank_F
	{
	};
	class OPTRE_M494: APC_Tracked_03_base_F
	{
	};
	class VES_M494_ORYX: OPTRE_M494
	{
	};
	class B_APC_Wheeled_01_base_F;
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	{
		class AnimationSources;
	};
	class VES_IFV76_A: B_APC_Wheeled_01_cannon_F
	{
	};
	class VES_IFV76: VES_IFV76_A
	{
	};
	
	//Motorized
	class 6th_M12_LRV: OPTRE_M12_LRV
	{
		author="6th STB S-5";
		scope=2;
		scopeCurator=2;
		displayName="M12 LRV (WDL)";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\M12_Warthog\ATACSFG\M12_Tombstone_Jungle_Upper.paa",
			"Vehicles\Ground\M12_Warthog\Base\M12_Base_Lower.paa",
			"Vehicles\Ground\M12_Warthog\ATACSFG\M12_Jungle_Turret.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
	};
	class 6th_L53_A: B_LSV_01_armed_F
	{
		scope=2;
		scopeCurator=2;
		author="R. Walker";
		displayName="LRV-53 Prowler (ARID)";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		textureList[]=
		{
			"Arid",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\LRV53\Prowler_Body_ARD.paa",
			"Vehicles\Ground\LRV53\Prowler_Ext_ARD.paa",
			"Vehicles\Ground\LRV53\Prowler_Int_ARD.paa",
			"Vehicles\Ground\LRV53\Prowler_Acc_ARD.paa"
		};
	};
	class 6th_L53_W: B_LSV_01_armed_F
	{
		scope=2;
		scopeCurator=2;
		author="R. Walker";
		displayName="LRV-53 Prowler (WDL)";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		textureList[]=
		{
			"Woodland",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\LRV53\Prowler_Body_WDL.paa",
			"Vehicles\Ground\LRV53\Prowler_Ext_WDL.paa",
			"Vehicles\Ground\LRV53\Prowler_Int_WDL.paa",
			"Vehicles\Ground\LRV53\Prowler_Acc_WDL.paa"
		};	
	};
	
	//Mechanized
	class 6th_APC77: VES_IFV76
	{
		displayName="APC-77 Badger (Transport)";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\APC77\APC77.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_A_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_T_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_CN_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_C_CO.paa"
		};
	};
	class 6th_APC77_M: 6th_APC77
	{
		displayName="APC-77 Badger (Medical)";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\APC77_M\APC77_M.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_A_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_T_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_CN_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_C_CO.paa"
		};
	};
	class 6th_IFV77: B_APC_Wheeled_01_cannon_F
	{
		displayName="IFV-77 Badger";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\APC77\APC77.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_A_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_T_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_CN_CO.paa",
			"V_FZ_Ground_Vehicles\data\Honeybadger\V_IFV76_URB_C_CO.paa"
		};
	};
	class 6th_Oryx: VES_M494_ORYX
	{
		scope=2;
		scopeCurator=2;
		author="R. Walker";
		displayName="M495 Oryx";
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Mechanized";
		side=1;
		LODDriverTurnedIn=1100;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class RenderTargets
		{
			class GunnerCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip_gunner_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class CommanderCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="pip_commander_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=2.5;
				material=-1;
				name="telo";
				visual="hull";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.40000001;
				radius=0.30000001;
			};
			class HitLTrack
			{
				armor=1.25;
				material=-1;
				name="pasL";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
			class HitRTrack
			{
				armor=1.25;
				material=-1;
				name="pasP";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
		};
		maxSpeed=100;
		normalSpeedForwardCoef=0.80000002;
		idleRpm=700;
		armor=600;
		damageResistance=0.02;
		crewVulnerable=0;
		crewExplosionProtection=1;
		armorLights=1;
		armorStructural=4;
		transportSoldier=6;
		forceHideDriver=1;
		driverForceOptics=0;
		viewdriverInExternal=1;
		getInAction="GetInMRAP_01";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic02",
			"passenger_apc_generic04",
			"passenger_apc_narrow_generic01",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright"
		};
		class UserActions
		{
			class CargoDoorOpen
			{
				userActionID=60;
				displayName="Open Cargo Door";
				displayNameDefault="Open Cargo Door";
				textToolTip="Open Cargo Door";
				position="cargodoor_axis";
				radius=6;
				priority=2;
				onlyForPlayer=0;
				condition="((this animationPhase ""CargoDoor"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""CargoDoor"",1]";
				animPeriod=5;
			};
			class CargoDoorClose: CargoDoorOpen
			{
				userActionID=61;
				displayName="Close Cargo Door";
				displayNameDefault="Close Cargo Door";
				textToolTip="Close Cargo Door";
				priority=2;
				condition="((this animationPhase ""CargoDoor"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""CargoDoor"",0]";
				animPeriod=5;
			};
			class Flip
			{
				displayNameDefault="Press SPACEBAR to Flip Oryx";
				displayName="Press SPACEBAR to Flip Oryx";
				position="";
				radius=6;
				onlyForPlayer=1;
				condition="(alive this) AND !(canmove this)";
				statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 2]; this setVectorUp surfaceNormal getposATL this;";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="obsTurret";
						gun="obsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						minElev=-12;
						maxElev=45;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						gunBeg="usti hlavne3";
						gunEnd="konec hlavne3";
						weapons[]=
						{
							"OPTRE_M247H_RCWS",
							"Laserdesignator_mounted"
						};
						magazines[]=
						{
							"OPTRE_200Rnd_127x99_M247H",
							"OPTRE_200Rnd_127x99_M247H",
							"OPTRE_200Rnd_127x99_M247H",
							"OPTRE_200Rnd_127x99_M247H",
							"Laserbatteries"
						};
						turretInfoType="RscOptics_APC_Wheeled_01_gunner";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="commanderview";
						memoryPointGunnerOutOptics="commanderview";
						gunnerForceOptics=0;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						class ViewOptics: RCWSOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1,7};
						};
						startEngine=0;
						viewGunnerInExternal=1;
						LODTurnedIn=1100;
						selectionFireAnim="zasleh3";
					};
				};
				memoryPointGun="usti hlavne2";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				weapons[]=
				{
					"autocannon_40mm_CTWS",
					"OPTRE_M247T_Coax",
					"OPTRE_M670_ATGM_Launcher",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
					"SmokeLauncherMag"
				};
				minElev=-12;
				maxElev=35;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				selectionFireAnim="zasleh2";
				gun="maingun";
				body="mainturret";
				gunAxis="Osa Hlavne";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				LODTurnedIn=1100;
				turretAxis="OsaVeze";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3,4,7};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerForceOptics=0;
				usePip=1;
			};
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Ground\Oryx\6th_Oryx_A.paa",
			"Vehicles\Ground\Oryx\6th_Oryx_B.paa",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_URB_N_CA.paa",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_URB_N_CA.paa",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_URB_N_CA.paa",
			"Vehicles\Ground\Oryx\6th_Oryx_T.paa",
			"\V_FZ_Ground_Vehicles\data\Oryx\V_M494_URB_MG_CO.paa",
			"Vehicles\Ground\Oryx\6th_Oryx_Decal.paa"
		};
		crew="6STB_109th_ArmorCrew";
	};
	
	//Rotary
	class OPTRE_UNSC_hornet;
	class OPTRE_UNSC_hornet_CAS;
	class OPTRE_UNSC_hornet_CAP;
	class VES_AV14_Rockets: OPTRE_UNSC_hornet
	{
	};
	class OPTRE_UNSC_falcon_armed_s;
	class VES_UH144S_A: OPTRE_UNSC_falcon_armed_s
	{
	};
	class 6th_UH144: VES_UH144S_A
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Rotary";
		crew="6STB_109th_Pilot";
		displayName="UH-144C Falcon";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Aircraft\Rotary\Falcon\6th_Falcon_B.paa",
			"Vehicles\Aircraft\Rotary\Falcon\6th_Falcon_R.paa",
			"Vehicles\Aircraft\Rotary\Falcon\6th_Falcon_I.paa"
		};		
	};
	class Helicopter_Base_H;
	class B_Heli_Attack_01_Dynamicloadout_F;
	class 6th_Gunfighter_Warlock: B_Heli_Attack_01_Dynamicloadout_F
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Rotary";
		crew="6STB_109th_Pilot";
		displayName="AH-94 Gunfighter";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Aircraft\Rotary\Gunfighter\V-1_Gunfighter.paa"
		};		
	};
	class 6th_AV15: VES_AV14_Rockets
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Rotary";
		crew="6STB_109th_Pilot";
		displayName="AV-15 Hornet";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Aircraft\Rotary\Hornet\6th_Hornet.paa"
		};		
	};
	class Splits_Pelican_base: Helicopter_Base_H
	{
	};
	class 6th_Pelican_M: Splits_Pelican_base
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Rotary";
		crew="6STB_109th_Pilot";
		displayName="D77-TC Pelican (Mage)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Aircraft\Rotary\Pelican\6th_Pelican_B_M.paa",
			"Vehicles\Aircraft\Rotary\Pelican\6th_Pelican_W_M.paa",
			"Vehicles\Aircraft\Rotary\Pelican\6th_Pelican_W2.paa"
		};
	};
	class 6th_Pelican_W: Splits_Pelican_base
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_Rotary";
		crew="6STB_109th_Pilot";
		displayName="D77-TC Pelican (Warlock)";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Aircraft\Rotary\Pelican\6th_Pelican_B_W.paa",
			"Vehicles\Aircraft\Rotary\Pelican\6th_Pelican_W_W.paa",
			"Vehicles\Aircraft\Rotary\Pelican\6th_Pelican_W2.paa"
		};
	};
	
	//Fixed Wing
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplatePassiveRadar;
	class SensorTemplateActiveRadar;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class Air;
	class Plane: Air
	{
		class NewTurret;
		class ViewPilot;
	};
	class Plane_Base_F: Plane
	{
	};
	class USAF_F22_Heavy: Plane
	{
	};
	class F188_Warlock: USAF_F22_Heavy
	{
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_FW";
		crew="6STB_109th_Pilot";
		displayName="F-188 Stinger";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Aircraft\FW\F188_Body_W.paa",
			"Vehicles\Aircraft\FW\F188_Body_W.paa",
			"Vehicles\Aircraft\FW\F188_Wing_W.paa",
			"",
		};
	};
	class USAF_C130J_Base: Plane_Base_F
	{
	};
	class USAF_C130J: USAF_C130J_Base
	{
	};
	class C380_Stormwind: USAF_C130J
	{	
		author="R. Walker";
		side=1;
		faction="6STB_6th_Shock_Trooper_Battalion";
		editorCategory="6th_Shock_Trooper_Battalion";
		editorSubcategory="6STB_FW";
		crew="6STB_109th_Pilot";
		displayName="C-380 Olympus (WIP)";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\Aircraft\FW\C380_Body_S.paa",
			"Vehicles\Aircraft\FW\C380_Wings_S.paa",
			"Vehicles\Aircraft\FW\C380_Decal.paa"
		};
		class AnimationSources
		{
			class landingBeams
			{
				source="user";
				animPeriod=0.0099999998;
			};
			class door_2_2
			{
				source="user";
				animPeriod=10;
				sound="ServoRampSound";
			};
			class door_2_1: door_2_2
			{
			};
			class door_1: door_2_2
			{
			};
			class ramp_bottom
			{
				source="user";
				initPhase=0;
				animPeriod=10;
				sound="ServoRampSound";
			};
			class fuel_probe
			{
				source="user";
				initPhase=0;
				animPeriod=9.9999997e-005;
			};
			class ramp_top
			{
				source="user";
				initPhase=0;
				animPeriod=10;
				sound="ServoRampSound";
			};
			class CollisionLightRed_source
			{
				source="MarkerLight";
				markerLight="PositionRed";
			};
			class lightred
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class lightgreen
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class fuel_tank_hide
			{
				displayName="Hide Ext Fuel";
				author="USAF Mod Team";
				source="user";
				initPhase=0;
				animPeriod=9.9999997e-005;
			};
			class cargo_hide_now
			{
				source="user";
				initPhase=0;
				animPeriod=9.9999997e-005;
			};
			class Formlights
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class HitAvionics
			{
				hitpoint="HitAvionics";
				raw=1;
				source="Hit";
			};
			class HitEngine: HitAvionics
			{
				hitpoint="HitEngine";
			};
			class HitEngine2: HitAvionics
			{
				hitpoint="HitEngine2";
			};
			class HitFuel: HitAvionics
			{
				hitpoint="HitFuel";
			};
			class HitFuel2: HitAvionics
			{
				hitpoint="HitFuel2";
			};
			class HitGear: HitAvionics
			{
				hitpoint="HitGear";
			};
			class HitHull: HitAvionics
			{
				hitpoint="HitHull";
			};
			class HitLAileron: HitAvionics
			{
				hitpoint="HitLAileron";
			};
			class HitRAileron: HitAvionics
			{
				hitpoint="HitRAileron";
			};
			class HitLCElevator: HitAvionics
			{
				hitpoint="HitLCElevator";
			};
			class HitRElevator: HitAvionics
			{
				hitpoint="HitRElevator";
			};
			class HitLCRudder: HitAvionics
			{
				hitpoint="HitLCRudder";
			};
			class HitRRudder: HitAvionics
			{
				hitpoint="HitRRudder";
			};
		};
	};
	class C380_Stormwind_C: C380_Stormwind
	{
		displayname="C-380 Olympus (Cargo) (WIP)";
		transportSoldier=0;
		USAF_Cargo_MaxLength=12.1;
		USAF_Cargo_endOffset[]={0,9,1.25};
		class AnimationSources: AnimationSources
		{
			class cargo_hide_now: cargo_hide_now
			{
				initPhase=1;
			};
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VIV_point_1",
					"VIV_point_2"
				};
				disableHeightLimit=0;
				maxLoadMass=35900;
				cargoAlignment[]=
				{
					"front",
					"center"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VIV_exit"
				};
				unloadingInterval=2;
				loadingDistance=15;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=5;
			};
			class Cargo
			{
				canBeTransported=0;
			};
		};
	};
};
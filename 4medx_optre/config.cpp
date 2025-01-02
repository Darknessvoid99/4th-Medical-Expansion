

class CfgPatches {
    class 4medx_optre
	{
        units[] = {};
        weapons[] = {};
        magazines[] = { };
        requiredAddons[] = 
		{
			"ace_common",
            "ace_medical",
            "ace_medical_ai",
            "ace_medical_blood",
            "ace_medical_damage",
            "ace_medical_engine",
            "ace_medical_feedback",
            "ace_medical_gui",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals",
			"kat_main",
			"kat_airway",
			"kat_breathing",
			"kat_circulation",
			"kat_misc",
			"kat_pharma",
			"kat_surgery"
			"OPTRE_Loadorder",
			"OPTRE_ACE_Compat"
        };
        author = "Darknessvoid99";

		skipWhenMissingDependencies = 1;
    };
};

class CfgWeapons
{
	class ACE_fieldDressing;

	class OPTRE_Biofoam : ACE_fieldDressing
	{
		scope = 1;
		scopeArsenal = 1;
	};

	class OPTRE_Medigel : ACE_fieldDressing
	{
		scope = 1;
		scopeArsenal = 1;
	};

	class OPTRE_MedKit : ACE_ItemCore
	{
		mass = 10;
	};
};

class CfgMagazines 
{
	class 4medx_x_bdg_fielddressing;

		class 4medx_x_bd_biofoam : 4medx_x_bdg_fielddressing
		{
			displayName = "Biofoam Canister";
			descriptionShort = "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
			descriptionUse = "Applying Biofoam...";
			model = "\OPTRE_Weapons\items\Biofoam.p3d";
			picture = "\OPTRE_weapons\items\icons\biofoam.paa";

			count = 2;	//12
			mass = 9;

			author = "Article 2 Studios";
			dlc = "OPTRE";
		};

		class 4medx_x_bd_medigel : 4medx_x_bdg_fielddressing
		{
			displayName = "Optican Medigel";
			descriptionShort = "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
			descriptionUse = "Injecting Medigel...";
			model = "\OPTRE_Weapons\items\Medigel.p3d";
			picture = "\4medx_optre\data\icon_medigel.paa";

			count = 12;
			mass = 5;

			author = "Article 2 Studios";
			dlc = "OPTRE";
		};
};

#include "ACE_Medical_replacementItems.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"

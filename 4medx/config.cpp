

class CfgPatches {
    class 4medx
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
			//"diwako_ace_medical_main",
			//"FSGm_MedicBag",
        };
        author = "Darknessvoid99";
    };
};

class CfgMagazines 
{
	class CA_Magazine;

	//KAT
		class kat_Carbonate : CA_Magazine
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

	//Dark 4medx
		class 4medx_x_iv_eaca : CA_Magazine
		{
			//author = "Katalam";
			scope = 2;

			displayName = "Vial (EACA)";
			picture = "\4medx\data\icon_eaca.paa";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			descriptionShort = "Strengthens clots reducing reopening";

			ammo = "";
			initSpeed = 0;
			tracersEvery = 0;
			lastRoundsTracer = 0;

			count = 5;
			mass = 2;
			ACE_isMedicalItem = 1;
			ACE_asItem = 1;
		};

		class 4medx_x_iv_txa : 4medx_x_iv_eaca
		{
			displayName = "Vial (TXA)";
			picture = "\x\kat\addons\pharma\ui\icon_TXA.paa";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			descriptionShort = "Encourages clot formation";
		};

		class 4medx_x_iv_norepinephrine : 4medx_x_iv_eaca
		{
			displayName = "Vial (Norepinephrine)";
			picture = "\x\kat\addons\pharma\ui\norep.paa";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			descriptionShort = "Used to raise blood pressure";
		};

		class 4medx_x_iv_phenylephrine : 4medx_x_iv_eaca
		{
			displayName = "Vial (Phenylephrine)";
			descriptionShort = "Used to raise blood pressure";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\phen.paa";
		};

		class 4medx_x_iv_nitroglycerin : 4medx_x_iv_eaca
		{
			displayName = "Vial (Nitroglycerin)";
			descriptionShort = "Used to lower blood pressure";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\nitro.paa";
		};

		class 4medx_x_iv_amiodarone : 4medx_x_iv_eaca
		{
			displayName = "Vial (Amiodarone)";
			descriptionShort = "Used to combat cardiac arrest";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\icon_Amiodarone.paa";
		};

		class 4medx_x_iv_lidocaine : 4medx_x_iv_eaca
		{
			displayName = "Vial (Lidocaine)";
			descriptionShort = "Used to combat cardiac arrest";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\icon_Lidocaine.paa";
		};

		class 4medx_x_iv_ketamine : 4medx_x_iv_eaca
		{
			displayName = "Ketamine";
			descriptionShort = "Dissociative anesthetics, used to suppress severe pain";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\icon_Ketamine.paa";
		};

		class 4medx_x_iv_fentanyl : 4medx_x_iv_eaca
		{
			displayName = "Vial (Fentanyl)";
			descriptionShort = "Opioid analgesic, used to suppress severe pain";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\icon_Fentanyl.paa";
		};

		class 4medx_x_iv_nalbuphine : 4medx_x_iv_eaca
		{
			displayName = "Vial (Nalbuphine)";
			descriptionShort = "Opioid analgesic, used to suppress moderate pain";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\icon_Nalbuphine.paa";
		};

		class 4medx_x_iv_lorazepam : 4medx_x_iv_eaca
		{
			scope = 1;

			displayName = "Vial (Lorazepam)";
			descriptionShort = "Sedtation medication";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\icon_lorazepam.paa";
		};

		class 4medx_x_iv_flumazenil : 4medx_x_iv_eaca
		{
			displayName = "Vial (Flumazenil)";
			descriptionShort = "Counter to Lorazepam";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\icon_flumazenil.paa";
		};

		class 4medx_x_iv_etomidate : 4medx_x_iv_eaca
		{
			displayName = "Vial (Etomidate)";
			descriptionShort = "General Anesthetic";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\icon_etomidate.paa";
		};

		class 4medx_x_iv_epinephrine : 4medx_x_iv_eaca
		{
			displayName = "Vial (Epinephrine)";
			descriptionShort = "Increase heart rate, counter allergic reactions, and increase CPR Chance";
			descriptionUse = "A drug that works on a sympathetic response to dilate the bronchi, increase heart rate and counter such effects given by allergic reactions (anaphylaxis). Used in sudden cardiac arrest scenarios with decreasing positive outcomes.";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\x\kat\addons\pharma\ui\icon_EpinephrineIV.paa";
		};

		class 4medx_x_bd_fielddressing : 4medx_x_iv_eaca
		{
			displayName = "Bandage (Basic)";
			descriptionShort = "Used to cover a wound";
			descriptionUse = "A dressing, that is a particular material used to cover a wound, which is applied over the wound once bleeding has been stemmed.";
			model = "\z\ace\addons\medical_treatment\data\bandage.p3d";
			picture = "\z\ace\addons\medical_treatment\ui\fieldDressing_ca.paa";

			count = 9;
			mass = 2.5;
		};

		class 4medx_x_ex_traumakit : 4medx_x_iv_eaca
		{
			displayName = "Trauma Kit";
			descriptionShort = "Used to quickly stem excessive bleeding";
			model = "\A3\Weapons_F\Items\Medikit";
			picture = "\z\ace\addons\medical_treatment\ui\personal_aid_kit_ca.paa";

			count = 4;
			mass = 10;
		};
};

class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	
	//ACE Medical
		class ACE_bodyBag : ACE_ItemCore
		{
			class ItemInfo : CBA_MiscItem_ItemInfo 
			{
				mass = 3; //Default : 7
			};
		};

		class ACE_bloodIV : ACE_ItemCore 
		{
			scope = 1;
		};
		class ACE_bloodIV_500 : ACE_bloodIV 
		{
			scope = 1;
		};
		class ACE_bloodIV_250 : ACE_bloodIV 
		{
			scope = 1;
		};

		class ACE_suture : ACE_ItemCore
		{
			scope = 1;
		};

		class ACE_painkillers : ACE_ItemCore
		{
			scope = 1;
		};

		class ACE_fieldDressing : ACE_ItemCore 
		{
			scope = 1;

			class ItemInfo: CBA_MiscItem_ItemInfo
			{
            	mass = 0.5;
        	};
		};

		class ACE_elasticBandage : ACE_ItemCore 
		{
			class ItemInfo: CBA_MiscItem_ItemInfo
			{
            	mass = 0.5;
        	};
		};

		class ACE_packingBandage : ACE_ItemCore 
		{
			class ItemInfo: CBA_MiscItem_ItemInfo
			{
            	mass = 0.5;
        	};
		};

		class ACE_quikclot : ACE_ItemCore 
		{
			class ItemInfo: CBA_MiscItem_ItemInfo
			{
            	mass = 0.5;
        	};
		};

		class ACE_morphine: ACE_ItemCore
		{
			displayName = "Autoinjector (Morphine)";
    	};
	
		class ACE_adenosine: ACE_ItemCore
		{
			displayName = "Autoinjector (Adenosine)";
		};

		class ACE_epinephrine: ACE_ItemCore
		{
			displayName = "Autoinjector (Epinephrine)";
		};

	//KAT Airway
		class kat_larynx : ACE_ItemCore 
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_guedel: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_accuvac : ACE_ItemCore 
		{
			scope = 1; 
			scopeCurator = 1;
			scopeArsenal = 1;
		};

	//KAT Breathing
		class kat_stethoscope : ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_nasal : ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_oxygenTank_150_Empty : ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_oxygenTank_300_Empty : ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

	//KAT Circulation
		//1000ml Blood
			class kat_bloodIV_O : ACE_bloodIV 
			{
				scope = 2;
			};

			class kat_bloodIV_O_N : ACE_bloodIV
			{
				scope = 2;
			};

			class kat_bloodIV_A : ACE_bloodIV
			{
				scope = 2;
			};

			class kat_bloodIV_A_N : ACE_bloodIV
			{
				scope = 2;
			};

			class kat_bloodIV_B : ACE_bloodIV
			{
				scope = 2;
			};

			class kat_bloodIV_B_N : ACE_bloodIV
			{
				scope = 2;
			};

			class kat_bloodIV_AB : ACE_bloodIV
			{
				scope = 2;
			};

			class kat_bloodIV_AB_N : ACE_bloodIV
			{
				scope = 2;
			};

		//500ml Blood
			class kat_bloodIV_O_500 : ACE_bloodIV_500
			{
				scope = 2;
			};

			class kat_bloodIV_O_N_500 : ACE_bloodIV_500
			{
				scope = 2;
			};

			class kat_bloodIV_A_500 : ACE_bloodIV_500
			{
				scope = 2;
			};

			class kat_bloodIV_A_N_500 : ACE_bloodIV_500
			{
				scope = 2;
			};

			class kat_bloodIV_B_500 : ACE_bloodIV_500
			{
				scope = 2;
			};

			class kat_bloodIV_B_N_500 : ACE_bloodIV_500
			{
				scope = 2;
			};

			class kat_bloodIV_AB_500 : ACE_bloodIV_500
			{
				scope = 2;
			};

			class kat_bloodIV_AB_N_500 : ACE_bloodIV_500
			{
				scope = 2;
			};

		//250ml Blood
			class kat_bloodIV_O_250 : ACE_bloodIV_250
			{
				scope = 2;
			};

			class kat_bloodIV_O_N_250 : ACE_bloodIV_250
			{
				scope = 2;
			};

			class kat_bloodIV_A_250 : ACE_bloodIV_250
			{
				scope = 2;
			};

			class kat_bloodIV_A_N_250 : ACE_bloodIV_250
			{
				scope = 2;
			};

			class kat_bloodIV_B_250 : ACE_bloodIV_250
			{
				scope = 2;
			};

			class kat_bloodIV_B_N_250 : ACE_bloodIV_250
			{
				scope = 2;
			};

			class kat_bloodIV_AB_250 : ACE_bloodIV_250
			{
				scope = 2;
			};

			class kat_bloodIV_AB_N_250 : ACE_bloodIV_250
			{
				scope = 2;
			};

		class KAT_Empty_bloodIV_500 : ACE_bloodIV
		{
			scope = 2;

			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 0.5; //Default : 2 / Modified to be 10% the weight of a full bag to increase viability
			};
		};

		class KAT_Empty_bloodIV_250 : ACE_bloodIV
		{
			scope = 2;

			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 0.25; //Default : 1 / Modified to be 10% the weight of a full bag to increase viability
			};
		};

		class kat_IV_16 : ACE_ItemCore
		{
			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 0.2; //Default : 0.5
			}; 
		};

		class kat_IO_FAST : ACE_ItemCore
		{
			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 1; //Default : 0.5
			}; 
		};

		class kat_AED : ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;

			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 30; //Default : 30
			};
		};

		class kat_X_AED: kat_AED
		{
			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 30; 	//Default : 40
			};
		};

	//KAT Surgery
		class kat_retractor : ACE_ItemCore
		{
			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 3; //Default : 0.5
			};
		};

		class kat_clamp : ACE_ItemCore
		{
			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 3; //Default : 0.5
			};
		};

		class kat_scalpel : ACE_ItemCore
		{
			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 0.3; //Default : 0.2
			};
		};

		class kat_plate: ACE_ItemCore
		{
			class ItemInfo: CBA_MiscItem_ItemInfo
			{
				mass = 0.5;
			}; 
		};

		class kat_vacuum: ACE_ItemCore
		{
        	scope = 1;
    	};

	//KAT Pharmacy
		class kat_phenylephrineAuto : ACE_ItemCore 
		{
			displayName = "Autoinjector (Phenylephrine)";

			class ItemInfo : CBA_MiscItem_ItemInfo
			{
				mass = 1; //Default : 0.5 / 1 brings up to Autoinjector Standard
			};
		};

		class kat_atropine: ACE_ItemCore
		{
			displayName = "Autoinjector (Atropine)";

			class ItemInfo: CBA_MiscItem_ItemInfo
			{
				mass = 1; //Default : 0.5 / 1 brings up to Autoinjector Standard
			};
    	};

		class kat_EACA: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_TXA: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_norepinephrine: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_phenylephrine: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_nitroglycerin: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_amiodarone: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_lidocaine: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_ketamine: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_fentanyl: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};
		
		class kat_nalbuphine: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_lorazepam: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_flumazenil: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_etomidate: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};

		class kat_epinephrineIV: ACE_ItemCore
		{
			scope = 1;
			scopeCurator = 1;
			scopeArsenal = 1;
		};
	/*
		class 4medx_x_ai_txa : ACE_adenosine
		{
			displayName = "Autoinjector (TXA-NP)";
			descriptionShort = "Encourages clot formation";
			model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
			picture = "\darkmod_4medx_armco\data\icon_eaca.paa";
		};
	*/
};

class CfgVehicles
{
	class B_AssaultPack_blk;
	class ThingX;

	class 4medx_b_pack1_aed : B_AssaultPack_blk
	{
		displayName = "Emergency AED Pack";
        author = "Darknesvoid99";
		maximumLoad = 0;
		mass = 50;

		class assembleInfo
		{
			displayName = "AED";
            assembleTo = "kat_AEDItem";
			dissasembleTo[] = {};
            base = "";
            primary = 1;
		};

        hiddenSelectionsTextures[] = 
        {
            "\4medx\data\dm_pac1_aed.paa"
        };
	};

// AEDpackIntoBackpack
	class kat_AEDItem : ThingX
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class 4medx_packIntoBackpack
				{
					displayName = "Repack AED";
					condition = "_target call kat_stretcher_fnc_canPackIntoBackpack";
					statement = "[_player, _target] call kat_stretcher_fnc_AEDpackIntoBackpack";
					icon = "\x\kat\addons\circulation\ui\icon_aedx_monitor.paa";
				};
			};
		};
	};
};

#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"

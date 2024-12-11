	//Macros	
//Basic Bandage
#define b_b_h_mr effectiveness = 2; reopeningChance = 0.4; reopeningMinDelay = 420; reopeningMaxDelay = 525;
#define b_b_h_mm effectiveness = 1; reopeningChance = 0.5; reopeningMinDelay = 360; reopeningMaxDelay = 450;
#define b_b_h_le effectiveness = 0.75; reopeningChance = 0.6; reopeningMinDelay = 300; reopeningMaxDelay = 375;

//Packing
#define b_p_h_mr effectiveness = 1; reopeningChance = 0.7; reopeningMinDelay = 750; reopeningMaxDelay = 1500;
#define b_p_h_mm effectiveness = 1; reopeningChance = 0.8; reopeningMinDelay = 600; reopeningMaxDelay = 1200;
#define b_p_h_le effectiveness = 1; reopeningChance = 0.9; reopeningMinDelay = 450; reopeningMaxDelay = 900;

//Elastic
#define b_e_h_mr effectiveness = 4; reopeningChance = 0.8; reopeningMinDelay = 180; reopeningMaxDelay = 400;
#define b_e_h_mm effectiveness = 3; reopeningChance = 0.9; reopeningMinDelay = 120; reopeningMaxDelay = 300;
#define b_e_h_le effectiveness = 2; reopeningChance = 1; reopeningMinDelay = 60; reopeningMaxDelay = 200;

//Quikclot
#define b_q_h_mr effectiveness = 1; reopeningChance = 0.1; reopeningMinDelay = 600; reopeningMaxDelay = 900;
#define b_q_h_mm effectiveness = 0.75; reopeningChance = 0.2; reopeningMinDelay = 360; reopeningMaxDelay = 540;
#define b_q_h_le effectiveness = 0.5; reopeningChance = 0.3; reopeningMinDelay = 240; reopeningMaxDelay = 360;

//Contusion
#define b_c_h effectiveness = 2; reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0;
#define b_c_m effectiveness = 1; reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0;
#define b_c_l effectiveness = 0.5; reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0;


class ACE_Medical_Treatment 
{
	class Bandaging
	{
		class FieldDressing
		{
			class Abrasion
			{
				b_b_h_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_b_h_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_b_h_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_b_h_le
				};
			class Avulsion : Abrasion 
			{
				b_b_h_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_b_h_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_b_h_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_b_h_le
				};
			class Contusion : Abrasion 
			{
				b_c_m
			};
				class ContusionMinor : Contusion
				{
					b_c_m
				};
				class ContusionMedium : Contusion 
				{
					b_c_m
				};
				class ContusionLarge : Contusion 
				{
					b_c_m
				};
			class Crush : Abrasion 
			{
				b_b_h_mm
			};
				class CrushMinor : Crush
				{
					b_b_h_mr
				};
				class CrushMedium : Crush
				{
					b_b_h_mm
				};
				class CrushLarge : Crush
				{
					b_b_h_le
				};
			class Cut : Abrasion 
			{
				b_b_h_mm
			};
				class CutMinor : Cut
				{
					b_b_h_mr
				};
				class CutMedium : Cut
				{
					b_b_h_mm
				};
				class CutLarge : Cut
				{
					b_b_h_le
				};
			class Laceration : Abrasion 
			{
				b_b_h_mm
			};
				class LacerationMinor : Laceration
				{
					b_b_h_mr
				};
				class LacerationMedium : Laceration
				{
					b_b_h_mm
				};
				class LacerationLarge : Laceration
				{
					b_b_h_le
				};
			class VelocityWound : Abrasion 
			{
				b_b_h_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_b_h_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_b_h_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_b_h_le
				};
			class PunctureWound : Abrasion 
			{
				b_b_h_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_b_h_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_b_h_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_b_h_le
				};
		};
		
		class PackingBandage : fieldDressing 
		{
			class Abrasion
			{
				b_p_h_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_p_h_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_p_h_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_p_h_le
				};
			class Avulsion : Abrasion 
			{
				b_p_h_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_p_h_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_p_h_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_p_h_le
				};
			class Contusion : Abrasion 
			{
				b_c_m
			};
				class ContusionMinor : Contusion 
				{
					b_c_m
				};
				class ContusionMedium : Contusion 
				{
					b_c_m
				};
				class ContusionLarge : Contusion 
				{
					b_c_m
				};
			class Crush : Abrasion 
			{
				b_p_h_mm
			};
				class CrushMinor : Crush
				{
					b_p_h_mr
				};
				class CrushMedium : Crush
				{
					b_p_h_mm
				};
				class CrushLarge : Crush
				{
					b_p_h_le
				};
			class Cut : Abrasion 
			{
				b_p_h_mm
			};
				class CutMinor : Cut
				{
					b_p_h_mr
				};
				class CutMedium : Cut
				{
					b_p_h_mm
				};
				class CutLarge : Cut
				{
					b_p_h_le
				};
			class Laceration : Abrasion 
			{
				b_p_h_mm
			};
				class LacerationMinor : Laceration
				{
					b_p_h_mr
				};
				class LacerationMedium : Laceration
				{
					b_p_h_mm
				};
				class LacerationLarge : Laceration
				{
					b_p_h_le
				};
			class VelocityWound : Abrasion 
			{
				b_p_h_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_p_h_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_p_h_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_p_h_le
				};
			class PunctureWound : Abrasion 
			{
				b_p_h_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_p_h_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_p_h_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_p_h_le
				};
		};
		
		class ElasticBandage : fieldDressing 
		{
			class Abrasion
			{
				b_e_h_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_e_h_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_e_h_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_e_h_le
				};
			class Avulsion : Abrasion 
			{
				b_e_h_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_e_h_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_e_h_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_e_h_le
				};
			class Contusion : Abrasion 
			{
				b_c_h
			};
				class ContusionMinor : Contusion 
				{
					b_c_h
				};
				class ContusionMedium : Contusion 
				{
					b_c_h
				};
				class ContusionLarge : Contusion 
				{
					b_c_h
				};
			class Crush : Abrasion 
			{
				b_e_h_mm
			};
				class CrushMinor : Crush
				{
					b_e_h_mr
				};
				class CrushMedium : Crush
				{
					b_e_h_mm
				};
				class CrushLarge : Crush
				{
					b_e_h_le
				};
			class Cut : Abrasion 
			{
				b_e_h_mm
			};
				class CutMinor : Cut
				{
					b_e_h_mr
				};
				class CutMedium : Cut
				{
					b_e_h_mm
				};
				class CutLarge : Cut
				{
					b_e_h_le
				};
			class Laceration : Abrasion 
			{
				b_e_h_mm
			};
				class LacerationMinor : Laceration
				{
					b_e_h_mr
				};
				class LacerationMedium : Laceration
				{
					b_e_h_mm
				};
				class LacerationLarge : Laceration
				{
					b_e_h_le
				};
			class VelocityWound : Abrasion 
			{
				b_e_h_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_e_h_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_e_h_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_e_h_le
				};
			class PunctureWound : Abrasion 
			{
				b_e_h_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_e_h_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_e_h_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_e_h_le
				};
		};
		
		class QuikClot : fieldDressing 
		{
			class Abrasion
			{
				b_q_h_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_q_h_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_q_h_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_q_h_le
				};
			class Avulsion : Abrasion 
			{
				b_q_h_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_q_h_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_q_h_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_q_h_le
				};
			class Contusion : Abrasion 
			{
				b_c_l
			};
				class ContusionMinor : Contusion 
				{
					b_c_l
				};
				class ContusionMedium : Contusion 
				{
					b_c_l
				};
				class ContusionLarge : Contusion 
				{
					b_c_l
				};
			class Crush : Abrasion 
			{
				b_q_h_mm
			};
				class CrushMinor : Crush
				{
					b_q_h_mr
				};
				class CrushMedium : Crush
				{
					b_q_h_mm
				};
				class CrushLarge : Crush
				{
					b_q_h_le
				};
			class Cut : Abrasion 
			{
				b_q_h_mm
			};
				class CutMinor : Cut
				{
					b_q_h_mr
				};
				class CutMedium : Cut
				{
					b_q_h_mm
				};
				class CutLarge : Cut
				{
					b_q_h_le
				};
			class Laceration : Abrasion 
			{
				b_q_h_mm
			};
				class LacerationMinor : Laceration
				{
					b_q_h_mr
				};
				class LacerationMedium : Laceration
				{
					b_q_h_mm
				};
				class LacerationLarge : Laceration
				{
					b_q_h_le
				};
			class VelocityWound : Abrasion 
			{
				b_q_h_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_q_h_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_q_h_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_q_h_le
				};
			class PunctureWound : Abrasion 
			{
				b_q_h_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_q_h_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_q_h_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_q_h_le
				};
		};
	};

	class Medication
	{
		class TXA
		{
            painReduce = 0;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 200;
            timeTillMaxEffect = 5;
            maxDose = 3;
            incompatibleMedication[] = {};
            viscosityChange = 0;
            onOverDose = "";
        };

		class TXA_NP : TXA
		{
            timeInSystem = 50;
            viscosityChange = 35;
        };
	};
};
	//Macros	
//Basic Bandage
#define b_b_mr effectiveness = 2;   reopeningChance = 0.4; reopeningMinDelay = 300; reopeningMaxDelay = 900;
#define b_b_mm effectiveness = 1;   reopeningChance = 0.5; reopeningMinDelay = 240; reopeningMaxDelay = 750;
#define b_b_le effectiveness = 0.7; reopeningChance = 0.6; reopeningMinDelay = 180; reopeningMaxDelay = 600;

//Packing
#define b_p_mr effectiveness = 1; reopeningChance = 0.7; reopeningMinDelay = 1200; reopeningMaxDelay = 1800;
#define b_p_mm effectiveness = 1; reopeningChance = 0.8; reopeningMinDelay = 1050;  reopeningMaxDelay = 1500;
#define b_p_le effectiveness = 1; reopeningChance = 0.9; reopeningMinDelay = 900;  reopeningMaxDelay = 1200;

//Elastic
#define b_e_mr effectiveness = 4; reopeningChance = 0.8; reopeningMinDelay = 120; reopeningMaxDelay = 300;
#define b_e_mm effectiveness = 3; reopeningChance = 0.9; reopeningMinDelay = 90; reopeningMaxDelay = 240;
#define b_e_le effectiveness = 2;   reopeningChance = 1; reopeningMinDelay = 60; reopeningMaxDelay = 180;

//Quikclot
#define b_q_mr effectiveness = 1.5; reopeningChance = 0.1; reopeningMinDelay = 600; reopeningMaxDelay = 1200;
#define b_q_mm effectiveness = 1;   reopeningChance = 0.2; reopeningMinDelay = 300; reopeningMaxDelay = 600;
#define b_q_le effectiveness = 0.5; reopeningChance = 0.3; reopeningMinDelay = 120; reopeningMaxDelay = 300;

//Contusion
#define b_c_h effectiveness = 2;   reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0;
#define b_c_m effectiveness = 1;   reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0;
#define b_c_l effectiveness = 0.5; reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0;


class ACE_Medical_Treatment 
{
	class Bandaging
	{
		class FieldDressing
		{
			class Abrasion
			{
				b_b_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_b_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_b_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_b_le
				};
			class Avulsion : Abrasion 
			{
				b_b_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_b_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_b_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_b_le
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
				b_b_mm
			};
				class CrushMinor : Crush
				{
					b_b_mr
				};
				class CrushMedium : Crush
				{
					b_b_mm
				};
				class CrushLarge : Crush
				{
					b_b_le
				};
			class Cut : Abrasion 
			{
				b_b_mm
			};
				class CutMinor : Cut
				{
					b_b_mr
				};
				class CutMedium : Cut
				{
					b_b_mm
				};
				class CutLarge : Cut
				{
					b_b_le
				};
			class Laceration : Abrasion 
			{
				b_b_mm
			};
				class LacerationMinor : Laceration
				{
					b_b_mr
				};
				class LacerationMedium : Laceration
				{
					b_b_mm
				};
				class LacerationLarge : Laceration
				{
					b_b_le
				};
			class VelocityWound : Abrasion 
			{
				b_b_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_b_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_b_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_b_le
				};
			class PunctureWound : Abrasion 
			{
				b_b_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_b_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_b_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_b_le
				};
		};
		
		class PackingBandage : FieldDressing 
		{
			class Abrasion
			{
				b_p_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_p_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_p_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_p_le
				};
			class Avulsion : Abrasion 
			{
				b_p_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_p_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_p_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_p_le
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
				b_p_mm
			};
				class CrushMinor : Crush
				{
					b_p_mr
				};
				class CrushMedium : Crush
				{
					b_p_mm
				};
				class CrushLarge : Crush
				{
					b_p_le
				};
			class Cut : Abrasion 
			{
				b_p_mm
			};
				class CutMinor : Cut
				{
					b_p_mr
				};
				class CutMedium : Cut
				{
					b_p_mm
				};
				class CutLarge : Cut
				{
					b_p_le
				};
			class Laceration : Abrasion 
			{
				b_p_mm
			};
				class LacerationMinor : Laceration
				{
					b_p_mr
				};
				class LacerationMedium : Laceration
				{
					b_p_mm
				};
				class LacerationLarge : Laceration
				{
					b_p_le
				};
			class VelocityWound : Abrasion 
			{
				b_p_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_p_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_p_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_p_le
				};
			class PunctureWound : Abrasion 
			{
				b_p_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_p_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_p_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_p_le
				};
		};
		
		class ElasticBandage : FieldDressing 
		{
			class Abrasion
			{
				b_e_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_e_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_e_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_e_le
				};
			class Avulsion : Abrasion 
			{
				b_e_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_e_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_e_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_e_le
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
				b_e_mm
			};
				class CrushMinor : Crush
				{
					b_e_mr
				};
				class CrushMedium : Crush
				{
					b_e_mm
				};
				class CrushLarge : Crush
				{
					b_e_le
				};
			class Cut : Abrasion 
			{
				b_e_mm
			};
				class CutMinor : Cut
				{
					b_e_mr
				};
				class CutMedium : Cut
				{
					b_e_mm
				};
				class CutLarge : Cut
				{
					b_e_le
				};
			class Laceration : Abrasion 
			{
				b_e_mm
			};
				class LacerationMinor : Laceration
				{
					b_e_mr
				};
				class LacerationMedium : Laceration
				{
					b_e_mm
				};
				class LacerationLarge : Laceration
				{
					b_e_le
				};
			class VelocityWound : Abrasion 
			{
				b_e_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_e_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_e_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_e_le
				};
			class PunctureWound : Abrasion 
			{
				b_e_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_e_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_e_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_e_le
				};
		};
		
		class QuikClot : FieldDressing 
		{
			class Abrasion
			{
				b_q_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_q_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_q_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_q_le
				};
			class Avulsion : Abrasion 
			{
				b_q_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_q_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_q_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_q_le
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
				b_q_mm
			};
				class CrushMinor : Crush
				{
					b_q_mr
				};
				class CrushMedium : Crush
				{
					b_q_mm
				};
				class CrushLarge : Crush
				{
					b_q_le
				};
			class Cut : Abrasion 
			{
				b_q_mm
			};
				class CutMinor : Cut
				{
					b_q_mr
				};
				class CutMedium : Cut
				{
					b_q_mm
				};
				class CutLarge : Cut
				{
					b_q_le
				};
			class Laceration : Abrasion 
			{
				b_q_mm
			};
				class LacerationMinor : Laceration
				{
					b_q_mr
				};
				class LacerationMedium : Laceration
				{
					b_q_mm
				};
				class LacerationLarge : Laceration
				{
					b_q_le
				};
			class VelocityWound : Abrasion 
			{
				b_q_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_q_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_q_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_q_le
				};
			class PunctureWound : Abrasion 
			{
				b_q_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_q_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_q_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_q_le
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
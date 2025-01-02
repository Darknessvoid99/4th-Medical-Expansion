	//Macros	
//Basic Bandage
#define b_i_mr effectiveness = 20; reopeningChance = 0.1; reopeningMinDelay = 900; reopeningMaxDelay = 1800;
#define b_i_mm effectiveness = 10; reopeningChance = 0.3; reopeningMinDelay = 750; reopeningMaxDelay = 1500;
#define b_i_le effectiveness = 5;  reopeningChance = 0.5; reopeningMinDelay = 600; reopeningMaxDelay = 1200;

//Packing
#define b_g_mr effectiveness = 5; reopeningChance = 0.7; reopeningMinDelay = 1200; reopeningMaxDelay = 1800;
#define b_g_mm effectiveness = 3.5; reopeningChance = 0.8; reopeningMinDelay = 1050;  reopeningMaxDelay = 1500;
#define b_g_le effectiveness = 2.5; reopeningChance = 0.9; reopeningMinDelay = 900;  reopeningMaxDelay = 1200;

#define b_c_m effectiveness = 1;   reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0;
#define b_c_h effectiveness = 2;   reopeningChance = 0; reopeningMinDelay = 0; reopeningMaxDelay = 0;


class ACE_Medical_Treatment 
{
	class Bandaging
	{
		class OPTRE_Biofoam : ElasticBandage
		{
			class Abrasion
			{
				b_i_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_i_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_i_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_i_le
				};
			class Avulsion : Abrasion 
			{
				b_i_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_i_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_i_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_i_le
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
				b_i_mm
			};
				class CrushMinor : Crush
				{
					b_i_mr
				};
				class CrushMedium : Crush
				{
					b_i_mm
				};
				class CrushLarge : Crush
				{
					b_i_le
				};
			class Cut : Abrasion 
			{
				b_i_mm
			};
				class CutMinor : Cut
				{
					b_i_mr
				};
				class CutMedium : Cut
				{
					b_i_mm
				};
				class CutLarge : Cut
				{
					b_i_le
				};
			class Laceration : Abrasion 
			{
				b_i_mm
			};
				class LacerationMinor : Laceration
				{
					b_i_mr
				};
				class LacerationMedium : Laceration
				{
					b_i_mm
				};
				class LacerationLarge : Laceration
				{
					b_i_le
				};
			class VelocityWound : Abrasion 
			{
				b_i_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_i_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_i_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_i_le
				};
			class PunctureWound : Abrasion 
			{
				b_i_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_i_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_i_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_i_le
				};
		};

		class OPTRE_Medigel : ElasticBandage 
		{
			class Abrasion
			{
				b_g_mm
			};
				class AbrasionMinor : Abrasion
				{
					b_g_mr
				};
				class AbrasionMedium : Abrasion
				{
					b_g_mm
				};
				class AbrasionLarge : Abrasion
				{
					b_g_le
				};
			class Avulsion : Abrasion 
			{
				b_g_mm
			};
				class AvulsionMinor : Avulsion
				{
					b_g_mr
				};
				class AvulsionMedium : Avulsion
				{
					b_g_mm
				};
				class AvulsionLarge : Avulsion
				{
					b_g_le
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
				b_g_mm
			};
				class CrushMinor : Crush
				{
					b_g_mr
				};
				class CrushMedium : Crush
				{
					b_g_mm
				};
				class CrushLarge : Crush
				{
					b_g_le
				};
			class Cut : Abrasion 
			{
				b_g_mm
			};
				class CutMinor : Cut
				{
					b_g_mr
				};
				class CutMedium : Cut
				{
					b_g_mm
				};
				class CutLarge : Cut
				{
					b_g_le
				};
			class Laceration : Abrasion 
			{
				b_g_mm
			};
				class LacerationMinor : Laceration
				{
					b_g_mr
				};
				class LacerationMedium : Laceration
				{
					b_g_mm
				};
				class LacerationLarge : Laceration
				{
					b_g_le
				};
			class VelocityWound : Abrasion 
			{
				b_g_mm
			};
				class VelocityWoundMinor : VelocityWound
				{
					b_g_mr
				};
				class VelocityWoundMedium : VelocityWound
				{
					b_g_mm
				};
				class VelocityWoundLarge : VelocityWound
				{
					b_g_le
				};
			class PunctureWound : Abrasion 
			{
				b_g_mm
			};
				class PunctureWoundMinor : PunctureWound
				{
					b_g_mr
				};
				class PunctureWoundMedium : PunctureWound
				{
					b_g_mm
				};
				class PunctureWoundLarge : PunctureWound
				{
					b_g_le
				};
		};
	};
};
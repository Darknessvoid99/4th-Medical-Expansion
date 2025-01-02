class ACE_Medical_Treatment_Actions  
{
	class BasicBandage;
	class checkPulse;
	class Carbonate;
	class Morphine;

	class Diagnose : BasicBandage
	{
		treatmentTime = 0;
	};

	class CheckDogtags : CheckPulse
	{
        treatmentTime = 0;
    };

	class Inspect : Carbonate
	{
        treatmentTime = 0;
    };

    class EACA : Carbonate
	{
        items[] = {"4medx_x_iv_eaca"};
    };

	class TXA : EACA
	{
        items[] = {"4medx_x_iv_txa"};
    };

    class Norepinephrine : EACA
	{
        items[] = {"4medx_x_iv_norepinephrine"};
    };

    class Phenylephrine : EACA
	{
        items[] = {"4medx_x_iv_phenylephrine"};
    };

	//class PhenylephrineAuto : Morphine
	//{
    //    treatmentTime = 5;
    //};

    class Nitroglycerin : EACA
	{
        items[] = {"4medx_x_iv_nitroglycerin"};
    };

    class Amiodarone : EACA
	{
        items[] = {"4medx_x_iv_amiodarone"};
    };

    class Lidocaine : EACA
	{
        items[] = {"4medx_x_iv_lidocaine"};
    };

    class Ketamine : EACA
	{
        items[] = {"4medx_x_iv_ketamine"};
    };

    class Fentanyl : EACA
	{
        items[] = {"4medx_x_iv_fentanyl"};
    };
    class Nalbuphine : EACA
	{
        items[] = {"4medx_x_iv_nalbuphine"};
    };

    class Etomidate : EACA
	{
        items[] = {"4medx_x_iv_etomidate"};
    };

    class Lorazepam : EACA
	{
        items[] = {"4medx_x_iv_lorazepam"};
    };

    class Flumazenil : EACA
	{
        items[] = {"4medx_x_iv_flumazenil"};
    };

    class EpinephrineIV : EACA
	{
        items[] = {"4medx_x_iv_epinephrine"};
    };

	class FieldDressing: BasicBandage
	{
        items[] = {"4medx_x_bd_fielddressing"};
    };

    class NPWT: BasicBandage
    {
        displayName = "Apply Trauma Kit";
        items[] = {"4medx_x_ex_traumakit"};
        treatmentTime = 15;
        consumeItem = 1;
    };
};
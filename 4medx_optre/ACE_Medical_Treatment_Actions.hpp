class ACE_Medical_Treatment_Actions  
{
	class BasicBandage;
    class OPTRE_Medigel : BasicBandage 
    {
        //medicRequired = 2;
        treatmentTime = 3;
        items[] = {"4medx_x_bd_medigel"};
        picture = "\4medx_optre\data\icon_medigel.paa";
    };
    class OPTRE_Biofoam : BasicBandage 
    {
        treatmentTime = 10;
        items[] = {"4medx_x_bd_biofoam"};
    };
};
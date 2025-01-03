class ACE_Medical_Treatment_Actions  
{
	class BasicBandage;
    
    class OPTRE_Biofoam : BasicBandage 
    {
        treatmentTime = 2;
        items[] = {"4medx_x_bd_biofoam"};
    };

    class OPTRE_Medigel : BasicBandage 
    {
        medicRequired = 1;
        treatmentTime = 4;
        items[] = {"4medx_x_bd_medigel"};
        picture = "\4medx_optre\data\icon_medigel.paa";
    };
};
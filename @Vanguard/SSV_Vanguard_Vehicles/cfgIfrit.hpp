    class O_MRAP_02_F;
	class O_MRAP_02_hmg_F;

	class SSV_Vehicle_Vanguard_Ifrit_Base : O_MRAP_02_F
	{
		side=2;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Vanguard";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		crew=CREW;
		typicalCargo[]=
		{
			TYPICAL_CREW
		};
	};

	class SSV_Vehicle_Vanguard_Ifrit_HMG_Base : O_MRAP_02_hmg_F
	{
		side=2;
		author="SSV";
		scope = 1;
	
		faction = "SSV_Aux_Vanguard";
		editorPreview = "\SSV_Android\previews\units\SSV_Unit_Redacted.jpg";
		crew=CREW;
		typicalCargo[]=
		{
			TYPICAL_CREW
		};
	};

	class SSV_Vehicle_Vanguard_Ifrit : SSV_Vehicle_Vanguard_Ifrit_Base
	{
		displayName = "Vanguard MRAP";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Vanguard_Vehicles\textures\ifrit\ifrit_1_co.paa",
			"SSV_Vanguard_Vehicles\textures\ifrit\ifrit_2_co.paa"
		};

		class TextureSources
		{
			class Vanguard
			{
				displayName="Vanguard";
				author="SSV";
				factions[]=
				{
					"SSV_Aux_Vanguard"
				};
				textures[]=
				{
                    "SSV_Vanguard_Vehicles\textures\ifrit\ifrit_1_co.paa",
                    "SSV_Vanguard_Vehicles\textures\ifrit\ifrit_2_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Vanguard",
			1
		};
	};

	class SSV_Vehicle_Vanguard_Ifrit_HMG : SSV_Vehicle_Vanguard_Ifrit_HMG_Base
	{
		displayName = "Vanguard MRAP (HMG)";
		scope = 2;

		hiddenSelectionsTextures[]=
		{
			"SSV_Vanguard_Vehicles\textures\ifrit\ifrit_1_co.paa",
			"SSV_Vanguard_Vehicles\textures\ifrit\ifrit_2_co.paa",
			"SSV_Vanguard_Vehicles\textures\ifrit\ifrit_3_co.paa"
		};

		class TextureSources
		{
			class Vanguard
			{
				displayName="Vanguard";
				author="SSV";
				factions[]=
				{
					"SSV_Aux_Vanguard"
				};
				textures[]=
				{
                    "SSV_Vanguard_Vehicles\textures\ifrit\ifrit_1_co.paa",
                    "SSV_Vanguard_Vehicles\textures\ifrit\ifrit_2_co.paa",
                    "SSV_Vanguard_Vehicles\textures\ifrit\ifrit_3_co.paa"
				};
			};
		};

		textureList[]=
		{
			"Vanguard",
			1
		};
	};
#define _ARMA_

//Class Equal_Islands : config.bin{
class CfgPatches
{
	class Equal_Islands
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		fileName = "Equal_Islands.pbo";
		author = "Horatio Caine/FedeTirach/Jesus Guirao/Alejandra Cuesta & PKE for PGS";
		requiredAddons[] = {"A3_Data_F","A3_Roads_F","A3_Structures_F","A3_Map_Data"};
	};
};

class CfgVehicles{};
class CfgWorlds
{
	class DefaultWorld
	{
		class Weather
		{
			class Overcast;
		};
		class WaterExPars;
	};
	class CAWorld: DefaultWorld
	{
		class Grid
		{
		};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class EnvSounds;
		class Weather: Weather
		{
			class Lighting;
			class Overcast: Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;
	class Equal_Islands: CAWorld
	{
		//access=3;
		worldId=5;
		cutscenes[]={};
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 2;
		description = "Equal Islands p0";
		icon="";
		worldName = "Equal_Islands\Equal_Islands.wrp";
		pictureMap = "\Equal_Islands\data\pictureMap_ca.paa";
		pictureShot = "\Equal_Islands\data\ui_pke_ca.paa";
		plateFormat = "A#$-####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		author = "Horatio Caine | Fede Tirach | Jesus Guirao | Alejandra Cuesta & PKE";
		mapsize = 10240;
		mapZone=31;
		longitude = 20;
		latitude = 0;
		envTexture="A3\data_f\env_land_ca.paa";
		newRoadsShape = "\Equal_Islands\data\roads\roads.shp";
		class OutsideTerrain
		{
			satellite="";
			enableTerrainSynth=0;
			class Layers
			{
				class Layer0
				{
					nopx="A3\Map_Data\gdt_seabed_nopx.paa";
					texture="A3\Map_Data\gdt_seabed_nopx.paa";
				};
			};
			colorOutside[]={0.227451,0.27451,0.384314,1};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 10240;
			class Zoom1
			{
				zoomMax = 0.35;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 1.00;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		startTime="07:30";
		startDate="01/01/20187";
		centerPosition[] = {5120,5120,500};
		seagullPos[] = {5120,5120,500};
		ilsPosition[] = {1024,1024};
		ilsDirection[] = {0.5075,0.08,-0.8616};
		ilsTaxiIn[] = {};
		ilsTaxiOff[] = {};
		drawTaxiway = 0;
		mapDrawingBrightnessModifier=1.5;
		elevationOffset=0;
		class EnvMaps
		{
			class EnvMap1
			{
				texture="A3\Map_Stratis\data\env_land_ClearSky_ca.paa";
				overcast=0;
			};
			class EnvMap2
			{
				texture="A3\Map_Stratis\data\env_land_SemiCloudySky_ca.paa";
				overcast=0;
			};
			class EnvMap3
			{
				texture="A3\Map_Stratis\data\env_land_OvercastSky_ca.paa";
				overcast=0;
			};
		};
		class ReplaceObjects
		{
		};
		class Sounds
		{
			sounds[]={};
		};
		class Animation
		{
			vehicles[]={};
		};
		
		midDetailTexture = "A3\Map_Data\middle_mco.paa";
		terrainBlendMaxDarkenCoef = 1.0;
		terrainBlendMaxBrightenCoef = 0.0;
		soundMapSizeCoef = 4;
		satelliteNormalBlendStart = 10;
		satelliteNormalBlendEnd = 100;
		clutterGrid = 0.8;
		clutterDist = 100;
		noDetailDist = 50;
		fullDetailDist = 5;
		clutterRoadwayCheckRadiusCoef = 0.8;
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = 5.0;
		clutterColoringFarStart = 20.0;
		clutterColoringFarSpeed = 2.0;
		skyObject="A3\Map_Stratis\data\obloha.p3d";
		horizontObject="A3\Map_Stratis\data\horizont.p3d";
		skyTexture="A3\Map_Stratis\data\sky_semicloudy_sky.paa";
		skyTextureR="A3\Map_Stratis\data\sky_semicloudy_lco.paa";
		class SecondaryAirports{};
		class DefaultClutter;
		class clutter
		{
			class c_GrassBunch_HI: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_GrassBunch_HI.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.3;
			};
			class c_GrassBunch_LO: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_GrassBunch_LO.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.65;
				scaleMax = 1.4;
			};
			class c_GrassTropic: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_Tropic.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.65;
				scaleMax = 1.4;
			};
			class c_Grass_nettle: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_nettle.p3d";
				affectedByWind = 0.2;
				swLighting = 0;
				scaleMin = 0.8;
				scaleMax = 1.6;
			};
			class c_Grass_Leaves_coltsfoot: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_Leaves_coltsfoot.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class c_Grass_mimosa: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_mimosa.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.4;
				scaleMax = 1.3;
			};
			class c_Grass_leaf_big: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_leaf_big.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class c_Grass_short_small: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_small.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.9;
			};
			class c_Grass_short_bunch: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_bunch.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.5;
			};
			class c_Grass_short_leaf: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_leaf.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.6;
			};
			class c_Grass_short_mimosa: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_mimosa.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.5;
			};
			class c_Grass_short_nettle: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_short_nettle.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.5;
			};
			class c_forest_BiglLeaves: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_BiglLeaves.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class c_forest_BiglLeaves2: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_BiglLeaves2.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class c_forest_fern: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_fern.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.8;
				scaleMax = 1.65;
			};
			class c_forest_roots: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_roots.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.4;
				scaleMax = 2.2;
			};
			class c_forest_violet_leaves: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_leaves.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.05;
			};
			class c_forest_violet_single: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_single.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.1;
			};
			class c_forest_violet_leaves2: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_leaves2.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.5;
				scaleMax = 1.15;
			};
			class c_red_dirt_leaves: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_leaves.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 1.0;
				scaleMax = 1.2;
			};
			class short_Grass: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_short_Grass.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.1;
				scaleMax = 1.9;
			};
			class sparse_Grass: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_sparse_Grass.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 1.25;
				scaleMax = 1.6;
			};
			class sparse_Grass2: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_sparse_Grass2.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.75;
			};
			class small_stones: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_small_stones.p3d";
				affectedByWind = 0.0;
				swLighting = 1;
				scaleMin = 0.3;
				scaleMax = 0.85;
			};
			class large_stones: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_large_stones.p3d";
				affectedByWind = 0.0;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.0;
			};
			class mimosa: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_mimosa.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.5;
			};
			class volcano_Grass: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_Grass.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 1.2;
				scaleMax = 1.5;
			};
			class volcano_GrassMix: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_GrassMix.p3d";
				affectedByWind = 0.05;
				swLighting = 0;
				scaleMin = 1.5;
				scaleMax = 1.6;
			};
			class volcano_GrassMix2: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_GrassMix2.p3d";
				affectedByWind = 0.05;
				swLighting = 0;
				scaleMin = 1.5;
				scaleMax = 1.6;
			};
			class volcano_stones: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_stones.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.5;
				scaleMax = 1.2;
			};
			class volcano_LargeStone: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Volcano\c_volcano_LargeStone.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.5;
				scaleMax = 1.4;
			};
			class rock_stones: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Cliff\c_rock_stones.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.2;
				scaleMax = 1.18;
			};
			class SeaWeed1Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_SeaWeed1_exp.p3d";
				affectedByWind = 0.2;
				swLighting = 0;
				scaleMin = 0.25;
				scaleMax = 1.0;
			};
			class SeaWeed2Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_SeaWeed2_exp.p3d";
				affectedByWind = 0.2;
				swLighting = 0;
				scaleMin = 0.2;
				scaleMax = 1.0;
			};
			class Coral1Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral1_exp.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral2Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral2_exp.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral3Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral3_exp.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral4Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral4_exp.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral5Exp: DefaultClutter
			{
				model = "A3\Vegetation_F_Exp\Clutter\Seabed\c_Coral5_exp.p3d";
				affectedByWind = 0.05;
				swLighting = 0;
				scaleMin = 0.2;
				scaleMax = 1.0;
			};
		};
		dynLightMinBrightnessAmbientCoef=0.5;
		dynLightMinBrightnessAbsolute=0.050000001;
		class Sea
		{
			seaTexture="a3\data_f\seatexture_co.paa";
			seaMaterial="#water";
			shoreMaterial="#shore";
			shoreFoamMaterial="#shorefoam";
			shoreWetMaterial="#shorewet";
			WaterMapScale=20;
			WaterGrid=50;
			MaxTide=0;
			MaxWave=0.25;
			SeaWaveXScale="2.0/50";
			SeaWaveZScale="1.0/50";
			SeaWaveHScale=1;
			SeaWaveXDuration=5000;
			SeaWaveZDuration=10000;
		};
		class Underwater
		{
			noWaterFog=-0.001;
			fullWaterFog=0.001;
			deepWaterFog=200;
			waterFogDistanceNear=10;
			waterFogDistance=40;
			waterColor[]={0.039999999,0.16,0.22};
			deepWaterColor[]={0,0.001,0.0089999996};
			surfaceColor[]={0.039999999,0.16,0.22};
			deepSurfaceColor[]={0,0.001,0.0089999996};
		};
		class SeaWaterShaderPars
		{
			refractionMoveCoef=0.029999999;
			minWaterOpacity=0;
			waterOpacityDistCoef=0.40000001;
			underwaterOpacity=0.5;
			waterOpacityFadeStart=60;
			waterOpacityFadeLength=120;
		};
		class WaterExPars: WaterExPars
		{
			fogDensity=0.07;
			fogColor[]={0.03015,0.071549997,0.090449996};
			fogColorExtinctionSpeed[]={0.1814,0.015900001,0.0111};
			ligtExtinctionSpeed[]={0.1814,0.015900001,0.0111};
			diffuseLigtExtinctionSpeed[]={0.38139999,0.2159,0.2111};
			fogGradientCoefs[]=
			{
				"0.35f",
				"1.0f",
				"1.7f"
			};
			fogColorLightInfluence[]={0.80000001,0.2,1};
			shadowIntensity="0.0f";
			ssReflectionStrength=0.85000002;
			ssReflectionMaxJitter=1;
			ssReflectionRippleInfluence=0.2;
			ssReflectionEdgeFadingCoef=10;
			ssReflectionDistFadingCoef=4;
			refractionMinCoef=0.029999999;
			refractionMaxCoef=0.14;
			refractionMaxDist=5.0999999;
			specularMaxIntensity=100;
			specularPowerOvercast0=750;
			specularPowerOvercast1=50;
			specularNormalModifyCoef=0.015;
			foamAroundObjectsIntensity="0.15f";
			foamAroundObjectsFadeCoef="8.0f";
			foamColorCoef="2.0f";
			foamDeformationCoef="0.02f";
			foamTextureCoef="0.2f";
			foamTimeMoveSpeed="0.2f";
			foamTimeMoveAmount="0.1f";
			shoreDarkeningMaxCoef="0.45f";
			shoreDarkeningOffset="0.36f";
			shoreDarkeningGradient="0.08f";
			shoreWaveTimeScale="0.8f";
			shoreWaveShifDerivativeOffset="-0.8f";
			shoreFoamIntensity="0.25f";
			shoreMaxWaveHeight="0.15f";
			shoreWetLayerReflectionIntensity="0.55f";
		};
		startWeather=0.30000001;
		startFog=0;
		forecastWeather=0.30000001;
		forecastFog=0;
		startFogBase=0;
		forecastFogBase=0;
		startFogDecay=0.014;
		forecastFogDecay=0.014;
		fogBeta0Min=0;
		fogBeta0Max=0.050000001;
		class HDRNewPars
		{
			minAperture=9.9999997e-006;
			maxAperture=256;
			apertureRatioMax=4;
			apertureRatioMin=10;
			bloomImageScale=1;
			bloomScale=0.090000004;
			bloomExponent=0.75;
			bloomLuminanceOffset=0.40000001;
			bloomLuminanceScale=0.15000001;
			bloomLuminanceExponent=0.25;
			tonemapMethod=1;
			tonemapShoulderStrength=0.22;
			tonemapLinearStrength=0.12;
			tonemapLinearAngle=0.1;
			tonemapToeStrength=0.2;
			tonemapToeNumerator=0.022;
			tonemapToeDenominator=0.2;
			tonemapLinearWhite=11.2;
			tonemapExposureBias=1;
			tonemapLinearWhiteReinhard="2.5f";
			eyeAdaptFactorLight=3.3;
			eyeAdaptFactorDark=0.75;
			nvgApertureMin=10;
			nvgApertureStandard=12.5;
			nvgApertureMax=16.5;
			nvgStandardAvgLum=10;
			nvgLightGain=320;
			nvgTransition=1;
			nvgTransitionCoefOn="40.0f";
			nvgTransitionCoefOff="0.01f";
			nightShiftMinAperture=0;
			nightShiftMaxAperture=0.0020000001;
			nightShiftMaxEffect=0.60000002;
			nightShiftLuminanceScale=600;
		};
		skyColorInfluencesFogColor=0;
		class Lighting: DefaultLighting
		{
			groundReflection[] = {0.132,0.133,0.122};
			moonObjectColorFull[] = {460,440,400,1.0};
			moonHaloObjectColorFull[] = {465,477,475,1.0};
			moonsetObjectColor[] = {375,350,325,1.0};
			moonsetHaloObjectColor[] = {515,517,525,1.0};
			class ThunderBoltLight
			{
				diffuse[] = {2120,3170,5550};
				ambient[] = {0.001,0.001,0.001};
				intensity = 120000;
				class Attenuation
				{
					start = 0.0;
					constant = 0.0;
					linear = 0.0;
					quadratic = 1.0;
				};
			};
			starEmissivity = 40;
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0.0,0.002,0.003},{0.0,0.0,0.0},{0.0,0.0,0.0},{0.0,0.002,0.003},{0.0,0.002,0.003},0};
			fullNight[] = {-5,{0.182,0.213,0.25},{0.05,0.111,0.221},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.082,0.128,0.185},{0.283,0.35,0.431},0};
			sunMoon[] = {-3.75,{0.377,0.441,0.518},{0.103,0.227,0.453},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.174,0.274,0.395},{0.582,0.72,0.887},0.5};
			earlySun[] = {-2.5,{0.675,0.69,0.784},{0.22,0.322,0.471},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.424,0.549,0.745},{0.698,0.753,0.894},1};
			sunrise[] = {0,{0.675,0.69,0.784},{0.478,0.51,0.659},{0.2,0.19,0.07},{0.124,0.161,0.236},{{0.847,0.855,0.965},0.2},{{0.933,0.949,0.996},2},1};
			earlyMorning[] = {3,{{0.844,0.61,0.469},0.8},{0.424,0.557,0.651},{{1,0.45,0.2},1},{0.12,0.26,0.38},{{0.428,0.579,0.743},2},{{0.844,0.61,0.469},2.7},1};
			midMorning[] = {8,{{0.822,0.75,0.646},3.8},{{0.383,0.58,0.858},1.3},{{1.3,0.9,0.61},2.8},{{0.12,0.18,0.28},0.5},{{0.322,0.478,0.675},3.5},{{1.0,0.929,0.815},4.7},1};
			morning[] = {16,{{1,0.95,0.91},12.2},{{0.12,0.18,0.28},9.2},{{1,0.95,0.91},11.2},{{0.12,0.18,0.28},8.5},{{0.14,0.18,0.24},11.0},{{0.5,0.6,0.9},13.2},1};
			noon[] = {45,{{0.98,0.94,0.94},13.8},{{0.2,0.27,0.35},10.8},{{0.98,0.94,0.94},13.8},{{0.2,0.27,0.35},10.8},{{0.5,0.64,1.0},12.0},{{0.5,0.5,0.5},14.8},1,0.5,0.4,0.5,0.4};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0.0,0.002,0.003},{0.0,0.0,0.0},{0.0,0.0,0.0},{0.0,0.002,0.003},{0.0,0.002,0.003},0};
			fullNight[] = {-5,{0.023,0.023,0.023},{0.02,0.02,0.02},{0.023,0.023,0.023},{0.02,0.02,0.02},{0.01,0.01,0.02},{0.08,0.06,0.06},0};
			sunMoon[] = {-3.75,{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.035,0.04},{0.11,0.08,0.09},0.5};
			earlySun[] = {-2.5,{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.08,0.07,0.08},{0.14,0.1,0.12},0.5};
			earlyMorning[] = {3,{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+4"},{{1,1,1},"(-4)+5.5"},1};
			morning[] = {16,{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+7"},{{1,1,1},"(-4)+8"},1};
			lateMorning[] = {25,{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+12"},{{1,1,1},"(-4)+12.75"},1};
			noon[] = {45,{{1,1,1},10.0},{{1,1,1},9.0},{{1,1,1},9.0},{{1,1,1},8.0},{{0.5,0.64,1},12.0},{{0.5,0.5,0.5},14.8},1};
		};
		class EnvSounds: EnvSounds
		{
			class Default
			{
				name = "$STR_CFG_ENVSOUNDS_DEFAULT";
				sound[] = {"$DEFAULT$",0,1};
				soundNight[] = {"$DEFAULT$",0,1};
			};
			class Rain
			{
				name = "$STR_DN_RAIN";
				sound[] = {"A3\Sounds_F\dummysound",0.25118864,1,200};
				soundNight[] = {"A3\Sounds_F\dummysound",0.31622776,1,200};
			};
			class Sea
			{
				name = "$STR_DN_SEA";
				sound[] = {"A3\Sounds_F\dummysound",0.08912509,1,200};
				soundNight[] = {"A3\Sounds_F\dummysound",0.070794575,1,200};
				volume = "sea*(1-coast)";
			};
			class Coast
			{
				name = "$STR_A3_CfgEnvSounds_Coast0";
				sound[] = {"A3\Sounds_F\dummysound",0.08912509,1,200};
				soundNight[] = {"A3\Sounds_F\dummysound",0.05623413,1,200};
				volume = "coast";
			};
			class WindSlow
			{
				name = "$STR_A3_CfgEnvSounds_WindSlow0";
				sound[] = {"A3\Sounds_F\dummysound",0.019952621,1};
				volume = "((windy factor[0,0.25])*(windy factor[0.5, 0.25]))-(night*0.25)";
			};
			class WindMedium
			{
				name = "$STR_A3_CfgEnvSounds_WindMedium0";
				sound[] = {"A3\Sounds_F\dummysound",0.025118863,1};
				volume = "((windy factor[0.33,0.5])*(windy factor[0.8, 0.5]))-(night*0.25)";
			};
			class WindFast
			{
				name = "$STR_A3_CfgEnvSounds_WindFast0";
				sound[] = {"A3\Sounds_F\dummysound",0.031622775,1};
				volume = "(windy factor[0.66,1])-(night*0.25)";
			};
			class Forest
			{
				name = "$STR_A3_CfgEnvSounds_Forest0";
				sound[] = {"A3\Sounds_F\dummysound",0.017782792,1};
				volume = "forest*trees*(1-night)";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,12,100,0.1,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,12,100,0.1,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,12,100,0.1,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,12,100,0.1,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.05623413,1,80,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.031622775,1,20,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,40,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,50,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class ForestNight
			{
				name = "$STR_A3_CfgEnvSounds_ForestNight0";
				sound[] = {"A3\Sounds_F\dummysound",0.011220184,1};
				volume = "forest*trees*night";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,70,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,10,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,40,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,30,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class Houses
			{
				name = "$STR_A3_CfgEnvSounds_Houses0";
				sound[] = {"A3\Sounds_F\dummysound",0.01584893,1};
				volume = "(houses-0.75)*4";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,100,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,15,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,25,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class HousesNight
			{
				name = "$STR_A3_CfgEnvSounds_HousesNight0";
				sound[] = {"A3\Sounds_F\dummysound",0.014125374,1};
				volume = "(houses-0.75)*4*night";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,80,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,80,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,15,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,15,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,30,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class Meadows
			{
				name = "$STR_A3_CfgEnvSounds_Meadows0";
				sound[] = {"A3\Sounds_F\dummysound",0.01584893,1};
				volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.06309573,1,70,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.06309573,1,100,0.12,15,25,30};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.06309573,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.06309573,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,100,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class MeadowsNight
			{
				name = "$STR_A3_CfgEnvSounds_MeadowsNight0";
				sound[] = {"A3\Sounds_F\dummysound",0.011220184,1};
				volume = "(1-forest)*(1-houses)*night*(1-sea)";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.099999994,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.05623413,1,80,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.031622775,1,80,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.05623413,1,20,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class BattlefieldExplosions
			{
				sound0[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				sound1[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				sound2[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				sound3[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				sound4[] = {"A3\Sounds_F\dummysound",0.31622776,1.0,1000,0.2,5,10,15};
				random[] = {"sound0","sound1","sound2","sound3","sound4"};
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
			};
			class BattlefieldExplosions1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldExplosions2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldExplosions3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldExplosions4
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldExplosions5
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldFirefight1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldFirefight2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldFirefight3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldFirefight4
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldHeli1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldHeli2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldHeli3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldJet1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldJet2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class BattlefieldJet3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.31622776,1.0};
				titles[] = {};
			};
			class Earthquake_01
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.1622777,1.0};
				name = "$STR_A3_SOUNDS_EARTHQUAKE1";
				titles[] = {};
			};
			class Earthquake_02
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.1622777,1.0};
				name = "$STR_A3_SOUNDS_EARTHQUAKE2";
				titles[] = {};
			};
			class Earthquake_03
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.1622777,1.0};
				name = "$STR_A3_SOUNDS_EARTHQUAKE3";
				titles[] = {};
			};
			class Earthquake_04
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.1622777,1.0};
				name = "$STR_A3_SOUNDS_EARTHQUAKE4";
				titles[] = {};
			};
		};
		class Weather: Weather
		{
			class LightingNew
			{
				class Lighting0
				{
					height=0;
					overcast=0.25;
					sunAngle=-24;
					sunOrMoon=0;
					diffuse[]=
					{
						{0.14,0.19,0.30000001},
						4
					};
					diffuseCloud[]=
					{
						{0.14,0.19,0.30000001},
						0.2
					};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.050000001
					};
					ambientMid[]=
					{
						{0.1384,0.1912,0.29840001},
						0.88
					};
					ambientMidCloud[]=
					{
						{0.1384,0.1912,0.29840001},
						0.044
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.042240001
					};
					bidirect[]={0.025,0.025,0.023};
					bidirectCloud[]={0.0125,0.0125,0.0115};
					sky[]={0.23100001,0.31400001,0.46700001};
					skyAroundSun[]={0.2,0.25,0.44999999};
					fogColor[]=
					{
						{0.090000004,0.13699999,0.22},
						0.025
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{0.5,0.64999998,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting1
				{
					height=0;
					overcast=0.25;
					sunAngle=-12;
					sunOrMoon=0;
					diffuse[]={0.1,0.18000001,0.30000001};
					diffuseCloud[]={0.1,0.18000001,0.30000001};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientMid[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					ambientMidCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0.212,0.30199999,0.50999999},
						1
					};
					skyAroundSun[]={0.2,0.25,0.44999999};
					fogColor[]=
					{
						{0.093999997,0.141,0.23100001},
						0.025
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting2
				{
					height=0;
					overcast=0.25;
					sunAngle=-11;
					sunOrMoon=0.5;
					diffuse[]={0.1,0.18000001,0.30000001};
					diffuseCloud[]={0.1,0.18000001,0.30000001};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientMid[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					ambientMidCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0.212,0.30199999,0.50999999},
						1
					};
					skyAroundSun[]={0.2,0.25,0.44999999};
					fogColor[]=
					{
						{0.093999997,0.141,0.23100001},
						0.025
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting3
				{
					height=0;
					overcast=0.25;
					sunAngle=-10;
					sunOrMoon=1;
					diffuse[]={0.1,0.18000001,0.30000001};
					diffuseCloud[]={0.1,0.18000001,0.30000001};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientMid[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					ambientMidCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0.212,0.30199999,0.50999999},
						1
					};
					skyAroundSun[]=
					{
						{0.2,0.25,0.44999999},
						4.7349081
					};
					fogColor[]=
					{
						{0.093999997,0.141,0.23100001},
						0.025
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting4
				{
					height=0;
					overcast=0.25;
					sunAngle=-5;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.16,0.18000001,0.28},
						3
					};
					diffuseCloud[]=
					{
						{0.16,0.18000001,0.28},
						3
					};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						4.5999999
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						4.5999999
					};
					ambientMid[]=
					{
						{0.17299999,0.23899999,0.373},
						4.0479999
					};
					ambientMidCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						4.0479999
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						3.88608
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						3.88608
					};
					bidirect[]={0.0115,0.012,0.0125};
					bidirectCloud[]={0.0115,0.012,0.0125};
					sky[]=
					{
						{0.2,0.29800001,0.54100001},
						4.5999999
					};
					skyAroundSun[]=
					{
						{0.69999999,0.34999999,0.28},
						7.6369491
					};
					fogColor[]=
					{
						{0.106,0.161,0.26699999},
						4.7150002
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting5
				{
					height=0;
					overcast=0.25;
					sunAngle=-2;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.25,0.20999999,0.2},
						5
					};
					diffuseCloud[]=
					{
						{0.25,0.20999999,0.2},
						5
					};
					ambient[]=
					{
						{0.19599999,0.27500001,0.41999999},
						6.9000001
					};
					ambientCloud[]=
					{
						{0.19599999,0.27500001,0.41999999},
						6.9000001
					};
					ambientMid[]=
					{
						{0.19599999,0.27500001,0.41999999},
						6.072
					};
					ambientMidCloud[]=
					{
						{0.19599999,0.27500001,0.41999999},
						6.072
					};
					groundReflection[]=
					{
						{0.19599999,0.27500001,0.41999999},
						5.8291202
					};
					groundReflectionCloud[]=
					{
						{0.19599999,0.27500001,0.41999999},
						5.8291202
					};
					bidirect[]={0.023,0.024,0.025};
					bidirectCloud[]={0.023,0.024,0.025};
					sky[]=
					{
						{0.18799999,0.28999999,0.57599998},
						6.9000001
					};
					skyAroundSun[]=
					{
						{1.8,0.41999999,0.2},
						12.31766
					};
					fogColor[]=
					{
						{0.11,0.169,0.28600001},
						7.0725002
					};
					apertureMin=7;
					apertureStandard=8;
					apertureMax=20;
					standardAvgLum=20;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting6
				{
					height=0;
					overcast=0.25;
					sunAngle=0;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.75,0.38,0.22},
						6
					};
					diffuseCloud[]=
					{
						{0.75,0.38,0.22},
						6
					};
					ambient[]=
					{
						{0.24969999,0.31,0.46700001},
						7.8000002
					};
					ambientCloud[]=
					{
						{0.24969999,0.31,0.46700001},
						7.8000002
					};
					ambientMid[]=
					{
						{0.25409999,0.31400001,0.46700001},
						6.8639998
					};
					ambientMidCloud[]=
					{
						{0.25409999,0.31400001,0.46700001},
						6.8639998
					};
					groundReflection[]=
					{
						{0.235,0.31799999,0.46700001},
						6.5894399
					};
					groundReflectionCloud[]=
					{
						{0.235,0.31799999,0.46700001},
						6.5894399
					};
					bidirect[]={0.023,0.024,0.025};
					bidirectCloud[]={0.023,0.024,0.025};
					sky[]=
					{
						{0.17299999,0.28200001,0.61199999},
						7.8000002
					};
					skyAroundSun[]=
					{
						{2,0.41999999,0.2},
						13.38876
					};
					fogColor[]=
					{
						{0.118,0.18000001,0.31},
						7.9949999
					};
					apertureMin=8;
					apertureStandard=9;
					apertureMax=22;
					standardAvgLum=45;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting7
				{
					height=0;
					overcast=0.25;
					sunAngle=2;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.94999999,0.41999999,0.22},
						8.3999996
					};
					diffuseCloud[]=
					{
						{0.94999999,0.41999999,0.22},
						8.3999996
					};
					ambient[]=
					{
						{0.30599999,0.35699999,0.463},
						8.3999996
					};
					ambientCloud[]=
					{
						{0.30599999,0.35699999,0.463},
						8.3999996
					};
					ambientMid[]=
					{
						{0.36500001,0.361,0.396},
						7.3920002
					};
					ambientMidCloud[]=
					{
						{0.36500001,0.361,0.396},
						7.3920002
					};
					groundReflection[]=
					{
						{0.41600001,0.38,0.38800001},
						7.0963202
					};
					groundReflectionCloud[]=
					{
						{0.41600001,0.38,0.38800001},
						7.0963202
					};
					bidirect[]={0.023,0.024,0.025};
					bidirectCloud[]={0.023,0.024,0.025};
					sky[]=
					{
						{0.15700001,0.27500001,0.65100002},
						8.3999996
					};
					skyAroundSun[]=
					{
						{2.2,0.80000001,0.2},
						13.38876
					};
					fogColor[]=
					{
						{0.125,0.192,0.329},
						8.6099997
					};
					apertureMin=8;
					apertureStandard=10;
					apertureMax=24;
					standardAvgLum=50;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting8
				{
					height=0;
					overcast=0.25;
					sunAngle=6;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.94999999,0.55000001,0.34999999},
						10.2
					};
					diffuseCloud[]=
					{
						{0.94999999,0.55000001,0.34999999},
						10.2
					};
					ambient[]=
					{
						{0.33700001,0.40400001,0.52499998},
						9.6000004
					};
					ambientCloud[]=
					{
						{0.33700001,0.40400001,0.52499998},
						9.6000004
					};
					ambientMid[]=
					{
						{0.412,0.40799999,0.44299999},
						8.448
					};
					ambientMidCloud[]=
					{
						{0.412,0.40799999,0.44299999},
						8.448
					};
					groundReflection[]=
					{
						{0.47499999,0.435,0.43099999},
						8.1100798
					};
					groundReflectionCloud[]=
					{
						{0.47499999,0.435,0.43099999},
						8.1100798
					};
					bidirect[]={0.01375,0.0132,0.01265};
					bidirectCloud[]={0.01375,0.0132,0.01265};
					sky[]=
					{
						{0.145,0.26300001,0.68599999},
						9.6000004
					};
					skyAroundSun[]=
					{
						{0.40000001,0.31999999,0.60000002},
						13.38876
					};
					fogColor[]=
					{
						{0.133,0.204,0.35699999},
						9.8400002
					};
					apertureMin=8;
					apertureStandard=16;
					apertureMax=26;
					standardAvgLum=100;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.027000001,0.045000002};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting9
				{
					height=0;
					overcast=0.25;
					sunAngle=12;
					sunOrMoon=1;
					diffuse[]=
					{
						{1,0.64999998,0.44999999},
						12.3
					};
					diffuseCloud[]=
					{
						{1,0.64999998,0.44999999},
						12.3
					};
					ambient[]=
					{
						{0.38800001,0.47099999,0.61199999},
						10.9
					};
					ambientCloud[]=
					{
						{0.38800001,0.47099999,0.61199999},
						10.9
					};
					ambientMid[]=
					{
						{0.48199999,0.47499999,0.50599998},
						9.8100004
					};
					ambientMidCloud[]=
					{
						{0.48199999,0.47499999,0.50599998},
						9.8100004
					};
					groundReflection[]=
					{
						{0.55699998,0.50999999,0.49399999},
						9.4175997
					};
					groundReflectionCloud[]=
					{
						{0.55699998,0.50999999,0.49399999},
						9.4175997
					};
					bidirect[]={0.018750001,0.017999999,0.01725};
					bidirectCloud[]={0.018750001,0.017999999,0.01725};
					sky[]=
					{
						{0.12899999,0.259,0.722},
						10.9
					};
					skyAroundSun[]=
					{
						{0.13,0.25,0.80000001},
						13.524
					};
					fogColor[]=
					{
						{0.145,0.22400001,0.396},
						11.1725
					};
					apertureMin=20;
					apertureStandard=25;
					apertureMax=35;
					standardAvgLum=250;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.017999999,0.039999999};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						12.24
					};
					swBrightness=1;
				};
				class Lighting10
				{
					height=0;
					overcast=0.25;
					sunAngle=24;
					sunOrMoon=1;
					diffuse[]=
					{
						{1,0.75,0.62},
						15.8
					};
					diffuseCloud[]=
					{
						{1,0.75,0.62},
						15.8
					};
					ambient[]=
					{
						{0.435,0.53299999,0.69800001},
						13.8
					};
					ambientCloud[]=
					{
						{0.435,0.53299999,0.69800001},
						13.8
					};
					ambientMid[]=
					{
						{0.54500002,0.54100001,0.56900001},
						12.696
					};
					ambientMidCloud[]=
					{
						{0.54500002,0.54100001,0.56900001},
						12.696
					};
					groundReflection[]=
					{
						{0.63499999,0.57999998,0.55699998},
						12.18816
					};
					groundReflectionCloud[]=
					{
						{0.63499999,0.57999998,0.55699998},
						12.18816
					};
					bidirect[]={0.025,0.024,0.017999999};
					bidirectCloud[]={0.025,0.024,0.017999999};
					sky[]=
					{
						{0.118,0.25099999,0.75300002},
						13.8
					};
					skyAroundSun[]=
					{
						{0.115,0.245,0.80000001},
						13.662
					};
					fogColor[]=
					{
						{0.15000001,0.25099999,0.48800001},
						14.145
					};
					apertureMin=45;
					apertureStandard=60;
					apertureMax=80;
					standardAvgLum=800;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.4
					};
					swBrightness=1;
				};
				class Lighting11
				{
					height=0;
					overcast=0.25;
					sunAngle=45;
					sunOrMoon=1;
					diffuse[]=
					{
						{1,0.87,0.85000002},
						17.200001
					};
					diffuseCloud[]=
					{
						{1,0.87,0.85000002},
						17.200001
					};
					ambient[]=
					{
						{0.498,0.602,0.76999998},
						14.8
					};
					ambientCloud[]=
					{
						{0.498,0.602,0.76999998},
						14.8
					};
					ambientMid[]=
					{
						{0.63499999,0.63499999,0.66299999},
						14.504
					};
					ambientMidCloud[]=
					{
						{0.63499999,0.63499999,0.66299999},
						14.504
					};
					groundReflection[]=
					{
						{0.745,0.671,0.64300001},
						14.21392
					};
					groundReflectionCloud[]=
					{
						{0.745,0.671,0.64300001},
						14.21392
					};
					bidirect[]={0.025,0.024,0.017999999};
					bidirectCloud[]={0.025,0.024,0.017999999};
					sky[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					skyAroundSun[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					fogColor[]=
					{
						{0.30000001,0.44,0.74000001},
						15
					};
					apertureMin=70;
					apertureStandard=120;
					apertureMax=120;
					standardAvgLum=8000;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.8
					};
					swBrightness=1;
				};
				class Lighting12
				{
					height=0;
					overcast=0.25;
					sunAngle=90;
					sunOrMoon=1;
					diffuse[]=
					{
						{1,0.87,0.85000002},
						17.200001
					};
					diffuseCloud[]=
					{
						{1,0.87,0.85000002},
						17.200001
					};
					ambient[]=
					{
						{0.498,0.602,0.76999998},
						14.8
					};
					ambientCloud[]=
					{
						{0.498,0.602,0.76999998},
						14.8
					};
					ambientMid[]=
					{
						{0.63499999,0.63499999,0.66299999},
						14.504
					};
					ambientMidCloud[]=
					{
						{0.63499999,0.63499999,0.66299999},
						14.504
					};
					groundReflection[]=
					{
						{0.745,0.671,0.64300001},
						14.21392
					};
					groundReflectionCloud[]=
					{
						{0.745,0.671,0.64300001},
						14.21392
					};
					bidirect[]={0.025,0.024,0.017999999};
					bidirectCloud[]={0.025,0.024,0.017999999};
					sky[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					skyAroundSun[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					fogColor[]=
					{
						{0.30000001,0.44,0.74000001},
						15
					};
					apertureMin=70;
					apertureStandard=120;
					apertureMax=120;
					standardAvgLum=8000;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.8
					};
					swBrightness=1;
				};
				class Lighting13
				{
					height=0;
					overcast=0.60000002;
					sunAngle=-24;
					sunOrMoon=0;
					diffuse[]=
					{
						{0.14,0.19,0.30000001},
						4
					};
					diffuseCloud[]=
					{
						{0.14,0.19,0.30000001},
						3
					};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientMid[]=
					{
						{0.1384,0.1912,0.29840001},
						0.88
					};
					ambientMidCloud[]=
					{
						{0.1384,0.1912,0.29840001},
						0.88
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					bidirect[]={0.025,0.025,0.023};
					bidirectCloud[]={0.024499999,0.024499999,0.022539999};
					sky[]={0.23100001,0.31400001,0.46700001};
					skyAroundSun[]={0.2,0.25,0.44999999};
					fogColor[]=
					{
						{0.090000004,0.13699999,0.22},
						0.025
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{0.5,0.64999998,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting14
				{
					height=0;
					overcast=0.60000002;
					sunAngle=-12;
					sunOrMoon=0;
					diffuse[]={0.1,0.18000001,0.30000001};
					diffuseCloud[]={0.1,0.18000001,0.30000001};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientMid[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					ambientMidCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0.212,0.30199999,0.50999999},
						1
					};
					skyAroundSun[]={0.2,0.25,0.44999999};
					fogColor[]=
					{
						{0.093999997,0.141,0.23100001},
						0.025
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting15
				{
					height=0;
					overcast=0.60000002;
					sunAngle=-11;
					sunOrMoon=0.5;
					diffuse[]={0.1,0.18000001,0.30000001};
					diffuseCloud[]={0.1,0.18000001,0.30000001};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientMid[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					ambientMidCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0.212,0.30199999,0.50999999},
						1
					};
					skyAroundSun[]={0.2,0.25,0.44999999};
					fogColor[]=
					{
						{0.093999997,0.141,0.23100001},
						0.025
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting16
				{
					height=0;
					overcast=0.60000002;
					sunAngle=-10;
					sunOrMoon=1;
					diffuse[]={0.1,0.18000001,0.30000001};
					diffuseCloud[]={0.1,0.18000001,0.30000001};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						1
					};
					ambientMid[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					ambientMidCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.88
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8448
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0.212,0.30199999,0.50999999},
						1
					};
					skyAroundSun[]=
					{
						{0.2,0.25,0.44999999},
						4.7349081
					};
					fogColor[]=
					{
						{0.093999997,0.141,0.23100001},
						0.025
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting17
				{
					height=0;
					overcast=0.60000002;
					sunAngle=-5;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.16,0.18000001,0.28},
						2.25
					};
					diffuseCloud[]=
					{
						{0.16,0.18000001,0.28},
						1.6875
					};
					ambient[]=
					{
						{0.17299999,0.23899999,0.373},
						4.5999999
					};
					ambientCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						4.5999999
					};
					ambientMid[]=
					{
						{0.17299999,0.23899999,0.373},
						4.0479999
					};
					ambientMidCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						4.0479999
					};
					groundReflection[]=
					{
						{0.17299999,0.23899999,0.373},
						3.88608
					};
					groundReflectionCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						3.88608
					};
					bidirect[]={0.0115,0.012,0.0125};
					bidirectCloud[]={0.01127,0.01176,0.01225};
					sky[]=
					{
						{0.2,0.29800001,0.54100001},
						4.5999999
					};
					skyAroundSun[]=
					{
						{0.69999999,0.34999999,0.28},
						7.6369491
					};
					fogColor[]=
					{
						{0.106,0.161,0.26699999},
						4.7150002
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting18
				{
					height=0;
					overcast=0.60000002;
					sunAngle=-2;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.25,0.20999999,0.2},
						3.75
					};
					diffuseCloud[]=
					{
						{0.25,0.20999999,0.2},
						2.8125
					};
					ambient[]=
					{
						{0.19599999,0.27500001,0.41999999},
						6.9000001
					};
					ambientCloud[]=
					{
						{0.19599999,0.27500001,0.41999999},
						6.9000001
					};
					ambientMid[]=
					{
						{0.19599999,0.27500001,0.41999999},
						6.072
					};
					ambientMidCloud[]=
					{
						{0.19599999,0.27500001,0.41999999},
						6.072
					};
					groundReflection[]=
					{
						{0.19599999,0.27500001,0.41999999},
						5.8291202
					};
					groundReflectionCloud[]=
					{
						{0.19599999,0.27500001,0.41999999},
						5.8291202
					};
					bidirect[]={0.023,0.024,0.025};
					bidirectCloud[]={0.023,0.024,0.025};
					sky[]=
					{
						{0.18799999,0.28999999,0.57599998},
						6.9000001
					};
					skyAroundSun[]=
					{
						{1.8,0.41999999,0.2},
						12.31766
					};
					fogColor[]=
					{
						{0.11,0.169,0.28600001},
						7.0725002
					};
					apertureMin=7;
					apertureStandard=8;
					apertureMax=20;
					standardAvgLum=20;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting19
				{
					height=0;
					overcast=0.60000002;
					sunAngle=0;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.75,0.38,0.22},
						4.5
					};
					diffuseCloud[]=
					{
						{0.75,0.38,0.22},
						3.375
					};
					ambient[]=
					{
						{0.24969999,0.31,0.46700001},
						7.8000002
					};
					ambientCloud[]=
					{
						{0.24969999,0.31,0.46700001},
						7.8000002
					};
					ambientMid[]=
					{
						{0.25409999,0.31400001,0.46700001},
						6.8639998
					};
					ambientMidCloud[]=
					{
						{0.25409999,0.31400001,0.46700001},
						6.8639998
					};
					groundReflection[]=
					{
						{0.235,0.31799999,0.46700001},
						6.5894399
					};
					groundReflectionCloud[]=
					{
						{0.235,0.31799999,0.46700001},
						6.5894399
					};
					bidirect[]={0.023,0.024,0.025};
					bidirectCloud[]={0.023,0.024,0.025};
					sky[]=
					{
						{0.17299999,0.28200001,0.61199999},
						7.8000002
					};
					skyAroundSun[]=
					{
						{2,0.41999999,0.2},
						13.38876
					};
					fogColor[]=
					{
						{0.118,0.18000001,0.31},
						7.9949999
					};
					apertureMin=8;
					apertureStandard=9;
					apertureMax=22;
					standardAvgLum=45;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting20
				{
					height=0;
					overcast=0.60000002;
					sunAngle=2;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.94999999,0.41999999,0.22},
						6.7199998
					};
					diffuseCloud[]=
					{
						{0.94999999,0.41999999,0.22},
						5.04
					};
					ambient[]=
					{
						{0.30599999,0.35699999,0.463},
						8.3999996
					};
					ambientCloud[]=
					{
						{0.30599999,0.35699999,0.463},
						8.3999996
					};
					ambientMid[]=
					{
						{0.36500001,0.361,0.396},
						7.3920002
					};
					ambientMidCloud[]=
					{
						{0.36500001,0.361,0.396},
						7.3920002
					};
					groundReflection[]=
					{
						{0.41600001,0.38,0.38800001},
						7.0963202
					};
					groundReflectionCloud[]=
					{
						{0.41600001,0.38,0.38800001},
						7.0963202
					};
					bidirect[]={0.023,0.024,0.025};
					bidirectCloud[]={0.023,0.024,0.025};
					sky[]=
					{
						{0.15700001,0.27500001,0.65100002},
						8.3999996
					};
					skyAroundSun[]=
					{
						{2.2,0.80000001,0.2},
						13.38876
					};
					fogColor[]=
					{
						{0.125,0.192,0.329},
						8.6099997
					};
					apertureMin=8;
					apertureStandard=10;
					apertureMax=24;
					standardAvgLum=50;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting21
				{
					height=0;
					overcast=0.60000002;
					sunAngle=6;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.94999999,0.55000001,0.34999999},
						10.2
					};
					diffuseCloud[]=
					{
						{0.94999999,0.55000001,0.34999999},
						7.6500001
					};
					ambient[]=
					{
						{0.33700001,0.40400001,0.52499998},
						9.6000004
					};
					ambientCloud[]=
					{
						{0.33700001,0.40400001,0.52499998},
						9.6000004
					};
					ambientMid[]=
					{
						{0.412,0.40799999,0.44299999},
						8.448
					};
					ambientMidCloud[]=
					{
						{0.412,0.40799999,0.44299999},
						8.448
					};
					groundReflection[]=
					{
						{0.47499999,0.435,0.43099999},
						8.1100798
					};
					groundReflectionCloud[]=
					{
						{0.47499999,0.435,0.43099999},
						8.1100798
					};
					bidirect[]={0.01375,0.0132,0.01265};
					bidirectCloud[]={0.01375,0.0132,0.01265};
					sky[]=
					{
						{0.145,0.26300001,0.68599999},
						9.6000004
					};
					skyAroundSun[]=
					{
						{0.40000001,0.31999999,0.60000002},
						13.38876
					};
					fogColor[]=
					{
						{0.133,0.204,0.35699999},
						9.8400002
					};
					apertureMin=8;
					apertureStandard=16;
					apertureMax=26;
					standardAvgLum=100;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.027000001,0.045000002};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting22
				{
					height=0;
					overcast=0.60000002;
					sunAngle=12;
					sunOrMoon=1;
					diffuse[]=
					{
						{1,0.64999998,0.44999999},
						12.3
					};
					diffuseCloud[]=
					{
						{1,0.64999998,0.44999999},
						9.2250004
					};
					ambient[]=
					{
						{0.38800001,0.47099999,0.61199999},
						10.9
					};
					ambientCloud[]=
					{
						{0.38800001,0.47099999,0.61199999},
						10.9
					};
					ambientMid[]=
					{
						{0.48199999,0.47499999,0.50599998},
						9.8100004
					};
					ambientMidCloud[]=
					{
						{0.48199999,0.47499999,0.50599998},
						9.8100004
					};
					groundReflection[]=
					{
						{0.55699998,0.50999999,0.49399999},
						9.4175997
					};
					groundReflectionCloud[]=
					{
						{0.55699998,0.50999999,0.49399999},
						9.4175997
					};
					bidirect[]={0.018750001,0.017999999,0.01725};
					bidirectCloud[]={0.018750001,0.017999999,0.01725};
					sky[]=
					{
						{0.12899999,0.259,0.722},
						10.9
					};
					skyAroundSun[]=
					{
						{0.13,0.25,0.80000001},
						13.524
					};
					fogColor[]=
					{
						{0.145,0.22400001,0.396},
						11.1725
					};
					apertureMin=20;
					apertureStandard=25;
					apertureMax=35;
					standardAvgLum=250;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.017999999,0.039999999};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						12.24
					};
					swBrightness=1;
				};
				class Lighting23
				{
					height=0;
					overcast=0.60000002;
					sunAngle=24;
					sunOrMoon=1;
					diffuse[]=
					{
						{1,0.75,0.62},
						15.8
					};
					diffuseCloud[]=
					{
						{1,0.75,0.62},
						11.85
					};
					ambient[]=
					{
						{0.435,0.53299999,0.69800001},
						13.8
					};
					ambientCloud[]=
					{
						{0.435,0.53299999,0.69800001},
						13.8
					};
					ambientMid[]=
					{
						{0.54500002,0.54100001,0.56900001},
						12.696
					};
					ambientMidCloud[]=
					{
						{0.54500002,0.54100001,0.56900001},
						12.696
					};
					groundReflection[]=
					{
						{0.63499999,0.57999998,0.55699998},
						12.18816
					};
					groundReflectionCloud[]=
					{
						{0.63499999,0.57999998,0.55699998},
						12.18816
					};
					bidirect[]={0.025,0.024,0.017999999};
					bidirectCloud[]={0.025,0.024,0.017999999};
					sky[]=
					{
						{0.118,0.25099999,0.75300002},
						13.8
					};
					skyAroundSun[]=
					{
						{0.115,0.245,0.80000001},
						13.662
					};
					fogColor[]=
					{
						{0.15000001,0.25099999,0.48800001},
						14.145
					};
					apertureMin=45;
					apertureStandard=60;
					apertureMax=80;
					standardAvgLum=800;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.4
					};
					swBrightness=1;
				};
				class Lighting24
				{
					height=0;
					overcast=0.60000002;
					sunAngle=45;
					sunOrMoon=1;
					diffuse[]=
					{
						{1,0.87,0.85000002},
						17
					};
					diffuseCloud[]=
					{
						{1,0.87,0.85000002},
						12.75
					};
					ambient[]=
					{
						{0.498,0.602,0.76999998},
						14.8
					};
					ambientCloud[]=
					{
						{0.498,0.602,0.76999998},
						14.8
					};
					ambientMid[]=
					{
						{0.63499999,0.63499999,0.66299999},
						13.616
					};
					ambientMidCloud[]=
					{
						{0.63499999,0.63499999,0.66299999},
						13.616
					};
					groundReflection[]=
					{
						{0.745,0.671,0.64300001},
						14.21392
					};
					groundReflectionCloud[]=
					{
						{0.745,0.671,0.64300001},
						14.21392
					};
					bidirect[]={0.025,0.024,0.017999999};
					bidirectCloud[]={0.025,0.024,0.017999999};
					sky[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					skyAroundSun[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					fogColor[]=
					{
						{0.30000001,0.44,0.74000001},
						13.9564
					};
					apertureMin=70;
					apertureStandard=120;
					apertureMax=120;
					standardAvgLum=8000;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.8
					};
					swBrightness=1;
				};
				class Lighting25
				{
					height=0;
					overcast=0.60000002;
					sunAngle=90;
					sunOrMoon=1;
					diffuse[]=
					{
						{1,0.87,0.85000002},
						17
					};
					diffuseCloud[]=
					{
						{1,0.87,0.85000002},
						13.94
					};
					ambient[]=
					{
						{0.498,0.602,0.76999998},
						14.8
					};
					ambientCloud[]=
					{
						{0.498,0.602,0.76999998},
						14.8
					};
					ambientMid[]=
					{
						{0.63499999,0.63499999,0.66299999},
						14.504
					};
					ambientMidCloud[]=
					{
						{0.63499999,0.63499999,0.66299999},
						14.504
					};
					groundReflection[]=
					{
						{0.745,0.671,0.64300001},
						14.21392
					};
					groundReflectionCloud[]=
					{
						{0.745,0.671,0.64300001},
						14.21392
					};
					bidirect[]={0.025,0.024,0.017999999};
					bidirectCloud[]={0.025,0.024,0.017999999};
					sky[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					skyAroundSun[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					fogColor[]=
					{
						{0.30000001,0.44,0.74000001},
						15
					};
					apertureMin=70;
					apertureStandard=120;
					apertureMax=120;
					standardAvgLum=8000;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.8
					};
					swBrightness=1;
				};
				class Lighting26
				{
					height=0;
					overcast=0.85000002;
					sunAngle=-24;
					sunOrMoon=0;
					diffuse[]=
					{
						{0.090000004,0.13699999,0.22},
						1
					};
					diffuseCloud[]=
					{
						{0,0,0},
						0.75
					};
					ambient[]=
					{
						{0.090000004,0.13699999,0.22},
						1
					};
					ambientCloud[]=
					{
						{0.090000004,0.13699999,0.22},
						1
					};
					ambientMid[]=
					{
						{0.090000004,0.13699999,0.22},
						0.8624
					};
					ambientMidCloud[]=
					{
						{0.090000004,0.13699999,0.22},
						0.8624
					};
					groundReflection[]=
					{
						{0.090000004,0.13699999,0.22},
						0.75891203
					};
					groundReflectionCloud[]=
					{
						{0.090000004,0.13699999,0.22},
						0.75891203
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]={0.23100001,0.31400001,0.46700001};
					skyAroundSun[]={0.2,0.25,0.44999999};
					fogColor[]={0.090000004,0.13699999,0.22};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting27
				{
					height=0;
					overcast=0.85000002;
					sunAngle=-12;
					sunOrMoon=0;
					diffuse[]={0.16954,0.23899999,0.37673};
					diffuseCloud[]={0.042385001,0.059749998,0.094182998};
					ambient[]=
					{
						{0.16954,0.23899999,0.37673},
						1
					};
					ambientCloud[]=
					{
						{0.16954,0.23899999,0.37673},
						1
					};
					ambientMid[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8624
					};
					ambientMidCloud[]=
					{
						{0.17299999,0.23899999,0.373},
						0.8624
					};
					groundReflection[]=
					{
						{0.14704999,0.20315,0.31705001},
						0.75891203
					};
					groundReflectionCloud[]=
					{
						{0.14704999,0.20315,0.31705001},
						0.75891203
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.212,0.30199999,0.50999999},
						1
					};
					skyAroundSun[]={0.2,0.25,0.44999999};
					fogColor[]={0.122,0.169,0.255};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting28
				{
					height=0;
					overcast=0.85000002;
					sunAngle=-11;
					sunOrMoon=0.5;
					diffuse[]={0.12899999,0.18000001,0.271};
					diffuseCloud[]={0.032249998,0.045000002,0.067749999};
					ambient[]=
					{
						{0.12899999,0.18000001,0.271},
						1
					};
					ambientCloud[]=
					{
						{0.12899999,0.18000001,0.271},
						1
					};
					ambientMid[]=
					{
						{0.12899999,0.184,0.26699999},
						0.8624
					};
					ambientMidCloud[]=
					{
						{0.12899999,0.184,0.26699999},
						0.8624
					};
					groundReflection[]=
					{
						{0.125,0.176,0.26300001},
						0.75891203
					};
					groundReflectionCloud[]=
					{
						{0.125,0.176,0.26300001},
						0.75891203
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.212,0.30199999,0.50999999},
						1
					};
					skyAroundSun[]={0.2,0.25,0.44999999};
					fogColor[]={0.122,0.169,0.255};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting29
				{
					height=0;
					overcast=0.85000002;
					sunAngle=-10;
					sunOrMoon=1;
					diffuse[]={0.12899999,0.18000001,0.271};
					diffuseCloud[]={0.032249998,0.045000002,0.067749999};
					ambient[]=
					{
						{0.12899999,0.18000001,0.271},
						1
					};
					ambientCloud[]=
					{
						{0.12899999,0.18000001,0.271},
						1
					};
					ambientMid[]=
					{
						{0.12899999,0.184,0.26699999},
						0.8624
					};
					ambientMidCloud[]=
					{
						{0.12899999,0.184,0.26699999},
						0.8624
					};
					groundReflection[]=
					{
						{0.125,0.176,0.26300001},
						0.75891203
					};
					groundReflectionCloud[]=
					{
						{0.125,0.176,0.26300001},
						0.75891203
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.212,0.30199999,0.50999999},
						1
					};
					skyAroundSun[]=
					{
						{0.2,0.25,0.44999999},
						4.7349081
					};
					fogColor[]={0.122,0.169,0.255};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting30
				{
					height=0;
					overcast=0.85000002;
					sunAngle=-5;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.15700001,0.212,0.30599999},
						0.5625
					};
					diffuseCloud[]=
					{
						{0.039250001,0.052999999,0.076499999},
						0.39375001
					};
					ambient[]=
					{
						{0.15700001,0.212,0.30599999},
						3.22
					};
					ambientCloud[]=
					{
						{0.15700001,0.212,0.30599999},
						3.22
					};
					ambientMid[]=
					{
						{0.15700001,0.208,0.29800001},
						3.9670401
					};
					ambientMidCloud[]=
					{
						{0.15700001,0.208,0.29800001},
						3.9670401
					};
					groundReflection[]=
					{
						{0.149,0.204,0.28999999},
						3.649677
					};
					groundReflectionCloud[]=
					{
						{0.149,0.204,0.28999999},
						3.649677
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.2,0.29800001,0.54100001},
						4.5999999
					};
					skyAroundSun[]=
					{
						{0.69999999,0.34999999,0.28},
						7.6369491
					};
					fogColor[]=
					{
						{0.141,0.192,0.28200001},
						3.9670401
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting31
				{
					height=0;
					overcast=0.85000002;
					sunAngle=-2;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.184,0.24699999,0.34099999},
						0.9375
					};
					diffuseCloud[]=
					{
						{0.046,0.061749998,0.085249998},
						0.65625
					};
					ambient[]=
					{
						{0.184,0.24699999,0.34099999},
						6.9000001
					};
					ambientCloud[]=
					{
						{0.184,0.24699999,0.34099999},
						6.9000001
					};
					ambientMid[]=
					{
						{0.184,0.243,0.329},
						5.9505601
					};
					ambientMidCloud[]=
					{
						{0.184,0.243,0.329},
						5.9505601
					};
					groundReflection[]=
					{
						{0.176,0.23100001,0.322},
						5.5935259
					};
					groundReflectionCloud[]=
					{
						{0.176,0.23100001,0.322},
						5.5935259
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.18799999,0.28999999,0.57599998},
						6.9000001
					};
					skyAroundSun[]=
					{
						{1.8,0.41999999,0.2},
						12.31766
					};
					fogColor[]=
					{
						{0.16500001,0.22,0.31},
						5.9505601
					};
					apertureMin=7;
					apertureStandard=7;
					apertureMax=20;
					standardAvgLum=20;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting32
				{
					height=0;
					overcast=0.85000002;
					sunAngle=0;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.21600001,0.28600001,0.384},
						1.125
					};
					diffuseCloud[]=
					{
						{0.054000001,0.071500003,0.096000001},
						0.78750002
					};
					ambient[]=
					{
						{0.21600001,0.28600001,0.384},
						7.8000002
					};
					ambientCloud[]=
					{
						{0.21600001,0.28600001,0.384},
						7.8000002
					};
					ambientMid[]=
					{
						{0.22,0.278,0.36500001},
						6.7267199
					};
					ambientMidCloud[]=
					{
						{0.22,0.278,0.36500001},
						6.7267199
					};
					groundReflection[]=
					{
						{0.204,0.26699999,0.35299999},
						6.4576511
					};
					groundReflectionCloud[]=
					{
						{0.204,0.26699999,0.35299999},
						6.4576511
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.17299999,0.28200001,0.61199999},
						7.8000002
					};
					skyAroundSun[]=
					{
						{2,0.41999999,0.2},
						13.38876
					};
					fogColor[]=
					{
						{0.18799999,0.24699999,0.34099999},
						6.7267199
					};
					apertureMin=8;
					apertureStandard=8;
					apertureMax=22;
					standardAvgLum=45;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting33
				{
					height=0;
					overcast=0.85000002;
					sunAngle=2;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.255,0.32499999,0.41999999},
						1.6799999
					};
					diffuseCloud[]=
					{
						{0.063749999,0.081249997,0.105},
						1.176
					};
					ambient[]=
					{
						{0.255,0.32499999,0.41999999},
						8.3999996
					};
					ambientCloud[]=
					{
						{0.255,0.32499999,0.41999999},
						8.3999996
					};
					ambientMid[]=
					{
						{0.259,0.31400001,0.396},
						7.2441602
					};
					ambientMidCloud[]=
					{
						{0.259,0.31400001,0.396},
						7.2441602
					};
					groundReflection[]=
					{
						{0.23899999,0.294,0.37599999},
						7.099277
					};
					groundReflectionCloud[]=
					{
						{0.23899999,0.294,0.37599999},
						7.099277
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.15700001,0.27500001,0.65100002},
						8.3999996
					};
					skyAroundSun[]=
					{
						{2.2,0.80000001,0.2},
						13.38876
					};
					fogColor[]=
					{
						{0.21600001,0.27500001,0.373},
						7.2441602
					};
					apertureMin=8;
					apertureStandard=8;
					apertureMax=24;
					standardAvgLum=50;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting34
				{
					height=0;
					overcast=0.85000002;
					sunAngle=6;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.29800001,0.36500001,0.45100001},
						2.55
					};
					diffuseCloud[]=
					{
						{0.074500002,0.091250002,0.11275},
						1.785
					};
					ambient[]=
					{
						{0.29800001,0.36500001,0.45100001},
						9.6000004
					};
					ambientCloud[]=
					{
						{0.29800001,0.36500001,0.45100001},
						9.6000004
					};
					ambientMid[]=
					{
						{0.30199999,0.34900001,0.41600001},
						8.2790403
					};
					ambientMidCloud[]=
					{
						{0.30199999,0.34900001,0.41600001},
						8.2790403
					};
					groundReflection[]=
					{
						{0.27500001,0.31799999,0.384},
						8.1134596
					};
					groundReflectionCloud[]=
					{
						{0.27500001,0.31799999,0.384},
						8.1134596
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.145,0.26300001,0.68599999},
						9.6000004
					};
					skyAroundSun[]=
					{
						{0.40000001,0.31999999,0.60000002},
						13.38876
					};
					fogColor[]=
					{
						{0.243,0.30599999,0.40799999},
						8.2790403
					};
					apertureMin=8;
					apertureStandard=14;
					apertureMax=26;
					standardAvgLum=100;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.027000001,0.045000002};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting35
				{
					height=0;
					overcast=0.85000002;
					sunAngle=12;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.37599999,0.43099999,0.50599998},
						3.075
					};
					diffuseCloud[]=
					{
						{0.093999997,0.10775,0.1265},
						2.1524999
					};
					ambient[]=
					{
						{0.37599999,0.43099999,0.50599998},
						10.9
					};
					ambientCloud[]=
					{
						{0.37599999,0.43099999,0.50599998},
						10.9
					};
					ambientMid[]=
					{
						{0.38,0.40799999,0.447},
						9.6138
					};
					ambientMidCloud[]=
					{
						{0.38,0.40799999,0.447},
						9.6138
					};
					groundReflection[]=
					{
						{0.329,0.361,0.396},
						9.421524
					};
					groundReflectionCloud[]=
					{
						{0.329,0.361,0.396},
						9.421524
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.12899999,0.259,0.722},
						10.9
					};
					skyAroundSun[]=
					{
						{0.13,0.25,0.80000001},
						13.524
					};
					fogColor[]=
					{
						{0.28600001,0.35299999,0.463},
						9.6138
					};
					apertureMin=20;
					apertureStandard=22;
					apertureMax=35;
					standardAvgLum=250;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.017999999,0.039999999};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						12.24
					};
					swBrightness=1;
				};
				class Lighting36
				{
					height=0;
					overcast=0.85000002;
					sunAngle=24;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.447,0.49399999,0.55699998},
						3.95
					};
					diffuseCloud[]=
					{
						{0,0,0},
						2.7650001
					};
					ambient[]=
					{
						{0.447,0.49399999,0.55699998},
						13.8
					};
					ambientCloud[]=
					{
						{0.447,0.49399999,0.55699998},
						13.8
					};
					ambientMid[]=
					{
						{0.45500001,0.46700001,0.47499999},
						12.44208
					};
					ambientMidCloud[]=
					{
						{0.45500001,0.46700001,0.47499999},
						12.44208
					};
					groundReflection[]=
					{
						{0.38800001,0.396,0.40799999},
						12.19324
					};
					groundReflectionCloud[]=
					{
						{0.38800001,0.396,0.40799999},
						12.19324
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.118,0.25099999,0.75300002},
						13.8
					};
					skyAroundSun[]=
					{
						{0.115,0.245,0.80000001},
						13.662
					};
					fogColor[]=
					{
						{0.333,0.40400001,0.51800001},
						12.44208
					};
					apertureMin=45;
					apertureStandard=50;
					apertureMax=80;
					standardAvgLum=800;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.4
					};
					swBrightness=1;
				};
				class Lighting37
				{
					height=0;
					overcast=0.85000002;
					sunAngle=45;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.50599998,0.55299997,0.60799998},
						4.25
					};
					diffuseCloud[]={0.1265,0.13824999,0.152};
					ambient[]=
					{
						{0.50599998,0.55299997,0.60799998},
						14.8
					};
					ambientCloud[]=
					{
						{0.50599998,0.55299997,0.60799998},
						14.8
					};
					ambientMid[]=
					{
						{0.514,0.51800001,0.514},
						13.34368
					};
					ambientMidCloud[]=
					{
						{0.514,0.51800001,0.514},
						13.34368
					};
					groundReflection[]=
					{
						{0.435,0.43900001,0.43900001},
						13.07681
					};
					groundReflectionCloud[]=
					{
						{0.435,0.43900001,0.43900001},
						13.07681
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					skyAroundSun[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					fogColor[]=
					{
						{0.36899999,0.447,0.565},
						13.34368
					};
					apertureMin=70;
					apertureStandard=100;
					apertureMax=120;
					standardAvgLum=8000;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.8
					};
					swBrightness=1;
				};
				class Lighting38
				{
					height=0;
					overcast=0.85000002;
					sunAngle=90;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.54900002,0.59600002,0.65100002},
						4.25
					};
					diffuseCloud[]={0.13725001,0.149,0.16275001};
					ambient[]=
					{
						{0.54900002,0.59600002,0.65100002},
						14.8
					};
					ambientCloud[]=
					{
						{0.54900002,0.59600002,0.65100002},
						14.8
					};
					ambientMid[]=
					{
						{0.55699998,0.55699998,0.58499998},
						14.21392
					};
					ambientMidCloud[]=
					{
						{0.55699998,0.55699998,0.58499998},
						14.21392
					};
					groundReflection[]=
					{
						{0.47099999,0.47099999,0.463},
						13.92964
					};
					groundReflectionCloud[]=
					{
						{0.47099999,0.47099999,0.463},
						13.92964
					};
					bidirect[]={0.0117,0.0117,0.0117};
					bidirectCloud[]={0.0117,0.0117,0.0117};
					sky[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					skyAroundSun[]=
					{
						{0.02,0.12,0.80000001},
						13.8
					};
					fogColor[]=
					{
						{0.40000001,0.47999999,0.60000002},
						15
					};
					apertureMin=70;
					apertureStandard=110;
					apertureMax=120;
					standardAvgLum=8000;
					desiredLuminanceCoef=1;
					desiredLuminanceCoefCloud=1;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=0.5;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.8
					};
					swBrightness=1;
				};
				class Lighting39
				{
					height=-0.1;
					overcast=0.80000001;
					sunAngle=-24;
					sunOrMoon=0;
					diffuse[]=
					{
						{0.60000002,0.80000001,1},
						2.8
					};
					diffuseCloud[]=
					{
						{0.60000002,0.80000001,1},
						2.8
					};
					ambient[]=
					{
						{0.40000001,0.89999998,1},
						0.83999997
					};
					ambientCloud[]=
					{
						{0.40000001,0.89999998,1},
						0.83999997
					};
					ambientMid[]=
					{
						{0.23999999,0.63,1},
						0.90719998
					};
					ambientMidCloud[]=
					{
						{0.23999999,0.63,1},
						0.90719998
					};
					groundReflection[]=
					{
						{0.23999999,0.63,1},
						0.87091202
					};
					groundReflectionCloud[]=
					{
						{0.23999999,0.63,1},
						0.87091202
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]={0,0.23549999,0.2335};
					skyAroundSun[]={0,0.23549999,0.2335};
					fogColor[]=
					{
						{0.090000004,0.13699999,0.22},
						0.0275
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=0;
					desiredLuminanceCoefCloud=0;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=1;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting40
				{
					height=-0.1;
					overcast=0.80000001;
					sunAngle=-5;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.60000002,0.80000001,1},
						2.0999999
					};
					diffuseCloud[]=
					{
						{0.60000002,0.80000001,1},
						2.0999999
					};
					ambient[]=
					{
						{0.40000001,0.89999998,1},
						3.6800001
					};
					ambientCloud[]=
					{
						{0.40000001,0.89999998,1},
						3.6800001
					};
					ambientMid[]=
					{
						{0.23999999,0.63,1},
						3.9744
					};
					ambientMidCloud[]=
					{
						{0.23999999,0.63,1},
						3.9744
					};
					groundReflection[]=
					{
						{0.23999999,0.63,1},
						3.815424
					};
					groundReflectionCloud[]=
					{
						{0.23999999,0.63,1},
						3.815424
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0,0.2235,0.2705},
						4.2319999
					};
					skyAroundSun[]=
					{
						{0,0.2235,0.2705},
						7.6369491
					};
					fogColor[]=
					{
						{0.106,0.161,0.26699999},
						4.7150002
					};
					apertureMin=6;
					apertureStandard=6;
					apertureMax=18;
					standardAvgLum=4;
					desiredLuminanceCoef=0;
					desiredLuminanceCoefCloud=0;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=1;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting41
				{
					height=-0.1;
					overcast=0.80000001;
					sunAngle=-2;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.60000002,0.80000001,1},
						3.5
					};
					diffuseCloud[]=
					{
						{0.60000002,0.80000001,1},
						3.5
					};
					ambient[]=
					{
						{0.40000001,0.89999998,1},
						5.52
					};
					ambientCloud[]=
					{
						{0.40000001,0.89999998,1},
						5.52
					};
					ambientMid[]=
					{
						{0.23999999,0.63,1},
						5.9615998
					};
					ambientMidCloud[]=
					{
						{0.23999999,0.63,1},
						5.9615998
					};
					groundReflection[]=
					{
						{0.23999999,0.63,1},
						5.7231359
					};
					groundReflectionCloud[]=
					{
						{0.23999999,0.63,1},
						5.7231359
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0,0.2175,0.28799999},
						6.348
					};
					skyAroundSun[]=
					{
						{0,0.2175,0.28799999},
						12.31766
					};
					fogColor[]=
					{
						{0.11,0.169,0.28600001},
						7.0725002
					};
					apertureMin=7;
					apertureStandard=8;
					apertureMax=20;
					standardAvgLum=20;
					desiredLuminanceCoef=0;
					desiredLuminanceCoefCloud=0;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=1;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting42
				{
					height=-0.1;
					overcast=0.80000001;
					sunAngle=0;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.60000002,0.80000001,1},
						4.1999998
					};
					diffuseCloud[]=
					{
						{0.60000002,0.80000001,1},
						4.1999998
					};
					ambient[]=
					{
						{0.40000001,0.89999998,1},
						6.2399998
					};
					ambientCloud[]=
					{
						{0.40000001,0.89999998,1},
						6.2399998
					};
					ambientMid[]=
					{
						{0.23999999,0.63,1},
						6.7392001
					};
					ambientMidCloud[]=
					{
						{0.23999999,0.63,1},
						6.7392001
					};
					groundReflection[]=
					{
						{0.23999999,0.63,1},
						6.4696321
					};
					groundReflectionCloud[]=
					{
						{0.23999999,0.63,1},
						6.4696321
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0,0.2115,0.30599999},
						7.1760001
					};
					skyAroundSun[]=
					{
						{0,0.2115,0.30599999},
						13.38876
					};
					fogColor[]=
					{
						{0.118,0.18000001,0.31},
						7.9949999
					};
					apertureMin=8;
					apertureStandard=9;
					apertureMax=22;
					standardAvgLum=45;
					desiredLuminanceCoef=0;
					desiredLuminanceCoefCloud=0;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=1;
					rayleigh[]={0.0070000002,0.037999999,0.067500003};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						11.016
					};
					swBrightness=1;
				};
				class Lighting43
				{
					height=-0.1;
					overcast=0.80000001;
					sunAngle=45;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.60000002,0.80000001,1},
						12.04
					};
					diffuseCloud[]=
					{
						{0.60000002,0.80000001,1},
						12.04
					};
					ambient[]=
					{
						{0.40000001,0.89999998,1},
						11.84
					};
					ambientCloud[]=
					{
						{0.40000001,0.89999998,1},
						11.84
					};
					ambientMid[]=
					{
						{0.36000001,0.72000003,1},
						11.4848
					};
					ambientMidCloud[]=
					{
						{0.36000001,0.72000003,1},
						11.4848
					};
					groundReflection[]=
					{
						{0.36000001,0.72000003,1},
						11.02541
					};
					groundReflectionCloud[]=
					{
						{0.36000001,0.72000003,1},
						11.02541
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0,0.090000004,0.40000001},
						13.8
					};
					skyAroundSun[]=
					{
						{0,0.090000004,0.40000001},
						13.8
					};
					fogColor[]=
					{
						{0.30000001,0.44,0.74000001},
						16.5
					};
					apertureMin=12;
					apertureStandard=18;
					apertureMax=25;
					standardAvgLum=150;
					desiredLuminanceCoef=0;
					desiredLuminanceCoefCloud=0;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=1;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.8
					};
					swBrightness=1;
				};
				class Lighting44
				{
					height=-0.1;
					overcast=0.80000001;
					sunAngle=90;
					sunOrMoon=1;
					diffuse[]=
					{
						{0.60000002,0.80000001,1},
						12.04
					};
					diffuseCloud[]=
					{
						{0.60000002,0.80000001,1},
						12.04
					};
					ambient[]=
					{
						{0.40000001,0.89999998,1},
						11.84
					};
					ambientCloud[]=
					{
						{0.40000001,0.89999998,1},
						11.84
					};
					ambientMid[]=
					{
						{0.36000001,0.72000003,1},
						11.4848
					};
					ambientMidCloud[]=
					{
						{0.36000001,0.72000003,1},
						11.4848
					};
					groundReflection[]=
					{
						{0.36000001,0.72000003,1},
						11.02541
					};
					groundReflectionCloud[]=
					{
						{0.36000001,0.72000003,1},
						11.02541
					};
					bidirect[]={0,0,0};
					bidirectCloud[]={0,0,0};
					sky[]=
					{
						{0,0.090000004,0.40000001},
						13.8
					};
					skyAroundSun[]=
					{
						{0,0.090000004,0.40000001},
						13.8
					};
					fogColor[]=
					{
						{0.30000001,0.44,0.74000001},
						16.5
					};
					apertureMin=12;
					apertureStandard=18;
					apertureMax=25;
					standardAvgLum=150;
					desiredLuminanceCoef=0;
					desiredLuminanceCoefCloud=0;
					luminanceRectCoef=1;
					luminanceRectCoefCloud=1;
					rayleigh[]={0.0070000002,0.01388,0.035};
					mie[]={0.0049999999,0.0049999999,0.0049999999};
					cloudsColor[]=
					{
						{1,1,1},
						14.8
					};
					swBrightness=1;
				};
			};
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast=0;
				};
				class Rainy: DayLightingRainy
				{
					overcast=1;
				};
			};
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky="A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon="A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR="A3\Map_Stratis\Data\sky_clear_lco.paa";
				};
				class Weather7: Weather1
				{
					sky="A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon="A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR="A3\Map_Stratis\Data\sky_clear_lco.paa";
				};
				class Weather2: Weather2
				{
					sky="A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon="A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR="A3\Map_Stratis\Data\sky_almostclear_lco.paa";
				};
				class Weather3: Weather3
				{
					sky="A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon="A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR="A3\Map_Stratis\Data\sky_cloudy_lco.paa";
				};
				class Weather4: Weather4
				{
					sky="A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon="A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR="A3\Map_Stratis\Data\sky_cloudy_lco.paa";
				};
				class Weather5: Weather5
				{
					sky="A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon="A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR="A3\Map_Stratis\Data\sky_overcast_lco.paa";
				};
				class Weather6: Weather6
				{
					sky="A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon="A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR="A3\Map_Stratis\Data\sky_overcast_lco.paa";
				};
			};
		};
		humidityUpCoef=0.1;
		humidityDownCoef=0.050000001;
		class SimulWeather
		{
			noiseTexture="a3\data_f\noise_raw.paa";
			numKeyframesPerDay=48;
			windSpeedCoef="10.0f";
			moonIrradianceCoef="10.0f";
			fadeMaxDistanceKm=1000;
			fadeMaxAltitudeKm=15;
			fadeNumAltitudes=8;
			fadeNumElevations=8;
			fadeNumDistances=8;
			fadeEarthTest=1;
			autoBrightness=0;
			autoBrightnessStrength=0.1;
			cloudGridWidth=64;
			cloudGridLength=64;
			cloudGridHeight=16;
			helperGridElevationSteps=24;
			helperGridAzimuthSteps=15;
			helperEffectiveEarthRadius=1000000;
			helperCurvedEarth=1;
			helperAdjustCurvature=0;
			helperNumLayers=120;
			helperMaxDistance=160000;
			helperNearCloudFade=0.1;
			helperChurn=10;
			cloudWidth=40000;
			cloudLength=40000;
			wrapClouds=1;
			noiseResolution=8;
			noisePeriod=4;
			opticalDensity=0.5;
			alphaSharpness=0.85000002;
			selfShadowScale=0.90499997;
			mieAsymmetry=0.50870001;
			minimumLightElevationDegrees=6;
			directLightCoef=1;
			indirectLightCoef=0.039999999;
			fogStart=0;
			fogEnd=50000;
			fogHeight=2000;
			class DefaultKeyframe
			{
				rayleigh[]={0.0074900002,0.01388,0.02878};
				mie[]={0.0046000001,0.0046000001,0.0046000001};
				haze=30;
				hazeBaseKm=5;
				hazeScaleKm=1;
				hazeEccentricity=1;
				brightnessAdjustment=1;
				cloudiness=0.60000002;
				cloudBaseKm=2.8499999;
				cloudHeightKm=6;
				directLight=1;
				indirectLight=1;
				ambientLight=0.2;
				noiseOctaves=4.3000002;
				noisePersistence=0.53500003;
				fractalAmplitude=2.3;
				fractalWavelength=240;
				extinction=4.6999998;
				diffusivity=0.001;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast=0;
					cloudiness=0;
					diffusivity=0.001;
					seqFileKeyframe=0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast=0.2;
					cloudiness=0.25;
					diffusivity=0.001;
					seqFileKeyframe=0;
				};
				class Weather3: DefaultKeyframe
				{
					overcast=0.40000001;
					cloudiness=0.44999999;
					diffusivity=0.001;
					seqFileKeyframe=3;
				};
				class Weather4: DefaultKeyframe
				{
					overcast=0.5;
					cloudiness=0.46000001;
					diffusivity=0.0099999998;
					seqFileKeyframe=4;
				};
				class Weather5: DefaultKeyframe
				{
					overcast=0.80000001;
					cloudiness=0.80000001;
					diffusivity=0.0099999998;
					extinction=4.3000002;
					cloudBaseKm=1.9;
					cloudHeightKm=8;
					seqFileKeyframe=4;
				};
				class Weather6: DefaultKeyframe
				{
					overcast=1;
					cloudiness=1;
					diffusivity=0.001;
					extinction=4;
					cloudBaseKm=1.7;
					cloudHeightKm=10;
					seqFileKeyframe=4;
				};
			};
		};
		class Subdivision
		{
			class Fractal
			{
				rougness=5;
				maxRoad=0.02;
				maxTrack=0.5;
				maxSlopeFactor=0.050000001;
			};
			class WhiteNoise
			{
				rougness=2;
				maxRoad=0.0099999998;
				maxTrack=0.050000001;
				maxSlopeFactor=0.0024999999;
			};
			minY=-0;
			minSlope=0.02;
		};
		class Ambient
		{
		};
		class AmbientA3
		{
			maxCost=500;
			class Radius440_500
			{
				areaSpawnRadius=440;
				areaMaxRadius=500;
				spawnCircleRadius=30;
				spawnInterval=4.6999998;
				class Species
				{
					class Seagull
					{
						maxCircleCount="sea * 1 - night)) + 2 * houses * sea)) * 1 - night)";
						maxWorldCount=12;
						cost=3;
						spawnCount=1;
						groupSpawnRadius=10;
						maxAlt=100;
						minAlt=-10;
					};
					class Rabbit_F
					{
						maxCircleCount="20 * 0.1 - houses)) * 1 - sea)";
						maxWorldCount=14;
						cost=5;
						spawnCount=1;
						groupSpawnRadius=10;
						maxAlt=80;
						minAlt=-5;
					};
				};
			};
			class Radius40_60
			{
				areaSpawnRadius=40;
				areaMaxRadius=60;
				spawnCircleRadius=10;
				spawnInterval=1.5;
				class Species
				{
					class CatShark_F
					{
						maxCircleCount="4 * WaterDepth interpolate [1,30,0,1]))";
						maxWorldCount=10;
						cost=6;
						spawnCount=1;
						groupSpawnRadius=10;
						maxAlt=-10;
						minAlt=-480;
					};
					class Turtle_F
					{
						maxCircleCount="2 * waterDepth interpolate [1,16,0,1]) * 1-houses) * 1-houses)))";
						maxWorldCount=6;
						cost=5;
						spawnCount=1;
						groupSpawnRadius=10;
						maxAlt=-5;
						minAlt=-370;
					};
					class Snake_random_F
					{
						maxCircleCount="1 - houses) * 2 * 1 - sea)) + 2 * meadow)))";
						maxWorldCount=3;
						cost=5;
						spawnCount=1;
						groupSpawnRadius=5;
						maxAlt=40;
						minAlt=-5;
					};
					class Salema_F
					{
						maxCircleCount="12 * WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount=40;
						cost=5;
						spawnCount=2;
						groupSpawnRadius=5;
						maxAlt=-10;
						minAlt=-80;
					};
					class Ornate_random_F
					{
						maxCircleCount="12 * WaterDepth interpolate [1,30,0,1]) + 0.05))";
						maxWorldCount=30;
						cost=5;
						spawnCount=3;
						groupSpawnRadius=5;
						maxAlt=-10;
						minAlt=-80;
					};
					class Mackerel_F
					{
						maxCircleCount="8 * WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount=14;
						cost=5;
						spawnCount=2;
						groupSpawnRadius=5;
						maxAlt=-15;
						minAlt=-580;
					};
					class Mullet_F
					{
						maxCircleCount="8 * WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount=14;
						cost=5;
						spawnCount=2;
						groupSpawnRadius=5;
						maxAlt=-10;
						minAlt=-380;
					};
					class Tuna_F
					{
						maxCircleCount="8 * WaterDepth interpolate [1,30,0,1]) - 0.2))";
						maxWorldCount=10;
						cost=5;
						spawnCount=2;
						groupSpawnRadius=5;
						maxAlt=-10;
						minAlt=-80;
					};
				};
			};
			class Radius30_40
			{
				areaSpawnRadius=30;
				areaMaxRadius=40;
				spawnCircleRadius=3;
				spawnInterval=3.75;
				class Species
				{
					class DragonFly
					{
						maxCircleCount="4 * 1 - night) * 1 - WaterDepth interpolate [1,30,0,1])) * sea * 1 - windy)";
						maxWorldCount=4;
						cost=1;
						spawnCount=1;
						groupSpawnRadius=1;
						maxAlt=30;
						minAlt=-5;
					};
					class ButterFly_random
					{
						maxCircleCount="3 * 1 - night) * 1 - WaterDepth interpolate [1,30,0,1])) * 1 - windy)";
						maxWorldCount=6;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=1;
						maxAlt=30;
						minAlt=-5;
					};
				};
			};
			class Radius15_20
			{
				areaSpawnRadius=15;
				areaMaxRadius=20;
				spawnCircleRadius=2;
				spawnInterval=2.8499999;
				class Species
				{
					class FxWindGrass1
					{
						maxCircleCount="2 * 1 - WaterDepth interpolate [1,30,0,1])) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindGrass2
					{
						maxCircleCount="2 * 1 - WaterDepth interpolate [1,30,0,1])) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindLeaf1
					{
						maxCircleCount="2 * trees + 0.5) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindLeaf2
					{
						maxCircleCount="2 * trees + 0.5) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindLeaf3
					{
						maxCircleCount="2 * trees + 0.5) * windy interpolate [0.1,0.25,0,1])";
						maxWorldCount=3;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=2.5;
						maxAlt=30;
						minAlt=-5;
					};
					class FxWindPollen1
					{
						maxCircleCount="3 * 1 - WaterDepth interpolate [1,30,0,1]))) * windy interpolate [0.05,0.15,0,1])";
						maxWorldCount=6;
						cost=1;
						spawnCount=1;
						groupSpawnRadius=1;
						maxAlt=30;
						minAlt=-5;
					};
				};
			};
			class Radius6_10
			{
				areaSpawnRadius=6;
				areaMaxRadius=10;
				spawnCircleRadius=1;
				spawnInterval=0.1;
				class Species
				{
					class HoneyBee
					{
						maxCircleCount="4 * 1 - night) * 1 - sea) * 1 - houses) * 1 - windy)";
						maxWorldCount=8;
						cost=1;
						spawnCount=1;
						groupSpawnRadius=1;
						maxAlt=30;
						minAlt=-5;
					};
					class HouseFly
					{
						maxCircleCount="3 + 3 * houses)) * 1 - night) * 1 - WaterDepth interpolate [1,30,0,1])) * 1 - windy)";
						maxWorldCount=10;
						cost=1;
						spawnCount=3;
						groupSpawnRadius=1;
						maxAlt=30;
						minAlt=-5;
					};
					class Mosquito
					{
						maxCircleCount="3 * 1 - WaterDepth interpolate [1,30,0,1])) * 1 - windy)";
						maxWorldCount=2;
						cost=1;
						spawnCount=1;
						groupSpawnRadius=1;
						maxAlt=30;
						minAlt=-5;
					};
				};
			};
		};
		class Names
		{
			#include "Equal_Islands.hpp"
		};
		loadingTexts[] = {"Equal Islands by PKE"};

	};
};
class CfgWorldList
{
	class Equal_Islands{};
};

class CfgSurfaces
{
	class Default
	{
	};
	class GdtDirt;
	class Water
	{
	};
	class Beton: Default 
	{
		friction = 2;
		surfaceFriction = 3 ;
		maxSpeedCoef = 1;	
	};
	class BetonNew: Default 
	{
		friction = 2;
		surfaceFriction = 3 ;
		maxSpeedCoef = 1;	
	};
	class Asf1: Default 
	{
		friction = 2;
		surfaceFriction = 3 ;
		maxSpeedCoef = 1;	
	};
	
	class Asf2: Default 
	{
		friction = 2;
		surfaceFriction = 3 ;
		maxSpeedCoef = 1;	
	};
	
	class Asf3: Default 
	{
		friction = 2;
		surfaceFriction = 3 ;
		maxSpeedCoef = 1;	
	};
	class pop_roca: Default
	{
		files = "pop_roca_*";
		rough = 0.88;
		dust = 0.1;
		lucidity = 3.5;
		friction = 1.7;
		surfaceFriction = 2 ;
		grassCover = 0.04;
		maxSpeedCoef = 0.2;
		soundEnviron = "rock";
		character = "CliffGroup";
		soundHit = "hard_ground";
	};
	class huerta: Default
	{
		files = "huerta_*";
		rough = 0.88;
		dust = 0.1;
		lucidity = 3.5;
		friction = 1.7;
		surfaceFriction = 2 ;
		grassCover = 0.04;
		maxSpeedCoef = 0.1;
		soundEnviron = "grass";
		character = "empty";
		soundHit = "soft_ground";
	};
	class pop_arena: Default
	{
		files = "pop_arena_*";
		character = "Empty";
		soundEnviron = "sand_exp";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.15;
		dust = 0.5;
		lucidity = 1.25;
		grassCover = 0.0;
		maxClutterColoringCoef = 1.5;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
	};
	class pop_seca: Default
	{
		files = "pop_seca_*";
		character = "RedDirtGroup";
		soundEnviron = "dirt_exp";
		soundHit = "soft_ground";
		rough = 0.09;
		maxSpeedCoef = 0.25;
		dust = 0.2;
		lucidity = 1;
		grassCover = 0.05;
		maxClutterColoringCoef = 1.02;
		impact = "hitGroundRed";
		surfaceFriction = 1.8;
	};
	class pop_verde: Default
	{
		files = "pop_verde_*";
		character = "GrassTallGroup";
		soundEnviron = "grasstall_exp";
		soundHit = "soft_ground";
		rough = 0.2;
		maxSpeedCoef = 0.3;
		dust = 0.15;
		lucidity = 4;
		grassCover = 0.35;
		maxClutterColoringCoef = 1.06;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		AIAvoidStance = 2;
	};
	class pop_grava: Default
	{
		files = "pop_grava_*";
		rough = 0.88;
		dust = 0.1;
		lucidity = 3.5;
		grassCover = 0.04;
		maxSpeedCoef = 0.95;
		soundEnviron = "rock";
		character = "empty";
		soundHit = "hard_ground";
	};
	class schultz_medieval: Default
	{
		files = "schultz_medieval_*";
		rough = 0.88;
		dust = 0.1;
		lucidity = 3.5;
		grassCover = 0.04;
		maxSpeedCoef = 0.95;
		soundEnviron = "rock";
		character = "empty";
		soundHit = "hard_ground";
	};
	
    class AL_asphalt: Default // ok
	{
		files = "al_asphalt_*";
	    rough = 0.88;
		dust = 0.1;
		lucidity = 3.5;
		grassCover = 0.04;
		maxSpeedCoef = 0.95;
		soundEnviron = "rock";
		character = "empty";
		soundHit = "hard_ground";
	};
	

	class AL_runway: Default //ok
	{
		files = "al_runway_*";
		rough = 0.88;
		dust = 0.1;
		lucidity = 3.5;
		grassCover = 0.04;
		maxSpeedCoef = 0.95;
		soundEnviron = "rock";
		character = "empty";
		soundHit = "hard_ground";
	};

	
	class pop_nieve : Default {
		files = "pop_nieve_*";
		rough = 0.13;
		dust = 0.3;
		lucidity = 3.5;
		grassCover = 0.04;
		maxSpeedCoef = 0.95;
		soundEnviron = "gravel";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class GdtGrassShort: Default
	{
		files = "gdt_grass_short_*";
		character = "GrassShortGroup";
		soundEnviron = "grass_exp";
		soundHit = "soft_ground";
		rough = 0.08;
		maxSpeedCoef = 0.9;
		dust = 0.15;
		lucidity = 4;
		grassCover = 0.15;
		maxClutterColoringCoef = 1.0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		AIAvoidStance = 1;
	};
	class GdtGrassTall: Default
	{
		files = "gdt_grass_tall_*";
		character = "GrassTallGroup";
		soundEnviron = "grasstall_exp";
		soundHit = "soft_ground";
		rough = 0.2;
		maxSpeedCoef = 0.9;
		dust = 0.15;
		lucidity = 4;
		grassCover = 0.35;
		maxClutterColoringCoef = 1.06;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		AIAvoidStance = 2;
	};
	class GdtGrassLong: Default
	{

		files = "gdt_grass_long_*";
		character = "Empty";
		soundEnviron = "grasstall_exp";
		soundHit = "soft_ground";
		rough = 0.2;
		maxSpeedCoef = 0.8;
		dust = 0.15;
		lucidity = 4;
		grassCover = 0.35;
		maxClutterColoringCoef = 1.5;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		AIAvoidStance = 2;
	};
	class GdtBeach: Default
	{

		files = "gdt_beach_*";
		character = "Empty";
		soundEnviron = "sand_exp";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.885;
		dust = 0.5;
		lucidity = 1.25;
		grassCover = 0.0;
		maxClutterColoringCoef = 1.5;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
	};
	class GdtMud: Default
	{
		maxSpeedCoef = 0.869;
	};
	class GdtVolcanoBeach: Default
	{

		files = "gdt_vbeach_*";
		character = "Empty";
		soundEnviron = "sand_exp";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.8;
		dust = 0.2;
		lucidity = 1.25;
		grassCover = 0.0;
		maxClutterColoringCoef = 1.5;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
	};
	class GdtSeabedExp: Default
	{

		files = "gdt_seabedexp_*";
		character = "SeabedExpGroup";
		soundEnviron = "seabed_exp";
		soundHit = "hard_ground";
		rough = 0.15;
		maxSpeedCoef = 0.85;
		dust = 0.75;
		lucidity = 150;
		grassCover = 0.0;
		maxClutterColoringCoef = 1.5;
		impact = "hitGroundHard";
		surfaceFriction = 1.4;
	};
	class GdtRedDirt: Default
	{

		files = "gdt_reddirt_*";
		character = "RedDirtGroup";
		soundEnviron = "dirt_exp";
		soundHit = "soft_ground";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.2;
		lucidity = 1;
		grassCover = 0.05;
		maxClutterColoringCoef = 1.02;
		impact = "hitGroundRed";
		surfaceFriction = 1.8;
	};
	class GdtAsphalt: Default
	{

		files = "gdt_asphalt_*";
		character = "Empty";
		soundEnviron = "asphalt_exp";
		soundHit = "concrete";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.05;
		lucidity = 0.03;
		grassCover = 0.0;
		maxClutterColoringCoef = 1.5;
		impact = "hitConcrete";
		surfaceFriction = 1.8;
	};
	class GdtField: Default
	{

		files = "gdt_field_*";
		character = "Empty";
		soundEnviron = "dirt_exp";
		soundHit = "soft_ground";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.2;
		lucidity = 1;
		grassCover = 0.05;
		maxClutterColoringCoef = 1.5;
		impact = "hitGroundSoft";
		surfaceFriction = 1.8;
	};
	class GdtForest: Default
	{

		files = "gdt_forest_*";
		character = "RainForestGroup";
		soundEnviron = "forest_exp";
		soundHit = "soft_ground";
		rough = 0.12;
		maxSpeedCoef = 0.8;
		dust = 0;
		lucidity = 3.5;
		grassCover = 0.1;
		maxClutterColoringCoef = 1.05;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
	};
	class GdtVolcano: Default
	{

		files = "gdt_volcano_*";
		character = "VolcanoGroup";
		soundEnviron = "dirt_exp";
		soundHit = "soft_ground";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 1;
		grassCover = 0.05;
		maxClutterColoringCoef = 1.0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.8;
	};
	class GdtCliff: Default
	{

		files = "gdt_rock_*";
		character = "CliffGroup";
		soundEnviron = "stones_exp";
		soundHit = "concrete";
		rough = 0.2;
		maxSpeedCoef = 0.8;
		dust = 0.05;
		lucidity = 1;
		grassCover = 0.0;
		maxClutterColoringCoef = 1.3;
		impact = "hitGroundHard";
		surfaceFriction = 1.9;
	};
};
class CfgSurfaceCharacters
{
	class GrassTallGroup
	{
		probability[] = {0.1,0.15,0.35,0.05,0.06,0.05};
		names[] = {"c_GrassBunch_HI","c_GrassBunch_LO","c_GrassTropic","c_Grass_nettle","c_Grass_Leaves_coltsfoot","c_Grass_leaf_big"};
	};
	class RainForestGroup
	{
		probability[] = {0.059,0.112,0.056,0.034,0.039,0.011,0.034};
		names[] = {"c_forest_roots","c_forest_violet_leaves","c_forest_violet_leaves2","c_forest_violet_single","c_forest_fern","c_forest_BiglLeaves","c_forest_BiglLeaves2"};
	};
	class GrassShortGroup
	{
		probability[] = {0.55,0.1,0.1,0.15,0.1};
		names[] = {"c_Grass_short_small","c_Grass_short_bunch","c_Grass_short_leaf","c_Grass_short_mimosa","c_Grass_short_nettle"};
	};
	class VolcanoGroup
	{
		probability[] = {0.01,0.008,0.04,0.01};
		names[] = {"volcano_GrassMix","volcano_GrassMix2","volcano_stones","volcano_LargeStone"};
	};
	class CliffGroup
	{
		probability[] = {0.08};
		names[] = {"rock_stones"};
	};
	class RedDirtGroup
	{
		probability[] = {0.01,0.03,0.03,0.02,0.1,0.06};
		names[] = {"sparse_Grass","short_Grass","mimosa","large_stones","small_stones","sparse_Grass2"};
	};
	class SeabedExpGroup
	{
		probability[] = {0.03,0.035,0.05,0.02,0.01,0.09,0.03};
		names[] = {"SeaWeed1Exp","SeaWeed2Exp","Coral4Exp","Coral1Exp","Coral5Exp","Coral3Exp","Coral2Exp"};
	};
};
class CfgMaterials
{
	class Water
	{
		PixelShaderID="Water";
		VertexShaderID="Water";
		ambient[]={0,0.025,0.050000001,0.5};
		diffuse[]={0,0.050000001,0.039999999,1};
		forcedDiffuse[]={0,0,0,1};
		specular[]={0.12,0.12,0.12,1};
		specularPower=100;
		emmisive[]={0,0,0,0};
		class Stage1
		{
			texture="A3\Map_data\water_nofhq.paa";
			uvSource="texWaterAnim";
			class uvTransform
			{
				aside[]={0,1,0};
				up[]={1,0,0};
				dir[]={0,0,1};
				pos[]={0.30000001,0.40000001,0};
			};
		};
		class Stage2
		{
			texture="A3\data_f\sea_foam_lco.paa";
			uvSource="none";
		};
		class Stage3
		{
			texture="A3\Map_data\water2_nohq.paa";
			uvSource="none";
		};
	};
	class Shore
	{
		PixelShaderID="Shore";
		VertexShaderID="Shore";
		ambient[]={1,1,1,1};
		diffuse[]={0.69999999,0.69999999,0.69999999,1};
		forcedDiffuse[]={0,0,0,1};
		specular[]={0.12,0.12,0.12,1};
		specularPower=65;
		emmisive[]={0,0,0,0};
		class TexGen0
		{
			uvSource="none";
		};
		class TexGen1
		{
			uvSource="texWaterAnim";
			class uvTransform
			{
				aside[]={0,5,0};
				up[]={5,0,0};
				dir[]={0,0,1};
				pos[]={0.30000001,0.40000001,0};
			};
		};
		class Stage1
		{
			texture="A3\data_f\water_nofhq.paa";
			texGen=1;
		};
		class Stage2
		{
			texture="A3\data_f\sea_foam_lco.paa";
			texGen=0;
		};
		class Stage3
		{
			texture="A3\data_f\water2_nohq.paa";
			texGen=0;
		};
		class Stage6
		{
			texture="A3\data_f\shoreFoam_edge.paa";
			texGen=0;
		};
		class Stage7
		{
			texture="A3\data_f\shoreWetNormal_nohq.paa";
			texGen=0;
		};
		class Stage8
		{
			texture="A3\Data_F\env_land_CO.paa";
			useWorldEnvMap=1;
			texGen=0;
		};
	};
	class ShoreWet
	{
		PixelShaderID="ShoreWet";
		VertexShaderID="Shore";
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1,1};
		forcedDiffuse[]={0,0,0,0};
		emmisive[]={0,0,0,1};
		specular[]={0.1,0.1,0.1,1};
		specularPower=1;
		class Stage0
		{
			texture="A3\data_f\shoreWetNormal_nohq.paa";
			uvSource="none";
		};
		class Stage1
		{
			texture="#(ai,64,128,1)fresnel(1.4,0.1)";
			uvSource="none";
		};
		class Stage2
		{
			useWorldEnvMap=1;
			texture="A3\Data_F\env_land_CO.paa";
			uvSource="none";
		};
	};
};
class CfgLensFlare
{
	flarePos[] = {0.0,0.0,0.37,0.47,0.5,0.54,0.62,0.72,0.75,0.91,1.0,1.084,1.13,1.29,1.62,1.68};
	flareSizeCam[] = {0.2,0.4,0.025,0.05,0.042,0.043,0.04,0.75,0.6,0.7,0.15,0.85,0.44,0.45,0.55,0.1};
	flareBright[] = {1.0,0.3,0.3,0.3,0.3,0.4,0.4,0.05,0.03,0.12,0.05,0.08,0.05,0.2,0.2,1.0};
	flareSizeEye[] = {0.04};
	flareSizeEyeSun[] = {0.04};
};
//};
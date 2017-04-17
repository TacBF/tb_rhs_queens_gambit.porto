// RES - Taliban
// Author: Cole

class TB_A3RESBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_A3RESBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_30Rnd_762x39mm", 20},
			{"rhs_10Rnd_762x54mmR_7N1", 10},
			{"rhs_100Rnd_762x54mmR", 5},
			{"SmokeShell", 10},
			{"rhs_mag_rgd5", 10},
			{"rhs_VOG25", 10},
			{"rhs_rpg7_PG7VL_mag", 2},
			{"CUP_RPG18_M", 2}
		};
		transportWeapons[] = {{"rhs_weap_rsp30_red", 10}, {"CUP_launch_RPG18",1}, {"rhs_weap_akm",2}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};
class TB_Box_East_Mines_F
{
	transportClear = 1;
	proxyObject = "TB_Box_East_Mines_F";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mine_tm62m_mag", 2},
			{"CUP_IED_V3_M", 1},
			{"CUP_IED_V4_M", 1},			
			{"rhs_mine_pmn2_mag", 2},			
			{"APERSTripMine_Wire_Mag", 6},
			{"ClaymoreDirectionalMine_Remote_Mag", 2}
		};
		//transportWeapons[] = {};
		transportBackpacks[] = {{"B_Carryall_khk", 2}};
		transportItems[] = {{"MineDetector", 2}, {"ToolKit", 1}};
	};
};
class TB_vehicleMags {
	class RHS_mag_VOG30_30 { // VOG30
	    weapon = 'RHS_weap_AGS30_tigr';
	    count = 30; // 30
	    magLimit = 1; // 12
	};
	class RHS_48Rnd_40mm_MK19 {
	    weapon = 'RHS_MK19';
	    count = 30; // 48
	    magLimit = 1; // 2
	};
};

class TB_vehicleInit {
	class GMGremove {
		Code = "if (local _this) then { _this removeWeaponTurret ['GMG_40mm', [0]]; };";
	};
	class initAUG {
		Code = "[_this] execVM 'functions\OffroadAUG.sqf'; ";
	};
};


//note Get markers pos V
_pos = getMarkerPos "DZ";

//note Get a random direction
_dir = random 359;

//note set position away from marker x*sin x*cos and altitude dropped at (at end)
_pos = [( _pos select 0)-50*sin(_dir),( _pos select 1)-50*cos(_dir), 700];

//note Move the person 15 meters away from the destination (in the direction of _dir)
player SetPos _pos;

//note Set the parachute open altitude & spawns parachute
0 = player spawn {
	waitUntil {getPosATL _this select 2 < 600};
_chute = "Steerable_Parachute_F" createVehicle [0,0,0];
_chute setPos [getPos _this select 0, getPos _this select 1, 600];
_this moveIndriver _chute;
};
/*
	Author: [SA] Duda

	Description:
	Identifies if the position is safe for the specified object

	Parameter(s):
	_this select 0: ARRAY - Position [X,Y]
	_this select 1: OBJECT/STRING - Object to be placed at the position (or kind of object)
	_this select 2: NUMBER - size of object (optional)

	Returns: 
	BOOLEAN - True if the position is safe, otherwise false
*/

private ["_object","_position","_objectSize","_kind"];

_position = [_this, 0] call BIS_fnc_param;
_object = [_this, 1] call BIS_fnc_param;
_objectSize = [_this, 2, 0] call BIS_fnc_param;

if(typeName _object == "STRING") then {
	_kind = _object;
} else {
	if(_object isKindOf "Air") then {
		_kind = "Air";
	};
	if(_object isKindOf "Ship") then {
		_kind = "Ship";
	};
	if(_object isKindOf "LandVehicle") then {
		_kind = "LandVehicle";
	};
	if(_object isKindOf "Man") then {
		_kind = "Man";
	};
	_objectSize = sizeOf typeOf _object;
};

// Check service
private ["_surfaceCorrect"];
_surfaceCorrect = false;
if(_kind == "Ship") then {
	_surfaceCorrect = surfaceIsWater _position;
} else {
	if(_kind == "Air") then {
		_surfaceCorrect = true;
	} else {
		_surfaceCorrect = not (surfaceIsWater _position);
	};
};

// Check spacing with other entities
private ["_spacingCorrect"];
_spacingCorrect = false;
if(count (_position nearEntities _objectSize) == 0) then {
	_spacingCorrect = true;
} else {
	_spacingCorrect = false;
};

// Check gradient (avoid cliffs)
private ["_gradientCorrect","_normal","_absX","_absY","_maxGradient"];
_gradientCorrect = false;
_normal = surfaceNormal _position;
_absX = abs( _normal select 0 );
_absY = abs( _normal select 1 );
_maxGradient = 0.25;

if(_kind == "LandVehicle") then {
	_maxGradient = 0.10;
};
if(_kind == "Air") then {
	_maxGradient = 1.0;
};

if( (_absX max _absY) < _maxGradient ) then {
	_gradientCorrect = true;
} else {
	_gradientCorrect = false;
};

// If this is a vehicle, make sure we're not too close to a building
private ["_buildingSpacingOk","_building","_buildingSize"];
_buildingSpacingOk = false;
if(_kind == "Man") then {
	_buildingSpacingOk = true;
} else {
	_building = nearestBuilding _position;
	if( _position distance _building < _objectSize ) then {
		_buildingSpacingOk = false;
	} else {
		_buildingSpacingOk = true;
	};
};

// Identify if this is a road position
private ["_isRoadPosition"];
_isRoadPosition = isOnRoad _position;

// If this is a vehicle, avoid trees
private ["_treeSpacingOk","_place"];
_treeSpacingOk = false;
if(_kind == "LandVehicle") then {
	_place = selectBestPlaces [_position, 1, "trees", 1, 1];
	if( ((_place select 0) select 1) < 0.3 ) then {
		_treeSpacingOk = true;
	} else {
		_treeSpacingOk = false;
	};
} else {
	_treeSpacingOk = true;
};

_gradientCorrect and _spacingCorrect and _surfaceCorrect and ( _isRoadPosition or _buildingSpacingOk ) and _treeSpacingOk;

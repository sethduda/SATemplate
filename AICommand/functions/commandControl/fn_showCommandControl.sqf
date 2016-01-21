#include "functions.h"

/*
	Author: [SA] Duda

	Description:
	Show the specified command control on the map of the calling player

	Parameter(s):
	_this select 0: STRING - command control id
	_this select 1: BOOLEAN - show command control

	Returns: 
	Nothing
*/

private ["_commandId","_showCommandControl"];

_commandId = param [0];
_showCommandControl = param [1];

private ["_groupControls"];

AIC_fnc_setCommandControlShown(_commandId, _showCommandControl);

_groupControls = AIC_fnc_getCommandControlGroupsControls(_commandId);
{
	[_x, _showCommandControl] call AIC_fnc_showGroupControl;
} forEach _groupControls;

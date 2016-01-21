class SA
{
	tag = "SA";

	class CR
	{
		file = "SA\functions\cr";
		class createCommandRadio {description = ""};
		class commandRadioSyncLoop {description = ""};
		class enableCommandRadioTask {description = ""};
		class takeCommandRadio {description = ""};
		class setRadioOwner {description = ""};
		class getRadioOwner {description = ""};
		class getRadioOwners {description = ""};
		class getOwnerRadio {description = ""};
		class isRadioOwner {description = ""};
		class taskDropRadio {description = ""};
		class syncCommandRadioTasksLocal {description = ""};
		class showCommandRadioMenu {description = ""};
		class showCommandRadioMenuLocal {description = ""};
	};
	
	class Math
	{
		file = "SA\functions\math";
		class findPositionInsideMarker {description = "Get a random position within a marker"};
		class getPositionInsideCircle {description = "Gets a random position within a circle"};
		class positionInsideRectangle {description = "Identifies if a position is within a rotatable-rectangle"};
		class rotatePosition {description = "Rotates a position [X,Y] a specified angle around a center position [X,Y]"};
	};
	
	class AI
	{
		file = "SA\functions\ai";
		class defendArea {description = "Defend an area with a set of entities"};
		class patrolArea {description = "Patrol an area with a set of entities"};
		class taskPatrol {description = "Create a random patrol of several waypoints within a marker"};
		class vehicleIgnoreEnemy {description = "Make a vehicle ignore enemy"};
	};
	
	class Main
	{
		file = "SA\functions\main";
		class addDroppableEMP {description = "Adds a droppable EMP to an air vehicle. When the EMP lands, all street lights within x distance will be turned off"};
		class containsOnlySpecifiedTypes {description = "Identifies if an array of objects contains only the specified types"};
		class createBlackCutScene {description = "Creates black cut scene with text"};
		class createDotMarker {description = "Creates a dot marker as a specified position"};
		class createLocalTask {description = "Create a task"};
		class createRadar {description = "Create a radar"};
		class destructionScriptTrigger {description = "Adds a destruction trigger"};
		class dropEMP {description = "Drops an EMP from an air vehicle. When the EMP lands, all street lights within x distance will be turned off"};
		class entitiesInsideMarker {description = "Gets all entities contained inside a marker (rectangle only)"};
		class findSquads {description = "Find all squads in the area"};
		class findValidAnyPositionInsideMarker {description = "Finds any valid random position inside a marker."};
		class findValidBuildingPositionInsideMarker {description = "Finds valid building position and direction(s) inside a marker"};
		class findValidPositionInsideCircle {description = "Finds a valid position inside a circle"};
		class findValidPositionInsideMarker {description = "Finds a valid position inside a marker"};
		class findValidRoadPositionInsideMarker {description = "Finds valid road position and direction(s) inside a marker"};
		class getNearEntities {description = "Get near entities optionally matching some criteria"};
		class getPlacementType {description = "Get random placement type (Any, Building, or Road). Depends on the types of objects specified"};
		class getPlayableUnits {description = "Get playable units optionally matching some criteria"};
		class getPublicVariable {description = "Get public variable"};
		class groupObjectsByGroup {description = "Groups an array of objects into groups based on their group."};
		class groupsInsideMarker {description = "Gets all groups contained inside a marker (rectangle only)"};
		class haloJumpMap {description = "Halo jump"};
		class haloJump {description = "Halo jump"};
		class haloJumpOpenChute {description = "Halo jump"};
		class isAiServer {description = "Determines if the caller is the AI server"};
		class isPositionInsideMarker {description = "Identifies if a position is within a marker."};
		class isPositionSafe {description = "Identifies if the position is safe for the specified object"};
		class makeVirtualAmmo {description = "Virtual ammo"};
		class markersInsideMarker {description = "Gets all markers contained inside a marker (rectangle only)"};
		class moveAllInsideMarker {description = "Moves everything insider a marker (rectangle only) to a specified position"};
		class moveToOnMap {description = "Moves unit to position on map (for debugging)"};
		class moveHelicopter {description = "Moves a helicopter to a specified position"};
		class moveMarkerRandomOffset {description = "Move marker a random direction and random distance"};
		class objectsInsideMarker {description = "Gets all objects contained inside a marker (rectangle only)"};
		class placeEntities {description = "Places entities within a marker"};
		class play3dSound {description = "Plays a 3d sound from a specific object source"};
		class play3dSoundCfg {description = "Plays a 3d sound from a CfgSounds class"};
		class preventDamage {description = "Prevent damage to an object"};
		class randomlyMoveAllInsideMarker {description = "Randomly moves everything inside a marker to a random position"};
		class randweather {description = "Random weather"};
		class remNvAddLight {description = "Removes night vision and adds a light (forced on)"};
		class removeAllCrewExceptDriver {description = "Remove all crew from vehicle except driver. Does not remove player units."};
		class scriptTrigger {description = "Creates a script trigger"};
		class setPublicVariable {description = "Set public variable"};
		class soundAlarm {description = "Sounds an alarm from a specific object source"};
		class squadKnowsAbout {description = "Gets squad knows about value (average of all units in squad)"};
		class timeOfDay {description = "Sets time of day"};
		class updateLocalTask {description = "Update a task"};
		class getLoadout {description = "Get a units loadout"};
		class setLoadout {description = "Sets a units loadout"};
		class formNewGroup {description = "Forms a new group with specified units"};
	};
	
};
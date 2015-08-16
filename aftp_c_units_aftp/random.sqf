	if (isClass(configFile >> "CfgPatches" >> "rhsusf_main")) {
		
allowedFacewear["rhs_googles_black", "rhs_googles_orange", "rhs_googles_clear", "rhs_googles_yellow"] ;
		
	} else {
		
allowedFacewear["G_Lowprofile", "G_Combat"] ;
		
	};


if !(_this getVariable ["BIS_enableRandomization",true]) exitWith {}; // If the parameter is not true, the script won't run. This enables a possibility to disable randomization for mission characters.

    _facewear = getarray (configFile >> "cfgweapons" >> _headSelected >> "allowedfacewear"); // Loads an array of matching facewear defined in allowedFacewear parameter of previously selected headgear.
    _faceCount = count _facewear; // Gets the number of facewear in the array.
 
    _rnd2 = floor random _faceCount; // Gets a random number up to the number of facewear in the array.
 
    if (_rnd2 > 0) then
    {
        _this addGoggles (_facewear select _rnd2); // Selects a random facewear from the array and adds it to a character.
    }
    else
    {
        removeGoggles _this; // Occasionally, no facewear is used, so this removes any facewear a character might have had defined in his class.
    };
};

#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	FBDriveSM.enable = 1;
}

void _CYCLIC ProgramCyclic(void)
{
	FB_DoorSM(&FBDoorSM);
	
	FBDriveSM.speed = FBDoorSM.speed;
	FB_DriveSM(&FBDriveSM);
	
	FBLedSM.state = FBDoorSM.state;
	FB_LedSM(&FBLedSM);
	FBLedSM.timer++;

}

void _EXIT ProgramExit(void)
{
	// Insert code here 

}


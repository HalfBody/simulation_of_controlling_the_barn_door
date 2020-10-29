
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "Library.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void FB_DriveSM(struct FB_DriveSM* inst)
{
	if(inst->enable == 1)
	{
		switch(inst->state & 0x6F)
		{
			case ST_DISABLE:
				inst->command = CMD_SHUTDOWN;
				break;	
			case ST_SWITCHED_ON:
				inst->command = CMD_SWITCH_ON;
				break;
			case ST_READY:
				inst->command = CMD_ENABLE;
				break;
		}
	}
	else inst->command = CMD_SHUTDOWN;
}

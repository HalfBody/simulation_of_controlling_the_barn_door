
TYPE
	DoorSM : 
		(
		ST_INIT,
		ST_UNKNOWN,
		ST_OPEN,
		ST_CLOSE,
		ST_ACC_POS,
		ST_ACC_NEG,
		ST_POS,
		ST_NEG,
		ST_DEC_POS,
		ST_DEC_NEG
		);
	StateOfFreqConv : 
		(
		DISABLED,
		SWITCHED_ON,
		READY
		);
	CommandToDoor : 
		(
		CMD_SWITCH_ON,
		CMD_SHUTDOWN,
		CMD_ENABLE
		);
END_TYPE

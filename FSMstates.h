#pragma once
enum FSMStates {
	FIN, ERROR, NEWOBJ, NEWARRAY, NEWVALUE, NEWSTRING, NEWNUM, NEWTRUE, NEWFALSE, NEWNULL,
	objectState0, objectState1, objectState2,
	arrayState0, arrayState1,
	valueState0,
	strState0, strState1, strState2, strState3, strState4,
	numState0, numState1, numState2, numState3, numState4, numState5, numState6, numState7, numState8
};
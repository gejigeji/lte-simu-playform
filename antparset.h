struct antpar;
typdef struct antpar antpar;
struct antpar {
	float BsGainPattern;
	float* BsGainAnglesAz;
	float* BsGainAnglesEl;
	float BsElementPosition;
	float MsGainPattern;
	float* MsGainAnglesAz;
	float* MsGainAnglesEz;
	float MsElementPosition;
	char* InterpFunction;
	char* InterpMethod;
}

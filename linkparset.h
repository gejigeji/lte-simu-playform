#include"scmparset.h"

struct linkpar;
typedef struct linkpar linkpar;
struct linkpar {
	float* MsBsDistance;
	float* xlabel;
	float* ylabel;
	float* ThetaBs;
	float* ThetaMs;
	float* OmegaBs;
	float* OmegaMs;
	float* MsVelocity;
	float* MsDirection;
	float* MsHeight;
	float* BsHeight;
	int* MsNumber;
};

linkpar* linkparset(int, int, int, scmpar*);

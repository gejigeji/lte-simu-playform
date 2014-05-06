#include"rand_gen.h"

#ifndef PI
#define PI 3.14159265
#endif

struct location;
typedef struct location location;

struct location {
	float* x_label;
	float* y_label;
	float* distance;
	float* BS_thet;
};

location* mu_cell(int, float, int);

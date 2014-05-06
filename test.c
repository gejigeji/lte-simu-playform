#include "rep_gen.h"
#include <stdio.h>


int main () {
	float* p = rep_gen_n(10, 4);
	printf("%f\n", p[2]);
}

/*
#include "rep_gen.h"
#include <stdio.h>


int main () {
	float* p = rep_gen_n(10, 4);
	printf("%f\n", p[2]);
}
*/

/*
#include "rand_gen.h"
#include <stdio.h>
#include "foo1.h"
#include "foo2.h"
static unsigned int rand_gen_tmp_x;
rand_gen_tmp_x = (int)time(NULL);
static unsigned int rand_gen_tmp_y = 34353;
static unsigned int rand_gen_tmp_z = 57768;
static unsigned int rand_gen_tmp_w = 1564;

int main () {
	foo1();
	foo1();
	foo1();
	foo1();
	foo2();
	foo2();
	foo2();
	foo2();
}
*/

#include <stdio.h>

int main () {
	int i ;
	for (i = 0 ; i < 10 ; i++ ) {
		foo1();
		foo2();

	}
}

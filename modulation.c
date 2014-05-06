#include <stdio.h>
#include <complex.h>
int main() {
	float complex z=1+3I;
	printf("%f %f \n", creal(z), cimag(z));
}


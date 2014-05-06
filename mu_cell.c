#include<math.h>
#include"mu_cell.h"

location* mu_cell(int num, float rmax, int Num_fan) {
	float* y = rand_gen_n(num);
	float* x = rand_gen_n(num);

	for (int i=0; i<num; i++) {
		y[i] = 1.5*rmax*y[i] - rmax/2.0;
		x[i] = sqrt(3)*rmax*x[i]-sqrt(3)/2.0*rmax;
	}

	float* a = (float *)calloc(num, sizeof(float));
	float* b = (float *)calloc(num, sizeof(float));
	for (int i=0; i<num; i++) {
		a[i] = y[i] - sqrt(3)/3*x[i] -rmax;
		b[i] = y[i] + sqrt(3)/3*x[i] -rmax;
	}

	for (int i=0; i<num; i++) {
		if (a[i] > 0){
			x[i] += sqrt(3)/2*rmax;
			y[i] -= 1.5*rmax;
		}
		if (b[i] > 0){
			x[i] -= sqrt(3)/2*rmax;
			y[i] -= 1.5*rmax;
		}
	}

	float* d = (float *)calloc(num, sizeof(float));
	for (int i=0; i<num; i++) {
		d[i] = sqrt(x[i]*x[i] + y[i]*y[i]);
	}

	float* BS_thet = (float *)calloc(num, sizeof(float));
	for (int i=0; i<num; i++) {
		BS_thet[i] = atan(y[i]/x[i]);
		if (x[i] < 0){
			if (y[i] > 0) BS_thet[i] += PI;
			else BS_thet[i] -= PI;
		}
		BS_thet[i] *= 180/PI;
	}

	location *loca = (location*)malloc(sizeof(location));
	loca->x_label = x;
	loca->y_label = y;
	loca->distance = d;
	loca->BS_thet = BS_thet;

	return loca;
}

/*
int main () {
	location* lo = mu_cell(10, 100, 1);
	for(int i=0 ;i < 10; i++){
		printf("%f %f %f %f\n", lo->x_label[i], lo->y_label[i], lo->distance[i], lo->BS_thet[i]);
	}
	return 0;
}
*/

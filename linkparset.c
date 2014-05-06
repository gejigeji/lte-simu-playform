#include"linkparset.h"
#include"rand_gen.h"
#include"rep_gen.h"
#include"mu_cell.h"

linkpar* linkparset(int num, int rmax, int seed, scmpar* scmparptr) {
	if (num <= 0) num = 1;
	if (rmax <= 0) rmax = 289;
	if (scmparptr->Numfan <= 0) scmparptr->Numfan = 1;

	linkpar* linkparptr = (linkpar*)malloc(sizeof(linkpar));

	location * loca = mu_cell(num, rmax, scmparptr->Numfan);

	float* ThetaMs = rand_gen_n(num);
	for (int i=0; i<num ; i++) {
		ThetaMs[i] = 360*(ThetaMs[i]-0.5);
	}
	
	float* MsVelocity = rand_gen_n(num);
	for (int i=0; i<num ; i++) {
		MsVelocity[i] = 360*(MsVelocity[i]-0.5);
	}

	int* MsNum = (int *)calloc(num, sizeof(int));
	for (int i=0; i<num ; i++) {
		MsNum[i] = i+1;
	}

	linkparptr->MsBsDistance = loca->distance;
	linkparptr->xlabel = loca->x_label;
	linkparptr->ylabel = loca->y_label;
	linkparptr->ThetaBs =  loca->BS_thet;
	linkparptr->ThetaMs = ThetaMs;
	linkparptr->OmegaBs = rep_gen_n(num, 0);
	linkparptr->OmegaMs = rep_gen_n(num, 0);
	linkparptr->MsVelocity = rep_gen_n(num, 3/3.6);
	linkparptr->MsDirection = MsVelocity;
	linkparptr->MsHeight = rep_gen_n(num, 1.5);
	linkparptr->BsHeight = rep_gen_n(num, 32);
	linkparptr->MsNumber = MsNum;

	return linkparptr;
}

/*
int main() {
	scmpar* scmparptr = scmparset();
	linkparset(10, 289, 0, scmparptr);
	return 0;
}
*/

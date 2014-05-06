#include"antparset.h"

antpar* antparset(scmpar* scmparptr) {
	int Num_fan = scmparptr->Numfan;
	int Num_ant = scmparptr->NumBsElements;
	
	int GAIN;

	switch (Num_fan) {
		case 1:
			GAIN = 1;
		/*
		case 3:
			GAIN = rep_gen_n(Num_ant*90, 0);
			g = 
			for(int
			*/
		}
	antpar* antparptr = (antpar*)malloc(sizeof(antpar));

	antparptr->BsGainPattern = GAIN;
	antparptr->BsGainAnglesAz = NULL;
	antparptr->BsGainAnglesEl = NULL;
	antparptr->BsElementPosition = 0.5;
	antparptr->MsGainPattern = GAIN;
	antparptr->MsGainAnglesAz = NULL;
	antparptr->MsGainAnglesEl = NULL;
	antparptr->MsElementPosition = 0.5;
	antparptr->InterpFunction = NULL;
	antparptr->InterpMethod = NULL;
	
	return antparptr;
}

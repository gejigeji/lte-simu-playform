#include<stdlib.h>
#include"scmparset.h"

scmpar* scmparset() {
	scmpar * scmparptr = (scmpar *)malloc(sizeof(scmpar));
	scmparptr->Numfan = 1;
	scmparptr->NumBsElements = 4;
	scmparptr->NumMsElements = 4;
	scmparptr->Scenario = URBAN_MICRO;
	scmparptr->SampleDensity = 90;
	scmparptr->NumTimeSamples = 10;
	scmparptr->UniformTimeSampling = false;
	scmparptr->BsUrbanMacroAs = 8;
	scmparptr->NumPaths = 6;
	scmparptr->NumSubPathsPerPath = 20;
	scmparptr->IntraClusterDsUsed = false;
	scmparptr->FixedPdpUsed = false;
	scmparptr->FixedAnglesUsed = false;
	scmparptr->DriftDelaysAngles = false;
	scmparptr->DriftShadowFading = false;
	scmparptr->DriftFrequency = false;
	scmparptr->CenterFrequency = 2000000000;
	scmparptr->ScmOptions = NONE;
	scmparptr->DelaySamplingInterval = 0.000000065104;
	scmparptr->PathLossModeUsed = false;
	scmparptr->ShadowingModelUsed = false;
	scmparptr->PathLossModel = NULL;
	scmparptr->AlternativePathloss = false;
	scmparptr->AnsiC_core = false;
	scmparptr->LookUpTable = 0;
	scmparptr->RandomSeed = 0;
}






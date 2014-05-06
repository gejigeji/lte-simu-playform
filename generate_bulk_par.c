generate_bulk_par(scmpar* scmparptr, linkpar* linkparptr, antpar* antparptr) {
	int Scenario = scmparptr->Scenario;

	switch (Scenario) {
		case SUBURBAN_MACRO:
		case URBAN_MACRO:
			bulk_parameters = macro(scmpar* scmparptr, linkpar* linkparptr, antpar* antparptr);
			break;
		case URBAN_MICRO:
			bulk_parameters = micro(scmpar* scmparptr, linkpar* linkparptr, antpar* antparptr);
	}

float[][] fixedAods(scmpar* scmparptr) {
	int N = 6;
	int M = 20;

	float aod_deg[10];
	float delta_nm_aod[6][20];
	float mean_aods[6];
	float aods[20][6];
	switch (scmparptr->Scenario) {
		case URBAN_MACRO:
			aod_deg[0] = 0.0894;
			aod_deg[1] = 0.2826;
			aod_deg[2] = 0.4984;
			aod_deg[3] = 0.7431;
			aod_deg[4] = 1.0257;
			aod_deg[5] = 1.3594;
			aod_deg[6] = 1.7688;
			aod_deg[7] = 2.2961;
			aod_deg[8] = 3.0389;
			aod_deg[9] = 4.3101;
			for (int i=0; i<N; i++) {
				for (int j=0; j<20; j++) {
					if (j<10) delta_nm_aod[i][j] = aod_deg[j];
					else delta_nm_aod[i][j] = -aod_deg[j];
				}
			}
			if (scmparptr->BsUrbanMacroAs == 8) {
				mean_aods[0] = 81.9720;
				mean_aods[1] = 79.6210;
				mean_aods[2] = 80.5354;
				mean_aods[3] = 98.6319;
				mean_aods[4] = 102.1308;
				mean_aods[5] = 107.0643;
			} else {
				mean_aods[0] = -127.2788;
				mean_aods[1] = -136.8071;
				mean_aods[2] = -129.9678;
				mean_aods[3] = -96.2155;
				mean_aods[4] = -159.5999;
				mean_aods[5] = 173.1860;
			}
			break;
		case SUBURBAN_MACRO:
			aod_deg[0] = 0.0894;
			aod_deg[1] = 0.2826;
			aod_deg[2] = 0.4984;
			aod_deg[3] = 0.7431;
			aod_deg[4] = 1.0257;
			aod_deg[5] = 1.3594;
			aod_deg[6] = 1.7688;
			aod_deg[7] = 2.2961;
			aod_deg[8] = 3.0389;
			aod_deg[9] = 4.3101;
			for (int i=0; i<N; i++) {
				for (int j=0; j<20; j++) {
					if (j<10) delta_nm_aod[i][j] = aod_deg[j];
					else delta_nm_aod[i][j] = -aod_deg[j];
				}
			}
			mean_aods[0] = -101.3376;
			mean_aods[1] = -110.9587;
			mean_aods[2] = -100.8629;
			mean_aods[3] = -112.9888;
			mean_aods[4] = -115.5088;
			mean_aods[5] = -118.0681;
			break;
		case URBAN_MICRO:
			aod_deg[0] = 0.2236;
			aod_deg[1] = 0.7064;
			aod_deg[2] = 1.2461;
			aod_deg[3] = 1.8578;
			aod_deg[4] = 2.5642;
			aod_deg[5] = 3.3986;
			aod_deg[6] = 4.4220;
			aod_deg[7] = 5.7403;
			aod_deg[8] = 7.5974;
			aod_deg[9] = 10.7753;
			for (int i=0; i<N; i++) {
				for (int j=0; j<20; j++) {
					if (j<10) delta_nm_aod[i][j] = aod_deg[j];
					else delta_nm_aod[i][j] = -aod_deg[j];
				}
			}
			mean_aods[0] = 6.6100;
			mean_aods[1] = 50.8297;
			mean_aods[2] = 14.1360;
			mean_aods[3] = 38.3972;
			mean_aods[4] = 6.6690;
			mean_aods[5] = 40.2849;
	}
	for (int i=0; i<M; i++) {
		for (int j=0; j<6; j++) {
			aods[i][j] = mean_aods[j] + delta_nm_aod[i][j];
		}
	}
	return aods;
}

float[][] fixedAoas(scmpar* scmparptr){
	int N = 6;
	int M = 20;
	float aoa_deg[10];
	float delta_nm_aoa[6][20];
	float mean_aoas[6];
	float aoas[20][6];
	aoa_deg[0] = 1.5679;
	aoa_deg[1] = 4.9447;
	aoa_deg[2] = 8.7224;
	aoa_deg[3] = 13.0045;
	aoa_deg[4] = 17.9492;
	aoa_deg[5] = 23.7899;
	aoa_deg[6] = 30.9538;
	aoa_deg[7] = 40.1824;
	aoa_deg[8] = 53.1816;
	aoa_deg[9] = 75.4274;
	for (int i=0; i<N; i++) {
		for (int j=0; j<20; j++) {
			if (j<10) delta_nm_aoa[i][j] = aoa_deg[j];
			else delta_nm_aoa[i][j] = -aoa_deg[j];
		}
	}
	switch (scmparptr->Scenario) {
		case URBAN_MACRO:
			if (scmparptr->BsUrbanMacroAs == 8) {
				mean_aoas[0] = 65.7489;
				mean_aoas[1] = 143.1863;
				mean_aoas[2] = 45.6454;
				mean_aoas[3] = 32.5131;
				mean_aoas[4] = -91.0551;
				mean_aoas[5] = -19.1657;
			} else {
				mean_aoas[0] = 76.4750;
				mean_aoas[1] = -14.5707;
				mean_aoas[2] = -11.8704;
				mean_aoas[3] = 17.7089;
				mean_aoas[4] = 167.6567;
				mean_aoas[5] = 139.0774;
			}
			break;
		case SUBURBAN_MACRO:
			mean_aoas[0] = 156.1507;
			mean_aoas[1] = 39.3383;
			mean_aoas[2] = -137.2020;
			mean_aoas[3] = 115.1626;
			mean_aoas[4] = 91.1897;
			mean_aoas[5] = 4.6769;
		case URBAN_MICRO:
			mean_aoas[0] = 0.6966;
			mean_aoas[1] = 146.0669;
			mean_aoas[2] = -13.2268;
			mean_aoas[3] = -30.5485;
			mean_aoas[4] = -11.4412;
			mean_aoas[5] = -1.0587;
	}

	for (int i=0; i<M; i++) {
		for (int j=0; j<6; j++) {
			aoas[i][j] = mean_aoas[j] + delta_nm_aoa[i][j];
		}
	}
	return aoas;
}

steps(scmpar* scmparptr, linpar* linkparptr) {
	int* MsNumber = linkparptr->MsNumber;
	int Scenario = scmparptr->Scenario;
	int ScmOptions = scmparptr->ScmOptions;
	int NumLinks = sizeof(*(linkparptr->MsNumber))/sizeof(int);
	float Bsq[3][3] = {{0,0,0}, {0,0,0}, {0,0,0.7071}};
	float bsq = 0.7071;
	float C[3][3] = {{0.8997, 0.1926, -0.3917}, {0.1926, 0.8997, -0.3917}, {-0.3917, -0.3917, 0.4395}};
	int NumofMs = (linkparptr->MsNumber)[N




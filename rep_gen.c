#include"rep_gen.h"
float* rep_gen_n(int n, float v) {
	float *rep_sq = (float *)calloc(n, sizeof(float));
	for (int i=0; i<n; i++) {
		rep_sq[i] = v;
	}
	return rep_sq;
}

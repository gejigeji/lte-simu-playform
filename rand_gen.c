#include"rand_gen.h"

float* rand_gen_n(int n){
	srand((int)time(NULL));
	int j;
	float *rand_sq = (float *)calloc(n, sizeof(float));
	for ( j = 0; j < n; j++) {
		rand_sq[j] = (float)rand()/RAND_MAX;
	}
	return rand_sq;
}


/*
float randn_gen(float u, float v) {
	float 
	int key = time(NULL);
	s1 = rand_gen(key);
	key = s1 + time(NULL)
	*/


/*
int rand_gen() {
	unsigned int t;
	t = rand_gen_tmp_x ^ ( rand_gen_tmp_x << 11);
	rand_gen_tmp_x = rand_gen_tmp_y; rand_gen_tmp_y = rand_gen_tmp_z; rand_gen_tmp_z = rand_gen_tmp_w;
	return rand_gen_tmp_w = rand_gen_tmp_w ^ (rand_gen_tmp_w >> 19) ^ t ^ (t >> 8);
}
*/

/*
#include <stdio.h>
int main () {
	rand_gen_tmp_x = (int)time(NULL);
	int i, j;
		int count[5] = {0} ;
	for (j = 0; j < 1000000; j ++) {
		int r = rand_gen();
		float tmp =(float)r/2147483647;
		if (tmp < -0.6){
			count[0]++;
		}else if (tmp <-0.2) {
			count[1]++;
		}else if (tmp <0.2) {
			count[2]++;
		}else if (tmp <0.6) {
			count[3]++;
		}else {
			count[4]++;
		}
	}
	printf("%d %d %d %d %d\n", count[0], count[1], count[2], count[3], count[4]);
	printf("%u\n", (unsigned int)-1);
}
*/

/*
#include <stdio.h>
int main() {
	srand((int)time(NULL));
	int i,j;
	int key;
		int count[5] = {0} ;
	for (j = 0; j < 1000000; j ++) {
		float tmp = (float)rand()/RAND_MAX;
		if (tmp < 0.2){
			count[0]++;
		}else if (tmp <0.4) {
			count[1]++;
		}else if (tmp <0.6) {
			count[2]++;
		}else if (tmp <0.8) {
			count[3]++;
		}else {
			count[4]++;
		}
		//printf("%f\n", (float)key/RAND_MAX);
	}
	printf("%d %d %d %d %d\n", count[0], count[1], count[2], count[3], count[4]);
}
*/

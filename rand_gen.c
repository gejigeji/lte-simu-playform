#include"rand_gen.h"

int rand_gen(int key) {
	srand(key);
	int i = rand();
	return i;
}

float* rand_gen_n(int n){
	int key = time(NULL);
	float *rand_sq = (float *)calloc(n, sizeof(float));
	for (int j = 0; j < n; j++) {
		int rand_int = rand_gen(key);
		key = rand_int + time(NULL);
		rand_sq[j] = (float)rand_int/RAND_MAX;
	}
	return rand_sq;
}

/*
int main() {
	float* rand_sq = rand_gen_n(10);
	for (int i=0; i<10; i++){
		printf("%f\n", rand_sq[i]);
	}
}
*/
		
/*
int main() {
	int i;
	int key;
		int count[5] = {0} ;
	key = time(NULL);
	for (int j = 0; j < 1000000; j ++) {
		key = rand_gen();
		float tmp = (float)key/RAND_MAX;
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

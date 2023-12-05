#include <stdlib.h>

int main() {
	int vyska = 5;
	int sirka = 7;
	float* f = (float*)malloc(vyska * sirka * sizeof(float));
	for (int i = 0; i < vyska; i++) {
		for (int j = 0; j < sirka; j++) {
			printf("%f\n", f[(vyska*i) * j]);
		}
	}
}
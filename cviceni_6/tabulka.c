#include "tabulka.h"
char** alokuj(int a, int b) {
	char** tabulka;
	tabulka = (char**)malloc(a * sizeof(char*));
	for (int i = 0; i < a; i++) {
		tabulka[i] = (char*)malloc(b * sizeof(char));
	}
	return tabulka;
}

char*** zamaskuj(char** code, int a, int b) {
	int maska = (a * b) / 5;
	char*** mask;
	mask = (char***)malloc(a * sizeof(char**));
	for (int i = 0; i < a; i++) {
		mask[i] = (char**)malloc(b*sizeof(char*));
		for (int j = 0; j < b; j++) {
			if (((i+1 * j+1) % maska) == 0) {
				mask[i][j] = &code[i][j];
			}
			else {
				mask[i][j] = (char *)NULL;
			}
		}
	}
	return mask;
}

void vykresli(char*** code, int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (code[i][j] == NULL) {
				printf("*\t");
				continue;
			}
			printf("%c\t", (char)*code[i][j]);
		}
		printf("\n");
	}
}
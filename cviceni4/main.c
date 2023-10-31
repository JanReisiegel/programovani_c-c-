#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "pole.h"

int main() {
	int delka = 0;
	printf("zadej délku pole:");
	scanf("%d", &delka);
	char* p_pole1 = poleChar(delka);
	naplnitChar(p_pole1, delka);
	char** p_pole2 = (char**)malloc(delka * sizeof(char*));
	copyArray(p_pole1, p_pole2, delka);
	vypsatOriginalniPole(p_pole1, delka);
	vypsatSifrovanePole(p_pole2, delka);

	int vysledekTestu = test(p_pole1, p_pole2, delka);
	if (vysledekTestu == 0) {
		printf("test OK\n");
	}
	else {
		printf("test mel pocet chyb %d", vysledekTestu);
	}
	free((void*)p_pole1);
	free((void*)p_pole2);
}

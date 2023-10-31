#include "pole.h"
char* poleChar(int delka) {
	return (char*)malloc(delka * sizeof(char));
}
void naplnitChar(char* p_pole, int delka) {
	for (int i = 0; i < delka; i++) {
		p_pole[i] = 'A' + i;
	}
}

void copyArray(char* p_pole1, char** p_pole2, int delka) {
	for (int i = 0; i < delka; i++) {
		p_pole2[i] = &p_pole1[delka-i-1];
	}
}

void vypsatOriginalniPole(char* p_pole, int delka) {
	for (int i = 0; i < delka; i++) {
		printf("%c ", p_pole[i]);
	}
	printf("\n");
}
void vypsatSifrovanePole(char** p_pole, int delka) {
	for (int i = 0; i < delka; i++) {
		printf("%c ", *p_pole[i]); //*(*p_pole + i)
	}
	printf("\n");
}

int test(char* p_pole1, char** p_pole2, int delka) {
	int chyba = 0;
	for (int i = 0; i < delka; i++)
	{
		if ((p_pole1 +i) != p_pole2[delka - i -1]) {
			chyba++;
		}
		if ((*p_pole1 + i) != *p_pole2[delka - i - 1]) {
			chyba++;
		}
	}
	return chyba;
}
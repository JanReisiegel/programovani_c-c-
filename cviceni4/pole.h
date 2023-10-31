#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

char* poleChar(int delka);
void naplnitChar(char* p_pole, int delka);
void copyArray(char* p_pole1, char* p_pole2, int delka);
void vypsatOriginalniPole(char* p_pole, int delka);
void vypsatSifrovanePole(char** p_pole, int delka);
int test(char* p_pole1, char** p_pole2, int delka);
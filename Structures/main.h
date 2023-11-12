#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct polozka {
	char* nazev;
	float cena;
} POLOZKA;

typedef struct uctenka {
	long date;
	int pocetPolozek;
	POLOZKA* polozky;
	float suma;
} UCTENKA;

float getSuma(UCTENKA u);
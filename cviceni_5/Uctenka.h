#pragma once
#include "Polozka.h"
typedef struct uctenka{
	time_t date;
	float cenaCelkem;
	int pocetPolozek;
	struct polozka* polozky;
}UCTENKA;

float sumaUctenky(UCTENKA* u);
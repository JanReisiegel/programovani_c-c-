#pragma once
#include <time.h>
#include "Polozka.h"
typedef struct uctenka{
	time_t date;
	int pocetPolozek;
	POLOZKA* polozky;
}UCTENKA;

float sumaUctenky(UCTENKA u);
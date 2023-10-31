#pragma once
#include <string.h>
#include <time.h>

typedef struct {
	char* jmeno;
	float cena;
}POLOZKA;

float getCena(POLOZKA* a);

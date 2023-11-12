#pragma once
#include <string.h>

typedef struct {
	char* jmeno;
	float cena;
}POLOZKA;

float getCena(POLOZKA* a);

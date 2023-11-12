#include "Uctenka.h"

float sumaUctenky(UCTENKA u) {
	float suma = 0;
	for (int i = 0; i < u.pocetPolozek; i++) {
		suma = suma + u.polozky[i].cena;
	}
}
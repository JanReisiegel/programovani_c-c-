#include "main.h"

int main() {
	UCTENKA u1;
	u1.date = 1000;
	u1.pocetPolozek = 3;
	u1.polozky = (POLOZKA*)malloc(u1.pocetPolozek * sizeof(POLOZKA));

	POLOZKA p1;
	p1.nazev = "Chleba";
	p1.cena = 56.98;
	POLOZKA p2;
	
	p2.nazev = "Máslo";
	p2.cena = 46.50;
	POLOZKA p3;
	p3.nazev = "CoCa-CoLa";
	p3.cena = 25.60;

	u1.polozky[0] = p1;
	u1.polozky[1] = p2;
	u1.polozky[2] = p3;

	printf("%.2f", getSuma(u1));

	return 1;
}

float getSuma(UCTENKA u) {
	u.suma = 0.0;
	for (int i = 0; i < u.pocetPolozek; i++) {
		u.suma += u.polozky[i].cena;
	}
	return u.suma;
}
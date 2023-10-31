#include "main.h"

int main() {
	//UCTENKA u1;
	//time_t t;
	//time(&t);
	//u1.date = t;
	//u1.pocetPolozek = 1;
	//u1.polozky = (POLOZKA*)malloc(sizeof(POLOZKA) * u1.pocetPolozek);
	POLOZKA p_p;
	p_p.jmeno = (char*)malloc(sizeof(char) * 10);
	strcpy(p_p.jmeno, "Chleba");
	p_p.cena = 55.90;
	//printf("%s %i", *p_p.jmeno, p_p.cena);
}

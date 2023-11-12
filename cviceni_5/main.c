#include "main.h"

int main() {
	UCTENKA u1;
	time(&u1.date);
	u1.pocetPolozek = 7;

	u1.polozky = (POLOZKA*)malloc(u1.pocetPolozek * sizeof(POLOZKA));

	POLOZKA p1;
	p1.jmeno = "Chleba";
	p1.cena = 56.98;

	POLOZKA p2;
	p2.jmeno = "M slo";
	p2.cena = 46.50;

	POLOZKA p3;
	p3.jmeno = "CoCa-CoLa";
	p3.cena = 25.60;

	POLOZKA p4;
	p4.jmeno = "Mleko";
	p4.cena = 28.70;

	POLOZKA p5;
	p5.jmeno = "Jogurt";
	p5.cena = 7.90;

	POLOZKA p6;
	p6.jmeno = "Cokolada Studentska pecet";
	p6.cena = 108.50;

	POLOZKA p7;
	p7.jmeno = "Auto Ford Fiesta 1.0";
	p7.cena = 589699.99;

	u1.polozky[0] = p1;
	u1.polozky[1] = p2;
	u1.polozky[2] = p3;
	u1.polozky[3] = p4;
	u1.polozky[4] = p5;
	u1.polozky[5] = p6;
	u1.polozky[6] = p7;

	printf("Celkova cena nakupu je: %.2f. Datum a cas nakupu: %s", sumaUctenky(u1), ctime(&u1.date));
}

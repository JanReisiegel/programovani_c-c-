#include "main.h"

int main() {
	int a, b;
	a = 5;
	b = 5;
	char** code;
	code = alokuj(a, b);
	code[0][0] = 'A';
	code[0][1] = 'B';
	code[0][2] = 'C';
	code[0][3] = 'D';
	code[1][0] = 'E';
	code[1][1] = 'F';
	code[1][2] = 'G';
	code[1][3] = 'H';
	code[2][0] = 'I';
	code[2][1] = 'J';
	code[2][2] = 'K';
	code[2][3] = 'L';
	code[3][0] = 'M';
	code[3][1] = 'N';
	code[3][2] = 'O';
	code[3][3] = 'P';
	code[0][4] = 'Q';
	code[1][4] = 'R';
	code[2][4] = 'S';
	code[3][4] = 'T';
	code[4][0] = 'U';
	code[4][1] = 'V';
	code[4][2] = 'W';
	code[4][3] = 'X';
	code[4][4] = 'Y';

	char*** mask;
	mask = zamaskuj(code, a, b);
	vykresli(mask, a, b);
}
#include "editor.h"
#include <iostream>

int main() {
	Editor test = Editor("AHOJ");
	Bolt ahoj;
	Italic ital;
	Odstavec o = Odstavec("red");
	//test.setFormat(&ahoj);
	//test.setFormat(&ital);
	test.setFormat(&o);
	cout << test.getFinalTextStyle();
}
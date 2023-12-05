#include "Header.h"

int main() {
	try
	{
		Plotr plotr = Plotr();
		plotr.AddPen("blue", 11);
		plotr.Plot("blue", 11);
		plotr.Plot("red", 1);
		plotr.Plot("red", 0);

	}
	catch (const char *s)
	{
		cout << s << endl;
	}
	catch (...) {
		cout << "Error" << endl;
	}
	return 1;
}
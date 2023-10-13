#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* txtFile;
	FILE* binFile;
	txtFile = fopen("Numbers.txt", "w");
	binFile = fopen("Numbers.dat", "wb");
	if (txtFile == NULL) {
		printf("Nelze otevrit");
		return 1;
	}
	if (binFile == NULL) {
		printf("Nelze otevrit");
		return 1;
	}
	int decimalNumber;
	float floatNumber;
	double doubleNumber;
	printf("Zadej tri cisla: typu int, typu float a typu double:");
	scanf("%d %f %lf", &decimalNumber, &floatNumber, &doubleNumber);

	fwrite(&decimalNumber, sizeof(int), 1, binFile);
	fwrite(&floatNumber, sizeof(float), 1, binFile);
	fwrite(&doubleNumber, sizeof(double), 1, binFile);
	fclose(binFile);

	fprintf(txtFile, "%d %f %lf \n", decimalNumber, floatNumber, doubleNumber);
	fclose(txtFile);

	printf("Zadana cisla:\nint\t%d\nfloat\t%f\ndouble\t%lf\n\n", decimalNumber, floatNumber, doubleNumber);
	int testCisel;
	testCisel = test();
	return 0;
}

int test() {
	FILE* binFile, *txtFile;

	binFile = fopen("Numbers.dat", "rb");
	if (binFile == NULL) { 
		return 10; 
	}
	txtFile = fopen("Numbers.txt", "r");
	if (txtFile == NULL) { 
		return 11; 
	}

	int binInt, txtInt;
	float binFloat, txtFloat;
	double binDouble, txtDouble;

	fscanf(txtFile, "%d %f %lf", &txtInt, &txtFloat, &txtDouble);
	fread(&binInt, sizeof(int), 1, binFile);
	fread(&binFloat, sizeof(float), 1, binFile);
	fread(&binDouble, sizeof(double), 1, binFile);
	printf("Cisla z binarniho souboru:\nint\t%d\nfloat\t%f\ndouble\t%lf\n\n", binInt, binFloat, binDouble);
	printf("Cisla z textoveho souboru:\nint\t%d\nfloat\t%f\ndouble\t%lf\n\n", txtInt, txtFloat, txtDouble);
	return 0;
}
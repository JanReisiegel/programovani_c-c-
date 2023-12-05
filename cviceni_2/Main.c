#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void czechFlag(int height, int width);

int main() {
	FILE* confFile;
	confFile = fopen("Config.txt", "r");
	if (confFile == NULL) {
		printf("Nelze najít");
		return 1;
	}
	int width, height;
	fscanf(confFile, "%d\n%d", &width, &height);
	printf("width:\t%d\nheight:\t%d\n", width, height);
	czechFlag(height, width);
	
}

void czechFlag(int height, int width) {
	FILE* flagBin;
	flagBin = fopen("flag.dat", "wb");
	for (int i = 0; i < floor(height / 2) - 1; i++)
	{

		for (int j = 0; j < width; j++)
		{

			if (j <= i) {
				char hvezda;
				printf("*");
				fwrite("*", sizeof(char), flagBin);
			}
			else {
				printf("-");
			}
		}
		printf("\n");

	}
	for (int i = 0; i < width; i++)
	{
		if (i <= (height / 2) - 1) {
			printf("*");
		}
		else {
			printf("-");
		}
	}
	printf("\n");
	for (int x = (int)floor(height / 2) - 1; x >= 0; x--)
	{
		for (int y = 0; y < width; y++)
		{
			if (y <= x)
			{
				printf("*");
			}
			else {
				printf("+");
			}
		}
		printf("\n");
	}
}
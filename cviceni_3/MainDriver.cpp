#include "Geometrics.h"

int main() {
	int r, a, va, A, B, choice;
	while (true) {
		printf("Zadej co chces zadat: 1 kruh, 2 obdelnik, 3 trojuhelnik\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: {
			printf("r=");
			scanf("%d", &r);
			printf("\nObsah kruhu je %fj^2 a obvod kruhu je %fj\n", circleArea(r), circleCircumference(r));
			break;
		}
		case 2: {
			printf("A=");
			scanf("%d", &A);
			printf("\nB=");
			scanf("%d", &B);
			printf("\nObsah obdelnika je %fj^2 a obvod obdelnika je %fj\n", squareArea(A, B), squareCircumference(A, B));
			break;
		}
		case 3: {
			printf("a=");
			scanf("%d", &a);
			printf("\nva=");
			scanf("%d", &va);
			printf("\nObsah trojuhelnika je %fj^2 a obvod trojuhelnika je %fj\n", triangleArea(a, va), triangleCircumference(a, va));
			break;
		}
		default:
			return 1;
		}
	}
	
	return 0;
}
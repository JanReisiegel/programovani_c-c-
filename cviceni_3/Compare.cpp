#include "Compare.h"

extern int compareSqTr(int A, int B, int a, int va) {
	float sqArea = squareArea(A, B);
	float trArea = triangleArea(a, va);
	if (sqArea > trArea) {

	}
	if (trArea> sqArea)
	{

	}
	if (trArea == sqArea) {

	}
}

extern int compareCiTr(int r, int a, int va) {
	float ciArea = circleArea(r);
	float trArea = triangleArea(a, va);
	if (ciArea > trArea) {

	}
	if (trArea > ciArea)
	{

	}
	if (trArea == ciArea) {

	}

}
extern int compareSqCi(int A, int B, int r) {
	float sqArea = squareArea(A, B);
	float ciArea = circleArea(r);
	if (sqArea > ciArea) {
		float = sqArea/
	}
	if (ciArea > sqArea)
	{

	}
	if (ciArea == sqArea) {

	}
}
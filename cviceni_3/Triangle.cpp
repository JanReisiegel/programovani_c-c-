#include "Triangle.h"

extern float triangleArea(int a, int va) {
	return area(a, va);
}
extern float triangleCircumference(int a, int va) {
	return 2 * pyth(a, va) + a;
}
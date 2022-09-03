#include "stdlib.h"
#include "stdio.h"
#include "math.h"

int main() {
	// need 24 bytes
	double a, b, c;
	char arr[6];
	// 6 bytes

	gets_s(arr, 2); //read 2 * 4 bytes for double
	a = atof(arr);

	gets_s(arr, 2);
	b = atof(arr);

	gets_s(arr, 2);
	c = atof(arr);

	if (a == 0) {
		printf(stderr, "Error! 'a' cannot be zero");
		exit(EXIT_FAILURE);
	}

	double disc = b * b - 4 * a * c;

	if (disc < 0) {
		printf(stderr, "No real roots!");
		exit(EXIT_FAILURE);
	}

	double x1 = (-b + sqrt(disc)) / (2 * a);
	double x2 = (-b - sqrt(disc)) / (2 * a);

	printf("x1 = %lg, x2 = %lg", x1, x2);

	exit(EXIT_SUCCESS);
}

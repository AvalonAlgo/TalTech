#pragma once

#include "Functions.h"

void oddOrEven() {
	char inArr[81];

	gets_s(inArr, 81);
	int i = atoi(inArr);
	int* p = &i;

	if ((*p) % 2 == 1) {
		printf("This number is odd\n");

		return;
	}

	printf("This number is even\n");

	return;
}

void whichCharacter() {
	char inArr[81];

	gets_s(inArr, 81);

	if (inArr[0] >= 48 && inArr[0] <= 57) {
		printf("Text starts with digit\n");

		return;
	}
	else if (inArr[0] >= 65 && inArr[0] <= 90) {
		printf("Text starts with capital letter\n");

		return;
	}
	else if (inArr[0] >= 97 && inArr[0] <= 122) {
		printf("Text starts with lowercase letter\n");

		return;
	}

	printf("The text starts with unidentified character\n");

	return;
}

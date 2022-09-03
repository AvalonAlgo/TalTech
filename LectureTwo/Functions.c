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

	// digit check
	for (int i = 48; i <= 57; i++) {
		if (inArr[0] == i) {
			printf("Text starts with digit");

			return;
		}
	}

	// Capital letter check
	for (int i = 65; i <= 90; i++) {
		if (inArr[0] == i) {
			printf("Text starts with capital letter");

			return;
		}
	}

	// Lowercase letter check
	for (int i = 97; i <= 122; i++) {
		if (inArr[0] == i) {
			printf("Text starts with lowercase letter");

			return;
		}
	}

	printf("The text starts with unidentified character");

	return;
}

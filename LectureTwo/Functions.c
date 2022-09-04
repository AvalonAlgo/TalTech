#pragma once

#include "Functions.h"

void arithmeticOperators_2() {
	char inArr[81];

	gets_s(inArr, 80);
	int i = atoi(inArr);

	if (i % 2 == 1) {
		printf("This number is odd\n");

		return;
	}

	printf("This number is even\n");

	return;
}

void logicalOperators_3() {
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

void looping4_1() {
	for (int i = 0; i <= 50; i++) {
		int r = rand();
		if (r < 500) {
			printf("%i\n", r);
		}
	}

	return;
}

void looping4_2() {
	int Fib[20];
	Fib[0] = 1;
	Fib[1] = 1;
	printf("%i\n", Fib[0]);
	printf("%i\n", Fib[1]);

	for (int i = 2; i <= 19; i++) { // times per size of array
		Fib[i] = Fib[i - 1] + Fib[i - 2];
		printf("%i\n", Fib[i]);
	}

	return;
}

void looping5_1() {
	int Rand[50];

	for (int i = 0; i <= 49; i++) {
		Rand[i] = rand();
	}

	int max = Rand[0];

	for (int j = 1; j <= 49; j++) {

		if (max < Rand[j]) {
			max = Rand[j];
		}
	}

	printf("%i", max);

	return;
}

void looping5_2() {
	char inArr[81];

	int letter_a_count = 0;

	gets_s(inArr, 80);

	for (int i = 0; i < 81; i++) {

		if (inArr[i] == '\0') {
			break;
		}
		else if (inArr[i] == ' ') {
			continue;
		}

		if (!((inArr[i] >= 65 && inArr[i] <= 90) ||
			(inArr[i] >= 97 && inArr[i] <= 122))) {

			printf("Illegal input\n");

			exit(EXIT_FAILURE);
		}

		if (inArr[i] == 'A' || inArr[i] == 'a') {
			letter_a_count++;
		}

		return;
	}

	printf("%i letters 'a' and 'A' found\n", letter_a_count);
}

void looping7() {
	char inArr[81];
	int undercase_vowel_count = 0;

	gets_s(inArr, 80);
	
	for (int i = 0; i < 81; i++) {

		if (inArr[i] == '\0') {
			break;
		}
		else if (inArr[i] == ' ') {
			continue;
		}

		if (inArr[i] == 'a' || inArr[i] == 'e' ||
			inArr[i] == 'i' || inArr[i] == 'o' ||
			inArr[i] == 'u' || inArr[i] == 'y') {

			undercase_vowel_count++;
		}

		return;
	}

	printf("%i undercase vowels found\n", undercase_vowel_count);
	
	return;
}

void looping8() {
	char text[21];

	for (int i = 0; i < sizeof(text); i++) {
		if (i == sizeof(text) - 1) {
			text[i] = '\0';

			break;
		}

		char c = _getche();
		text[i] = c;
		// no idea why declaring this works
		// rather  than not

		if (c == 27) {
			text[i] = '\0';

			break;
		}
	}
	
	printf("\nResult is : %s\n", text);

	exit(EXIT_SUCCESS);
}

void looping10() {
	char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'y' };
	int counters[] = { 0, 0, 0, 0, 0, 0 };

	while (1) {
		char c = _getche();

		if (c == '\r') {
			for (int i = 0; i < 6; i++) {
				printf("\n%c: %d", vowels[i], counters[i]);
			}

			exit(EXIT_SUCCESS);
		}
		
		if (c == 'a' || c == 'e' ||
			c == 'i' || c == 'o' ||
			c == 'u' || c == 'y') {

			for (int j = 0; j < 6; j++) {
				if (vowels[j] == c) {
					counters[j]++;

					break;
				}
			}
		}
	}
}

void looping11() {
	char inArr[81];
	char buf[2];
	int firstDigit = 0;

	gets_s(inArr, 80);

	for (int i = 0; i <= 80; i++) {
		if (inArr[i] >= '0' && inArr[i] <= '9') {
			buf[0] = inArr[i];
			buf[1] = '\0';

			firstDigit = atoi(buf);

			break;
		}
	}

	printf("%i", firstDigit);
}

void functions9() {
	char inArr[61];
	int a, b, c;

	gets_s(inArr, 20);
	a = atoi(inArr);

	gets_s(inArr, 20);
	b = atoi(inArr);

	gets_s(inArr, 20);
	c = atoi(inArr);

	int max = MaxOfThree(a, b, c);

	printf("%i", max);
}
int MaxOfThree(int a, int b, int c) {
	if (a > b && a > c) {
		return a;
	}
	if (b > a && b > c) {
		return b;
	}
	if (c > a && c > b) {
		return c;
	}
}

void functions10() {
	char inArr[81];

	gets_s(inArr, 8);
	double temp = atof(inArr);

	gets_s(inArr, 2);
	char CorF = inArr[0];

	double result = TempConverter(temp, CorF);
	if (isnan(result)) {
		printf("No solution\n");

		exit(EXIT_FAILURE);
	}

	printf("%f", result);
	exit(EXIT_SUCCESS);
}
double TempConverter(double temperture, char CorF) {
	if (CorF == 'c' || CorF == 'C') {
		return temperture * 9 / 5 + 32;
	}
	else if (CorF == 'f' || CorF == 'F') {
		return (temperture - 32) * 5 / 9;
	}

	return NAN;
}

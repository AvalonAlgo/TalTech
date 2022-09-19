#include "Functions.h"

int * loopingTwo(int n) {
	int RandVal[100];
	time_t t;
	srand((unsigned)time(&t));
	// RNG - Actually pseudorandom

	if (n < 0 || n == 0 || n > 100) {
		INVALID_INPUT = 1;
		int temp[1];

		return temp;
	}
	else {
		for (int i = 0; i < n; i++) {
			RandVal[i] = rand();
		}
	}

	return RandVal;
}

void readVowels(char* buf) {
	char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
	int vowelCount = 0;

	for (int i = 0; i < sizeof(buf); i++) {
		for (int j = 0; j < sizeof(vowels); j++) {
			if (buf[i] == vowels[j]) {
				vowelCount++;
			}
		}
	}

	printf("%d vowels found\n", vowelCount);
}

void readConsonants(char* buf) {
	char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
	int vowelCount = 0;
	int spaceCount = 0;
	int textSize = sizeof(buf);
	int consonantCount = 0;

	for (int i = 0; i < textSize; i++) {

		if (buf[i] == ' ') {
			spaceCount++;
		}

		for (int j = 0; j < textSize; j++) {
			if (buf[i] == vowels[j]) {
				vowelCount++;
			}
		}
	}

	printf("%d consonants found\n", consonantCount);
}

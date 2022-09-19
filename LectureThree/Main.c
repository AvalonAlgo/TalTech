#include "Functions.h"

int main() {

	//// looping 2
	//char c[81];
	//gets_s(c, 80);
	//int n = atoi(c);

	//int * p = loopingTwo(n);

	//if (INVALID_INPUT == 1) {
	//	printf("Invalid input\n");
	//	exit(EXIT_FAILURE);
	//}

	//for (int i = 0; i < n; i++) {
	//	printf("%d\n", p[i]);
	//}
	////

	//// looping 4
	//char Table[5][5];

	//for (int j = 0; j < 4; j++) {
	//	for (int i = 1; i < 5; i++) {
	//		Table[i][j] = '-';
	//	}
	//}

	//for (int i = 0; i < 4; i++) {
	//	for (int j = i + 1; j < 5; j++) {
	//		Table[i][j] = '+';
	//	}
	//}
	//
	//for (int i = 0; i < 5; i++) {
	//	Table[i][i] = '*';
	//}

	//for (int i = 0; i < 5; i++) {
	//	// inner loop for column
	//	for (int j = 0; j < 5; j++) {
	//		printf("%c", Table[i][j]);
	//	}
	//	printf("\n"); // new line
	//}
	////

	//// looping 9
	//char Buf1[81];
	//char Buf2[81];

	//gets_s(Buf1, 80);

	//Buf2[0] = Buf1[0];
	//for (int i = 1, j = 1; i < sizeof(Buf1); i++, j++) {
	//	char c = Buf1[j];

	//	if (c == ' ') {
	//		if (c != Buf2[i - 1]) {
	//			Buf2[i] = c;
	//		}
	//		else {
	//			i--;
	//		}
	//	}
	//	else {
	//		Buf2[i] = c;
	//	}
	//}

	//printf("Text in Buf2: %s\n", Buf2);
	////

	// looping 10
	char buf[81];
	char c;
	while (1) {
		c = _getche();

		if (c == 'v' || c == 'V') {
			printf("\nType input sentence below: \n");
			gets_s(buf, 80);
			readVowels(buf);
		}
		else if (c == 'c' || c == 'C') {
			printf("\nType input sentence below: \n");
			gets_s(buf, 81);
			readConsonants(buf);
		}
		else if (c == 'x' || c == 'X') {
			break;
		}
	}
	//


	exit(EXIT_SUCCESS);
}

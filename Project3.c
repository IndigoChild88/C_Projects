#include<stdio.h>
//Grafton
int mainW() {
	
	printf("Please enter a String to check if it's a palindrome");
	char pal[20];
	int loopLen;

	scanf("%s", &pal);

	loopLen = strlen(pal)-1;
	int length = strlen(pal);
	int start = 0;

	while (loopLen != 0) {
		if (pal[start] == pal[loopLen]) {
			start++; loopLen--;

		}
		else {
			printf("It is not a palindrome");
			break;
		}

	}

	

	printf("%d", length);

	return 0;
}
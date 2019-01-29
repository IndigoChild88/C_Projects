//Grafton
#include<stdio.h>

int main() {
	
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
		else if (start == loopLen) {
			printf("This is a palindrome");
			break;
		}
		else {
			printf("It is not a palindrome");
			break;
		}

	}


	return 0;
}
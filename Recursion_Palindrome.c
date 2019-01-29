//Grafton
#include <stdio.h>
int Start = 0;
int main11() {

	printf("Please enter a String to check if it's a palindrome");
	char pal[20];
	int loopLen;

	scanf("%s", &pal);
	recursion(pal, Start, strlen(pal));

	return 0;
}

void recursion(char pal[], int start, int len) {
	if (pal[start] == pal[len]) {
		start++; len--;
		recursion(pal, start, len);
	}
	else if (start == len) {
		printf("This is a palindrome");
		
	}
	else {
		printf("It is not a palindrome");

	}

}
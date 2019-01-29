#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//ELKINS
void printArrays(char print[]);

int main() {
	printf("Please enter a string. \n");

	char input[50];

	fgets(input, 50, stdin);

	for (int i = 0; i < sizeof(input); i++) {
		input[i] = toupper(input[i]);
	}
	printArrays(input);
	
	return 0;
}
void printArrays(char print[]) {
	for (int i = 0; i < strlen(print); i++) {
		printf("%c", print[i], ",");
	}
}
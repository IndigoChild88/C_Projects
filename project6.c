#include <stdio.h>
#include <string.h>
#pragma once

#include <stdio.h>
#include <tchar.h>
//Wayne

//Write C code to split a sentence stored as a 
//string into individual words where spaces occur.
//Print each word individually on its own line.


int main3() {
	char sentence[100];
	char word[50][50];

	char *temp = strtok(sentence, " ");
	int length = strlen(temp);
	int start = 0;
	int j = 0;
	int i = 0;
	char *Final[100];

	printf("Please  in a sentence\n");
	fgets(sentence, 100, stdin);
	//printf("%s\n", sentence[2]);
	for (int i = 0; i < 1; i++) {
		printf("%s\n", sentence[i]);
	}
	while (length != 0) {
		if (sentence[j] == ' ') {
			word[start][i] = '\0'; i = 0;
			j++;
			start++;
			word[start][i] = sentence[i++];
		}
		word[start][i] = '\0';
	}
	for (int z = 0; z < j; z++) {
		printf("%s\n", word[z]);
	}

	return 0;
}
/*	printf("Please type in a sentence\n");
	fgets(sentence, 100, stdin);
	int j = 0;5

	while (temp != NULL) {
		Final[++j] = strtok(NULL, " ");
	}
	fgets(sentence, 100, stdin);

	for (int i = 0; i < strlen(Final); i++) {
		printf("%s\n", Final[i]);
	}
	return 0;
}
*/
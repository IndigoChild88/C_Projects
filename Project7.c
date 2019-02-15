#include <stdio.h>
//Glenville

void printOut(int z[]);
int main10() {

	int *list[] = { 44,3,8,14,68,7,2,3,55,47,33 };
	int fucntion[50];

	printOut(list, sizeof(list) / sizeof(list[0])-1);
	//printf("%d", sizeof(list)/sizeof(list[0]));
	return 0;
}

void printOut(int *list[],int length) {
	for (int i = 0; i < length; i++) {

		printf("%d", *(list+i));
		printf("%s", "\n");
	}
}

//below works too -----------------------------------------------------------------------------------

/*

void printOut(int *z[],int length) {
	for (int i = 0; i < length; i++) {

		printf("%d", z[i]);
		printf("%s", "\n");
	}
}

*/
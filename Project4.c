#include <stdio.h>
#include <stdbool.h>

void printArrays(int print[]);
int sort(int change[]);
int main2() {

	int myArray[10] = { 5,4,8,6,21,1,18,3,7,11};
	printf("This is the the unordered array.");
	printArrays(myArray);
	printf("\nThis is the array now ordered-------------------------------");
	printArrays(sort(myArray));
		return 0;
}

int sort(int change[]) {
	bool ordered = false;
	int count = 0;
	while (ordered = false) {
		for (int i = 0; i < 10; i++) {
			count++;
			if (i == (sizeof(change - 1))) {
				if (change[i] > change[i + 1]) {

					int temp = change[i];
					change[i] = change[i+1];
					change[i+1] = temp;

				}
			}
			
		}

		for (int i = 0; i < sizeof(change)-1; i++) {
			if (change[i] > change[i + 1]) {
				ordered = false;
				break;
			}
			else {
				ordered = true;
			}
		}
	}
	return change;
}

void printArrays3(int print[]) {
	for (int i = 0; i < 10; i++) {
		printf("%4d", print[i],",");
	}
}
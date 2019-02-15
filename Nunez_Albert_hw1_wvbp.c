#include <stdio.h>
#include <math.h>

// Albert Nunez
// 2/13/2019
// Computer Science 350 Section YY
// Homework #1: West Virginia Budget Problem
// Name of compiler used to test code
void numberFour();
void numberFive();
void calculator();

int main() {
	numberFour();
	numberFive();
	calculator();
	return 0;
}

void numberFour() {

	float expenses = 470000000;
	float initial_revenue = 420000000;
	float revenue = 420000000;
	long years = 0;
	float calculated_revenue = 0;

	//printf("%f",expenses - initial_revenue);
	while (expenses >= initial_revenue) {
		
			initial_revenue = initial_revenue + initial_revenue * (.01);
			years++;
			
	}
	calculated_revenue = initial_revenue * pow((1 + .01),years);

	printf("It would take this many years to close the showfall: %d", years);
	printf("\nExpected revenue is: %.2f$\n", calculated_revenue);
	//printf("\nrevenue: %f \nInitial: %f$/n", revenue, initial_revenue);
}

void numberFive() {
	float expenses = 470000000;
	float initial_revenue = 420000000;
	float revenue = 420000000;
	long years = 0;
	float calculated_revenue = 0;
	for (int i = 0; i < 10000; i++) {
		if (expenses >= initial_revenue) {
			initial_revenue = initial_revenue * pow((1 + .039), years);
			years++;
		}
	}
	calculated_revenue = initial_revenue * pow((1 + .039), years);
	printf("\nIt would take this many years to close the showfall: %d", years);
	printf("\nExpected revenue is: %.2f$\n", calculated_revenue);
	
}

void calculator() {
	float expenses = 470000000;
	float initial_revenue = 420000000;
	float revenue = 420000000;
	long years = 0;
	float calculated_revenue = 0;
	float income = 0;
	puts("\nPlease enter your income allowing decimal values");
	scanf("%f", &income);

	if (income <= 0) {
		puts("\nPlease enter a value bigger than zero");
		while (income<=0) {
			puts("\nPlease enter a value bigger than zero");
			scanf(" %.2f", &income);
		}
	}
	if (income < 10000) {
		printf("\nIncome: %.2f \nTax due: %.2f$ \nMarginal rate: 3.0%", income, income*(0.03));
	}else if ((10000<=income)&&(income<25000)) {
		printf("\nIncome: %.2f \nTax due: %.2f$ \nMarginal rate: 4.0%", income, income*(0.04));
	}else if ((25000<=income)&&(income<40000)) {
		printf("\nIncome: %.2f \nTax due: %.2f \nMarginal rate: 4.5%", income, income*(0.045));
	}else if ((40000<=income)&&(income<60000)) {
		printf("\nIncome: %.2f \nTax due: %.2f \nMarginal rate: 6.0%", income, income*(0.06));
	}else {
		printf("\nIncome: %.2f \nTax due: %.2f \nMarginal rate: 6.5%", income, income*(0.065));
	}
}
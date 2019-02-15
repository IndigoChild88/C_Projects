//Pineville
#include <stdio.h>

struct recipe {
	char name[20];
	struct ingredient {
		char name2[20];
		int ounces2;
		int quantity2;
	};
	struct ingredient2 {
		char name3[20];
		int ounces3;
		int quantity3;
	};
};

int main100() {
	struct recipe Purple_nurples = {
	"Purple Nurples",
	{
		"Grapes", 5, 30} ,
	{
		"Tangaroos",44,4
}
	};

	printf("The recipe for %s \nNeeds: %s \nOunces: %d \nQuantity: %d \nNeeds: %s \nOunces: %d \nQuantity: %d ",
		Purple_nurples.name, Purple_nurples.name2, Purple_nurples.ounces2,Purple_nurples.quantity2,
		 Purple_nurples.name3, Purple_nurples.ounces3, Purple_nurples.quantity3);
	return 0;
}



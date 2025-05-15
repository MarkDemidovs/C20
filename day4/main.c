#include <stdio.h>

int main() {
	int age;
	int day = 3;
	age = 15;


	if (age <= 18) {
		printf("\n Sorry, you aren't allowed into the software. %i\n", age);
	} else if (age <= 5 || age >= 100) {
		printf("Sorry, please enter your REAL age.");
	} else {
		printf("Welcome onto our software!");
	}

	switch (day) {
		 case 1:
			printf("Today is Monday.");
			break;
		 case 2: 
			printf("Today is Tuesday.");
			break;
		 case 3: 
			printf("Today is Wednesday.");
			break;
		 default:
			printf("Not a day of the week, that's a fact.");
	}

	for (int i = 0; i <= 5; i++) {
		printf("\n Right now is number: %i\n", i);
	// continue would make it go onto the next iteration.
}
	
	return 0;
}

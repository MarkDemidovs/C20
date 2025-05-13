#include <stdio.h>

int main() { 
	int num1;
	int num2;
	int result;

	printf("\n");
	printf("Enter your first number you want to do addition with: ");
	scanf("%i", &num1);
	printf("\n");

 	printf("Enter your second number you want to do addition with: ");
	scanf("%i", &num2);
	printf("\n");

	result = num1 + num2;

	printf("Your result is: %i\n\n", result);
	return 0;
}

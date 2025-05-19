#include <stdio.h>

void birthday(int* age) {
	(*age)++;
}

int main() {
	int age = 15;
	int *pAge = &age;

	printf("%p\n", &age);
	printf("%p\n", pAge);


	birthday(pAge);	
	printf("Happy birthday! You're %d years old.", age);

	return 0;
}



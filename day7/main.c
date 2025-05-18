#include <stdio.h>
#incluide <string.h>
	
int main () {
	char string[] = "Hello";
	size_t length = strlen(string);
	char newStr[6];
	char secondString[] = "World"
	strcat(string, secondString);
	strcpy(newStr, string);
	int same = strcmp(string, secondString);

	char str[] = "Hello";
char *ptr = strchr(str, 'e');  // ptr points to 'e' in "Hello"

char str[] = "Hello World";
char *ptr = strstr(str, "World");  // ptr points to "World" in "Hello World"


	printf("\n");
	printf("%s\n", string);
	return 0;
}

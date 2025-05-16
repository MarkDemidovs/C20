#include <stdio.h>

void saySomething(char str[]) {
	printf("%s\n", str);
}

int main() {
	saySomething("What should we say?");
	return 0;
}

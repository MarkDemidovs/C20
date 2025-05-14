#include <stdio.h>

int main() {
	int x = 6; // 6 = 00000110
	int y = 12; // 12 = 00001100
	int z = 0; // 00000000

	z = x & y; // = 4
	printf("\n AND = %d\n", z);
	

	z = x | y; // = 14
	
	z = x ^ y; // = 10
	
	z = x << 1; // if was 6, then 12

	
	return 0;
}

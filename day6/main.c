#include <stdio.h>

int main() {
	int numbers[5] = {1, 2, 3, 4, 5};
	int mamtrix[3][3] = {{1,2,3},{4,5,6}};

	for(int i = 0; i <= 5; i++) {
		printf("\n Current Number: %i\n", numbers[i]);
	}

	for (int x = 0; x <= 3; x++) {
		for (int y = 0; y <= 3; y++) {
			printf("\n Number: %i", mamtrix[x][y]);
		}
		printf("\n");
	}
	return 0;
}

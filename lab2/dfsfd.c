#include <stdio.h>

int main() {
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (int k = 9; k > i; k--) {
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("X");
		}

		for (j = 0; j <= i; j++)
		{
			printf("X");
		}
		printf("\n");
	}
	return 0;
}
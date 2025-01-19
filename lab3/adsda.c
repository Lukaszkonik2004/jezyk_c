#include <stdio.h>
#include <string.h>

#define DLUGOSC 5

int main() {

	int macierz1[3][3] = { 1,1,1,2,2,2,3,3,3 };
	int macierz2[3][3] = { 4,4,4,5,5,5,6,6,6 };

	int macierzSuma[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			macierzSuma[i][j] = macierz1[i][j] + macierz2[i][j];
		}
	}

	printf("\nMacierz nr. 1:\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t",macierz1[i][j]);
		}
		printf("\n");
	}

	printf("\nMacierz nr. 2:\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", macierz2[i][j]);
		}
		printf("\n");
	}

	printf("\nMacierze po dodaniu:\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", macierzSuma[i][j]);
		}
		printf("\n");
	}



	return 0;
}
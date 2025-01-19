#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* inFp;
FILE* outFp;

void Zad1() {
	char inFileName[] = "promienie.txt";
	char outFileName[] = "wynik.txt";
	double pole[2], pi = 3.14;
	int t = 0, promien;
	if ((inFp = fopen(inFileName, "r")) == NULL)
	{
		printf("\n\n!!! Ten Plik nie istnieje !!!\n");
		exit(1);
	}

	while (fscanf(inFp, "%d", &promien) == 1) {
		pole[t] = (promien * promien * pi);
		t++;
	}

	for (int i = 0; i < 2; i++)
	{
		printf("%lf\n", pole[i]);
	}
	fclose(inFp);

	double tmp;
	if (pole[0] > pole[1]) {
		tmp = pole[1];
		pole[1] = pole[0];
		pole[0] = tmp;
	}

	if ((outFp = fopen(outFileName, "w")) == NULL) {
		printf("Nie moge otworzyc pliku do zapisu!\n");
		exit(1);
	}

	fprintf(outFp, "%lf\n%lf", pole[0], pole[1]);
	fclose(outFp);

}
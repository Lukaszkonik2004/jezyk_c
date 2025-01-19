#include <stdio.h>
#include <stdlib.h>

FILE* inFp;
FILE* outFp;

void Zad3() {
	char inFileName[12];
	char outFileName[] = "wynik.txt";
	char c;
	int inChar;
	int	licznik=0;
	
	printf("Podaj nazwe pliku, ktorego kopie chcesz wykonac.\n");
	gets(inFileName);

	if ((inFp = fopen(inFileName, "r")) == NULL)
	{
		printf("\n!!! Plik nie istnieje !!!\n", inFileName);
		exit(1);
	}

	if ((outFp = fopen(outFileName, "w")) == NULL)
	{
		printf("\n!!! Blad otwarcia pliku !!!\n", outFileName);
		exit(1);
	}
	
	
	while ((c = fgetc(inFp)) != EOF) {
		licznik ++;
	}

	fclose(inFp);

	
	if ((inFp = fopen(inFileName, "r")) == NULL)
	{
		printf("\n!!! Plik nie istnieje !!!\n", inFileName);
		exit(1);
	}

	while ((inChar = getc(inFp)) != EOF)
	{
		putc(inChar, outFp);
	}
	printf("\nPlik zostal skopiowany...\n");

	fclose(inFp);

	printf("\n%d", licznik);

	fclose(outFp);


	if ((outFp = fopen(outFileName, "a")) == NULL)
	{
		printf("\n!!! Blad otwarcia pliku !!!\n", outFileName);
		exit(1);
	}

	fprintf(outFp, "\n\nLICZBA SLOW: %d ", licznik);
	
	fclose(outFp);

	return 0;
}
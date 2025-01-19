#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE* inFp;

void Zad4() {
	char inFileName[]="dane1.txt";
	int pesele[1000];
	int	t = 0;

	if ((inFp = fopen(inFileName, "r")) == NULL)
	{
		printf("\n!!! Plik nie istnieje !!!\n", inFileName);
		exit(1);
	}

	while (fscanf(inFp, "%d", &pesele[t]) == 1) {
		t++;
	}

	return 0;
}
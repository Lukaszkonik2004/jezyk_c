#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int zad4(int* liczba) {
	return *liczba * *liczba;
}

int* zad5(int* a, int* n) {
	int wynik = 1;
	int* ptrWynik= &wynik;
	for (int i = 0; i < *n; i++)
	{
		*ptrWynik *= *a;
	}

	return ptrWynik;
}

void zad6(char znak, int* liczba) {
	for (int i = 0; i < *liczba; i++)
	{
		printf("%c",znak);
	}

	(*liczba)--;
}

int* zad7(int* a, int* b) {
	if (*a < *b) {
		return a;
	}

	return b;
}

void zad8(int* a, int* b) {
	int tmp = *b;
	*b = *a;
	*a = tmp;
}


int main() {

	//zad 1
	/*int a = 10;
	int* ptrA = &a;
	int b;
	int* ptrB = &b;
	printf("Wskaznik liczby a: %p\n", &ptrA);

	printf("Podaj liczbe b:");
	scanf_s("%d", ptrB);

	printf("\nroznica a i b: %d\n", (*ptrB - *ptrA));

	int c = 2;
	int* ptrC = &c;

	float srednia = (*ptrC + *ptrA + *ptrB) / 3;
	float* ptrSrednia = &srednia;
	printf("Srednia 3 liczb: %d, %d, %d \nJest rowna: %f", *ptrA, *ptrB, *ptrC, *ptrSrednia);*/

	//zad 2
	/*int* tab[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

	printf("Adres pierwszego elementu: %p\n", &tab[0]);
	printf("Adres czwartego elementu: %p", &tab[3]);


	int przedzial;
	printf("\nPodaj liczbe od 2 do 25: ");
	scanf_s("%d", &przedzial);


	printf("Adres losowej liczby z przedzialu od 1 do %d: %p", przedzial, &tab[(rand() % przedzial) + 1]);*/

	//zad 3
	/*int* tab[5];
	int suma = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("tab[%d] = ", i);
		scanf_s("%d", (tab + i));
		int tmp = *(tab + i);
		suma += tmp;
	}

	float srednia = suma / 5;

	printf("Srednia: %f\nElementy wieksze od sredniej:", srednia);

	for (int i = 0; i < 5; i++)
	{
		int tmp = *(tab + i);
		if ( tmp > srednia) {
			printf("%d, ", tmp);
		}
	}*/

	//zad 4
	/*int liczba = 3;
	int* ptrLiczba = &liczba;

	printf("Kwadrat liczby %d: %d", *ptrLiczba, zad4(ptrLiczba));*/


	//zad 5
	/*int a;
	int n;
	printf("Podaj liczbe: ");
	scanf_s("%d", &a);

	printf("Do jakiej potegi ja podniesc: ");
	scanf_s("%d", &n);

	int *wynik = zad5(&a, &n);

	printf("Wynik: %d", *wynik);*/

	//zad 6
	/*char znak;
	printf("Podaj znak: ");
	scanf_s("%c", &znak);

	int liczba;
	printf("Podaj liczbe powtorzen: ");
	scanf_s("%d", &liczba);
	int* ptrLiczba = &liczba;

	zad6(znak, ptrLiczba);

	printf("\nLiczba powtorzen: %d", *ptrLiczba);*/


	//zad 7
	/*int a = 5;
	int b = -5;
	int* ptrA = &a;
	int* ptrB = &b;

	int* ptrMin = zad7(ptrA, ptrB);

	printf("Wartosc mniejszej liczby: %d\nJej wskaznik: %p", *ptrMin, ptrMin);*/

	//zad 8

	int a = 6;
	int b = 30;

	printf("a = %d, b = %d\n", a, b);
	zad8(&a, &b);
	printf("a = %d, b = %d", a, b);


	return 0;
}
#include <stdio.h>
#include "Zad1.h"
#include "Zad3.h"
#include "Zad5.h"
#include "Zad8.h"
#include "Zad9.h" 
#include <string.h>

int main() {
	//zad 1
	/*struct Trojkat trojkat = {12,15,20};
	printf("Obwod trojkata wynosi: %d", Obwod(trojkat));*/

	//zad 2
	/*struct Trojkat troj1 = { 2,3,5 };
	struct Trojkat troj2 = {1,1,1};
	struct Trojkat *ptrTroj2 = &troj2;
	printf("Przed zmiana: {%d, %d, %d}", ptrTroj2->a, ptrTroj2->b, ptrTroj2->c);
	Zad2(troj1, ptrTroj2);
	printf("\nPo zmianie: {%d, %d, %d}", ptrTroj2->a, ptrTroj2->b, ptrTroj2->c);
	*/
	
	//zad 3
	/*struct Punkt punkty[3] = { {1,45},{6,3},{12,3} };
	printf("Najmniejsza odleglosc miedzy punktami %lf", Zad3(punkty, 3));*/

	//zad 4
	/*struct Punkt tab1[3] = { {1,45},{6,3},{12,3} };
	struct Punkt tab2[3] = { {0,0},{0,0},{0,0} };
	struct Punkt *ptrTab2[3];
	ptrTab2[0] = &tab2[0];
	ptrTab2[1] = &tab2[1];
	ptrTab2[2] = &tab2[2];

	zad4(tab1, ptrTab2, 3);
	printf("tab[0]: {%d, %d}\n", ptrTab2[0]->x, ptrTab2[0]->y);
	printf("tab[1]: {%d, %d}\n", ptrTab2[1]->x, ptrTab2[1]->y);
	printf("tab[2]: {%d, %d}", ptrTab2[2]->x, ptrTab2[2]->y);*/

	//zad 5
	/*struct Pole pola1[10];
	struct Pole* pola2 = malloc(sizeof(struct Pole) * 10);
	struct Pole *pola3[10];

	struct Pole p = { 10,"don" };
	int suma = 0;

	for (int i = 0; i < 10; i++)
	{
		pola1[i].x = p.x;
		strcpy(pola1[i].tekst, p.tekst);
		suma += p.x;
	}
	printf("Suma dla pola1: %d", suma);
	suma = 0;

	for (int i = 0; i < 10; i++)
	{
		pola2[i].x = p.x;
		strcpy(pola2[i].tekst, p.tekst);
		suma += p.x;
	}
	printf("\nSuma dla pola3: %d", suma);
	suma = 0;

	for (int i = 0; i < 10; i++)
	{
		pola3[i] = &p;
		suma += p.x;
	}
	printf("\nSuma dla pola3: %d", suma);
	suma = 0;*/

	//zad 6
	/*struct Punkt10 tab1[10] = { {1,1},{2,2},{3,3}, {4,4}, {5,5}, {6,6}, {7,7}, {8,8}, {9,9},{10,10} };
	struct Punkt10 tab2[10] = {{1,2},{2,3},{3,4}, {4,5}, {5,6}, {6,7}, {7,8}, {8,9}, {9,10},{10,11} };
	struct Punkt10* ptrTab2[10];
	for (int i = 0; i < 10; i++)
	{
		ptrTab2[i] = &tab2[i];
	}

	Zad6(tab1, ptrTab2, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("{%d,%d}\n", ptrTab2[i]->x, ptrTab2[i]->y);
	}*/

	//zad 7
	/*struct PunktN tab1[10] = { {1,1},{2,2},{3,3}, {4,4}, {5,5}, {6,6}, {7,7}, {8,8}, {9,9},{10,10} };
	struct PunktN tab2[10];
	struct PunktN* ptrTab2[10];
	for (int i = 0; i < 10; i++)
	{
		ptrTab2[i] = &tab2[i];
	}

	Zad7(tab1, ptrTab2, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("{%d,%d}\n", ptrTab2[i]->x, ptrTab2[i]->y);
	}*/

	//zad 8
	/*struct Zespolona liczba1 = { 1,23 };
	struct Zespolona liczba2 = { 6,12 };

	struct Zespolona suma = Dodaj(liczba1, liczba2);
	printf("Suma: %lf + %lf i", suma.re, suma.im);*/

	//zad 9
	//0 - trojkat 1 - prostokat 2 - rownoleglobok 3 - trapez
	
	struct Figura f0 = { 0, 3,7,3 };
	printf("Pole trojkata: %lf\n", Pole(f0));
	struct Figura f1 = { 1, 3,7,3 };
	printf("Pole prostokata: %lf\n", Pole(f1));
	struct Figura f2 = { 2, 3,7,3 };
	printf("Pole rownolegloboku: %lf\n", Pole(f2));
	struct Figura f3 = { 3, 3,7,3 };
	printf("Pole traoeza: %lf\n", Pole(f3));

	return 0;
}
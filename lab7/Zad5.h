#include <stdio.h>
#include <string.h>

struct Pole{
	int x;
	char tekst[30];
};

struct Punkt10 {
	int x;
	int y;
};

struct PunktN {
	int x;
	int y;
	int n;
};

void Zad6(struct Punkt10 tab1[], struct Punkt10 *tab2[], int dlogosc) {
	for (int i = 0; i < dlogosc; i++)
	{
		tab2[i]->x = tab1[i].x;
		tab2[i]->y = tab1[i].y;
	}
}

void Zad7(struct PunktN tab1[], struct PunktN* tab2[], int n) {
	for (int i = 0; i < n; i++)
	{
		tab2[i]->x = tab1[i].x;
		tab2[i]->y = tab1[i].y;
		tab2[i]->n = n;
	}
}
#include <stdio.h>
#include <math.h>
struct Punkt{
	int x;
	int y;
};

double Zad3(struct Punkt punkty[], int dlogosc) {
	double min = 0;
	for (int i = 0; i < dlogosc; i++)
	{
		if(i == 0){
			min = sqrt(pow(punkty[i + 1].x - punkty[i].x,2) + pow(punkty[i + 1].y - punkty[i].y,2));
		}

		for (int j = i; j < dlogosc; j++)
		{
			double tmp = sqrt(pow(punkty[i + 1].x - punkty[i].x, 2) + pow(punkty[i + 1].y - punkty[i].y, 2));
			if (tmp < min && tmp != 0)
				min = tmp;
		}
	}

	return min;
}

void zad4(struct Punkt tab1[], struct Punkt *tab2[], int dlogosc) {
	for (int i = 0; i < dlogosc; i++)
	{
		tab2[i]->x = tab1[i].x;
		tab2[i]->y = tab1[i].y;
	}
}


#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
	
	printf("========Witaj w przyjaznym kalkulatorze========\n");
	printf("1. Suma\n");
	printf("2. Roznica\n");
	printf("3. Iloczyn\n");
	printf("4. Iloraz\n");
	printf("5. Pierwiastek Kwadratowy\n");
	printf("6. Potega\n");
	printf("7. Wartosc Bezwzgledna\n");
	printf("8. Wartosci F. Trygonometrycznej\n");
	printf("9. Wyjscie\n");
	printf("===============================================\nWybierz opcje:\n>");
	int choice;
	scanf_s("%d", &choice);
	float a, b;
	switch (choice)
	{
	case 1: printf("\n\n========Suma========\n");
		printf("Podaj liczbe a:");scanf_s("%f", &a);

		printf("Podaj liczbe b:");scanf_s("%f", &b);
		printf("\nSuma %.1f + %.1f = %.1lf\n", a, b, (a + b));
		printf("====================");
		break;

	case 2: printf("\n\n========Roznica========\n");
		printf("Podaj liczbe a:"); scanf_s("%f", &a);
		printf("Podaj liczbe b:"); scanf_s("%f", &b);

		printf("\nRoznica %.1f - %.1f = %.1lf\n", a, b, (a - b));
		printf("=======================");
		break;
	case 3: printf("\n\n========Iloczyn========\n");
		printf("Podaj liczbe a:"); scanf_s("%f", &a);
		printf("Podaj liczbe b:"); scanf_s("%f", &b);

		printf("\nIloczyn %.1f * %.1f = %.1lf\n", a, b, (a * b));
		printf("=======================");
		break;

	case 4: printf("\n\n========Iloraz========\n");
		printf("Podaj liczbe a:"); scanf_s("%f", &a);
		printf("Podaj liczbe b:"); scanf_s("%f", &b);

		if (b == 0) {
			printf("\n\n*Nie mozna dzielic przez zero*\n*b zostaje zmienione na 1*\n\n");
			b = 1;
		}
		printf("\nIloraz %.1f / %.1f = %.1lf\n", a, b, (a / b));
		printf("======================");
		break;

	case 5: printf("\n\n========Pierwiastek Kwadratowy========\n");
		printf("Podaj liczbe a:"); scanf_s("%f", &a);


		printf("\nPierwiastek kwadratowy z %.1f = %.1lf\n", a, (sqrt(a)));
		printf("============================================");
		break;

	case 6:	printf("\n\n========Potega========\n");
		printf("Podaj liczbe a:"); scanf_s("%f", &a);
		printf("Podaj potege:"); scanf_s("%f", &b);


		printf("\nLiczba %.1f do potegi %.1f = %.1lf\n", a,b, (pow(a,b)));
		printf("======================");
		break;

	case 7:printf("\n\n========Wartosc Bezwzgledna========\n");
		printf("Podaj liczbe a:"); scanf_s("%f", &a);

		//drugi sposób
		//if (a < 0)
		//	a *= -1;

		printf("\nLiczba |%.1f| = %d\n", a, abs(a));
		printf("===================================");
		break;

	case 8: 
		printf("\n\n========Wartosci F. Trygonometrycznej========\n");

		printf("Podaj kat:"); scanf_s("%f", &a);
		float r = a * (PI/180);


		printf("\nSin kata %.0f = %.2lf", a, sin(r));
		printf("\nCos kata %.0f = %.2lf", a, cos(r));
		printf("\nTg kata %.0f = %.2lf", a, tan(r));
		printf("\nCtg kata %.0f = %.2lf\n", a, (pow(tan(r),-1)));

		printf("=============================================");
		break;

	default:break;
	}

	printf("\n\nKONIEC\n\n");


	return 0;
}
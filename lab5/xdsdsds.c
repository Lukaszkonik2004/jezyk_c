#include <stdio.h>
#include <string.h>


//void View();
//int suma(int a, int b);

//rekurencja / zadanie 1
//int silnia(int n) {
//	if (n == 0)
//		return 1;
//
//	return n * silnia(n - 1);
//}

//void wypiszTab(int arr[], int n);

//void licznik() {
//	static int a = 0;
//	a++;
//	printf("%d", a);
//}

//zad 2
//int zad2(int n) {
//	if (n == 1)
//		return -1;
//
//	return (-1 * zad2(n - 1)) * n - 2;
//}

//zad 3
//int zad3(int a, int b) {
//	if (a != b) {
//		if (a > b)
//			return zad3(a - b, b);
//		else
//			return zad3(a, b-a);
//	}
//
//
//	return a;
//}

//zad 4
//int zad4(int i) {
//	if (i < 3)
//		return 1;
//	else {
//		if (i % 2 == 0)
//			return zad4(i - 3) + zad4(i - 1) + 1;
//		else
//			return zad4(i - 1) % 7;
//	}
//}


//zad 8

int zad8(int x, int n) {
	if (n==1)
	{
		return x;
	}
	else {
		if (n % 3 == 0)
		{
			int k = zad8(x, n / 3);
			return k * k * k;
		}
		else {
			return x * zad8(x, n-1);
		}
	}


}

int main() {

	/*for (int i = 0; i < 10; i++)
	{
		printf("%d\t", suma(i, i + 1));
	}*/
	
	//zad 1
	/*int a;
	scanf_s("%d", &a);

	if (a < 0)
		printf("nie istnieje taka silnia");
	else
		printf("!%d = %d", a, silnia(a));*/

	//zad 2
	//printf("%d", zad2(5));

	//zad 3
	//printf("%d", zad3(35, 50));

	//zad 4
	// rozwiazanie : 1       1       3       3       5       5       9

	/*for (int i = 2; i <= 8; i++)
	{
		printf("%d\t", zad4(i));
	}*/


	//zad 8
	printf("%d", zad8(2,10));

	/* przyklad A
		f(2 10)  1024
		f(2 9)   512
		f(2 3)   8 
		f(2 1)   2
	
	*/

	return 0;
}
//void View() {
//	printf("Dobry!\n");
//}
//
//int suma(int a, int b) {
//	return a + b;
//}
//
//
//
//
//void wypiszTab(int arr[], int n) {
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//}
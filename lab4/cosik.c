#include <stdio.h>
#include <string.h>

int main() {
	char s1[27] = "abcdefghijklmnopqrstuvwxyz";
	char s2[27] = "zyxwvutsrqponmlkjihgfedcba";
	char tekst[20];
	printf("Podaj liczbe: ");
	fgets(tekst, sizeof(tekst), stdin);

	for (int i = 0; i < strlen(tekst); i++)
	{
		for (int j = 0; j < 27; j++)
		{
			if (tekst[i] == s1[j]) {
				tekst[i] = s2[j];
				break;
			}
		}
	}
	printf("%s", tekst);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* inFp;
FILE* outFp;

void Zad2() {
    char inFileName[] = "dane.txt";
    char outFileName[] = "wynik.txt";

    int liczby[5] = {0}, t = 0, wynik[5] = {0};
    
    if ((inFp = fopen(inFileName, "r")) == NULL) {
        printf("\n!!! Ten plik nie istnieje !!!\n");
        exit(1);
    }

    while (t < 5 && fscanf(inFp, "%d", &liczby[t]) == 1) {
        t++;
    }
    fclose(inFp);

    printf("Wszystkie pobrane liczby:\n");
    for (int i = 0; i < t; i++) {
        printf("%d\n", liczby[i]);
    }

    t = 0;
    for (int i = 0; i < 5; i++) {
        int tmp = liczby[i] % 10;
        if (tmp == 0 || tmp == 3 || tmp == 8 || tmp == 9) {
            if (t < 5) {
                wynik[t] = liczby[i];
                t++;
            }
        }
    }

    if ((outFp = fopen(outFileName, "w")) == NULL) {
        printf("Nie mogę otworzyć pliku do zapisu!\n");
        exit(1);
    }

    for (int i = 0; i < t; i++) {
        fprintf(outFp, "%d\n", wynik[i]);
    }
    fclose(outFp);

    printf("Wyniki zapisano w pliku: %s\n", outFileName);
}

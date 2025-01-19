#include <stdio.h>

struct Trojkat {
	int a;
	int b;
	int c;
};

int Obwod(struct Trojkat trojkat) {
	return trojkat.a + trojkat.b + trojkat.c;
}

void Zad2(struct Trojkat troj1, struct Trojkat* troj2) {
	troj2->a = troj1.a;
	troj2->b = troj1.b;
	troj2->c = troj1.c;
}

#include <stdio.h>

struct Zespolona {
	double im;
	double re;
};

struct Zespolona Dodaj(struct Zespolona l1, struct Zespolona l2) {
	struct Zespolona suma = { (l1.im + l2.im), (l2.re + l1.re) };
	return suma;
}
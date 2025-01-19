#include <stdio.h>
//0 - trojkat 1 - prostokat 2 - rownoleglobok 3 - trapez

struct Figura {
	int typ;
	double a;
	double b;
	double h;
};
double Pole(struct Figura f) {
	double pole = 0;
	switch (f.typ)
	{
		case 0: pole = (f.a * f.h) / 2; break;
		case 1: pole = (f.a * f.b); break;
		case 2: pole = (f.a * f.h); break;
		case 3: pole = ((f.a + f.b)*f.h) / 2; break;

		default: break;
	}

	return pole;
}
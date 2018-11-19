#include <iostream>
#include <cmath>
#include "rootException.h" // zakomentuj zeby dzialalo
#include "rootTest.h"


Root::Root(double a2, double b2, double c2) {
	a = a2;
	b = b2;
	c = c2;
}

double Root::roots(unsigned int m) {
	double delta = pow(b, 2) - 4 * a * c;

	if (delta > 0) {
		if (m == 1) {
			x1 = (-b - sqrt(delta)) / 2 * a;
			std::cout << "x1 " << x1 << std::endl;
			return x1;
		}
		if (m == 2) {
			x2 = (-b + sqrt(delta)) / 2 * a;
			std::cout << "x2 " << x2 << std::endl;
			return x2;
		}
		if (m != 1 && m != 2) {
			throwRootException();
		}
	}
	else if (delta == 0) {
		if (m == 1) {
			x = (-b) / 2 * a;
			std::cout << "x " << x << std::endl;
			return x;
		}
		else
			throwRootException();
	}
	else
		throwRootException();

	return 0;
}

/*
double Root::getX1() { return x1; }

double Root::getX2() { return x2; }

double Root::getX() { return x; }
*/
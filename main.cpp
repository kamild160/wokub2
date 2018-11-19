#include <iostream>
#include <cmath>
#include <string>
#include "rootTest.h"

using namespace std;

int main() {

	Root f(1.0, 2.0, 1.0);
	Root j(2.0, 8.0, -10.0);
	Root h(-6.0, 1.0, -1.0);
	

	try {
		cout << "Delta = 0" << std::endl;
		f.roots(1);
		cout << endl;

		cout << "Delta > 0" << std::endl;
		j.roots(1);
		j.roots(2);
		cout << endl;

		cout << "Delta < 0" << std::endl;
		h.roots(1);
	}
	

	std::cin.get();
}
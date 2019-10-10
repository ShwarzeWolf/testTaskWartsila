// testTaskC++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class complexNumber {
public:
	complexNumber() :
		re (0), im (0) {};

	complexNumber (double _re, double _im) :
		re (_re),
		im (_im) {}

	complexNumber (const complexNumber & number) :
		re (number.re),
		im (number.im) {};

	void print () {
		std::cout << re << ' ' << im << endl;
	}

	void add (const complexNumber & number) {
		re = re + number.re;
		im = im + number.im;
	};

	void add (double _re, double _im) {
		re = re + _re;
		im = im + _im;
	};

	void substract (const complexNumber & number) {
		re = re - number.re;
		im = im = number.im;
	};

	void substract (double _re, double _im) {
		re = re - _re;
		im = im - _im;
	};

	void multiply (const complexNumber & number) {
		double _re = re * number.re - im * number.im;
		double _im = re * number.im - im * number.re;

		re = _re;
		im = _im;
	};

private:

	double re;
	double im;

};
int main()
{
	complexNumber cn (0, 0);
	complexNumber cn2 (1, 2);
	cn.add (cn2);
	cn.print ();

	system ("pause");

    return 0;
}


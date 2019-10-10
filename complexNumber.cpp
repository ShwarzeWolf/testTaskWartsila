#include "stdafx.h"
#include "complexNumber.h"
#include <iostream>

	void complexNumber::print () {
		std::cout << re << ' ' << im << std::endl;
	}

	void complexNumber::add (const complexNumber & number) {
		re = re + number.re;
		im = im + number.im;
	};

	void complexNumber::add (double _re, double _im) {
		re = re + _re;
		im = im + _im;
	};

	void complexNumber::substract (const complexNumber & number) {
		re = re - number.re;
		im = im = number.im;
	};

	void complexNumber::substract (double _re, double _im) {
		re = re - _re;
		im = im - _im;
	};

	void complexNumber::multiply (const complexNumber & number) {
		double _re = re * number.re - im * number.im;
		double _im = re * number.im - im * number.re;

		re = _re;
		im = _im;
	};

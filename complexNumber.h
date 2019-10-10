#pragma once
#include <iostream>
#include <fstream>

template<class C> 
class complexNumber {
public:

	complexNumber () :
		re (0), im (0) {};

	complexNumber (C _re, C _im) :
		re (_re),
		im (_im) {}

	complexNumber (const complexNumber & number) :
		re (number.re),
		im (number.im) {};

	void print () {
		std::cout << re << ' ' << im << std::endl;
	}

	void add (const complexNumber<C> & number) {
		re = re + number.re;
		im = im + number.im;
	};

	void add (C _re, C _im) {
		re = re + _re;
		im = im + _im;
	};

	void substract (const complexNumber<C> & number) {
		re = re - number.re;
		im = im = number.im;
	};

	void substract (C _re, C _im) {
		re = re - _re;
		im = im - _im;
	};

	void multiply (const complexNumber<C> & number) {
		C _re = re * number.re - im * number.im;
		C _im = re * number.im - im * number.re;
		re = _re;
		im = _im;
	};

	complexNumber operator+(const complexNumber &number){
		return (complexNumber(re + number.re, im + number.im));
	}

	complexNumber operator-(const complexNumber &number) {
		return (complexNumber (re - number.re, im - number.im));
	}

	complexNumber operator*(const complexNumber &number) {
		return (complexNumber (re * number.re - im * number.im, re * number.im - im * number.re));
	}

	friend std::ostream& operator <<(std::ostream &out, const complexNumber & number) {
		out << number.re << ' ' << number.im << std::endl;
		return out;
	};

	friend std::istream& operator >>(std::istream &in, complexNumber & number) {
		in >> number.re >> number.im;
	}

private:
	C re;
	C im;
};

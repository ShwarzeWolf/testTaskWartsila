#pragma once

class complexNumber {
public:
	complexNumber () :
		re (0), im (0) {};

	complexNumber (double _re, double _im) :
		re (_re),
		im (_im) {}

	complexNumber (const complexNumber & number) :
		re (number.re),
		im (number.im) {};

	void print ();

	void add (const complexNumber & number);

	void add (double _re, double _im);

	void substract (const complexNumber & number);

	void substract (double _re, double _im);

	void multiply (const complexNumber & number);

private:

	double re;
	double im;

};
// testTaskC++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "complexNumber.h"

using namespace std;

int main()
{
	complexNumber<double> cn (1, 7);
	complexNumber<double> cn2 (1, 2);
	complexNumber<double> cn3 (0, 0);
	cn3 = cn;

	std::cout << cn3;

	system ("pause");

    return 0;
}


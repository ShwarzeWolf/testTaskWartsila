// testTaskC++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "complexNumber.h"

using namespace std;

int main()
{
	complexNumber cn (0, 0);
	complexNumber cn2 (1, 2);
	cn.add (cn2);
	cn.print ();

	system ("pause");

    return 0;
}


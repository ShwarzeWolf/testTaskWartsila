// testTaskC++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "complexNumber.h"
#include "userInfo.h"
#include <map>
#include <string>

using namespace std;

int main()
{
	//task 1
	complexNumber<double> cn (1, 7);
	complexNumber<double> cn2 (1, 2);
	complexNumber<double> cn3 (0, 0);

	//task 3
	
	userInfo uf;
	uf.addUser ("john", "hello");
	uf.addUser ("john", "ggg");
	//uf.addUser ("john", "gggg");
	uf.checkPassword ("john", "hello");




	system ("pause");

    return 0;
}


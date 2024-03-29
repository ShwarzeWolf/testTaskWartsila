#include "stdafx.h"
#include <iostream>
#include <vector>
#include "complexNumber.h"
#include "userInfo.h"
#include "temperatureConverter.h"

using namespace std;

int main()
{
	//task 1
	complexNumber<double> a (1, 7);
	complexNumber<double> b (1, 2);
	complexNumber<double> c (0, 0);

	//task 3
	userInfo users;
	users.addUser ("john", "hello");
	users.addUser ("john", "ggg");
	users.checkPassword ("john", "hello");
	users.checkPassword ("john", "helllo");

    //task 4
	vector<double> array;
	array.push_back (0);
	array.push_back (1);

	array = convertoFahrenheit (array);
	
	for (auto i = array.begin (); i != array.end (); ++i)
		cout << *i << ' ';

	cout << endl;

	system ("pause");

    return 0;
}


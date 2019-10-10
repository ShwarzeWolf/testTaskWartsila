#include "stdafx.h"
#include "userInfo.h"
#include "userInfoExceptions.h"
#include <string>
#include <iostream>

using namespace std;

void userInfo::addUser (const string &login, const string &password) {
	try {
		if (users[login] != 0)
			throw ExisingLoginException ();

		users[login] = hashFunction (password);
	}
	catch (exception &e) {
		cout << e.what () << endl;
	}
};

void userInfo::checkPassword (const string &login, const string &password) {
	try {
		if (users[login] == 0)
			throw NoSuchUserException ();

		if (!passwordIsCorrect (login, password))
			throw WrongPasswordException ();

		cout << "Password is correct" << endl;
	}
	catch(exception &e) {
		cout << e.what () << endl;
	};
};

bool userInfo::passwordIsCorrect (const string &login, const string &password) {
	return users[login] == hashFunction (password);
};

int userInfo::hashFunction (const string &password) {
	int sum = 0;

	for (auto i = password.begin (); i != password.end (); ++i) {
		sum += *i * HASH_NUMBER;
	}

	return sum;
}


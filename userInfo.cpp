#include "userInfo.h"
#include <string>
#include <iostream>

using namespace std;

void userInfo::addUser (const string &login, const string &password) {
	if (users[login] != 0) {
		cout << "Login is taken, choose another one" << endl;
		return;
	};

	users[login] = hashFunction (password);
};

void userInfo::checkPassword (const string &login, const string &password) {
	if (users[login] == 0) {
		cout << "No such user found" << endl;
		return;
	}
		cout << (passwordIsCorrect (login, password) ? "password is correct" : "password is incorrect") << endl;
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


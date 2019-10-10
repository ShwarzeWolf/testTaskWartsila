#pragma once
#include <exception>

class NoSuchUserException : public std::exception {
	const char * what () const throw () {
		return "No such user in a base";
	}
};

class WrongPasswordException : public std::exception {
	const char * what () const throw () {
		return "Password is incorrect";
	}
};

class ExisingLoginException : public std::exception {
	const char * what () const throw () {
		return "Login is taken, choose another one";
	}
};
#pragma once
#include <exception>

class NoSuchUserException : public std::exception {
	const char * what () const throw ();
};

class WrongPasswordException : public std::exception {
	const char * what () const throw ();
};

class ExisingLoginException : public std::exception {
	const char * what () const throw ();
};
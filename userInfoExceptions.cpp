#include "stdafx.h"
#include "userInfoExceptions.h"
#include <exception>

const char * NoSuchUserException::what () const throw () {
	return "No such user in a base";
}

const char * WrongPasswordException::what () const throw () {
	return "Password is incorrect";
}

const char * ExisingLoginException::what () const throw () {
	return "Login is taken, choose another one";
}

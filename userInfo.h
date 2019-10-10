#pragma once
#include <string>
#include <map>

class userInfo {
public:

	void addUser (const std::string &login, const std::string &password);

	void checkPassword (const std::string &login, const std::string &password);

private:

	const int HASH_NUMBER = 17;

	std::map<std::string, int> users;

	int hashFunction (const std::string &password);

	bool passwordIsCorrect (const std::string &login, const std::string &password);
};

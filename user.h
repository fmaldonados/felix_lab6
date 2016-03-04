#pragma once

#include <string>
#include <vector>
#include <cstring>

using std::string;
using std::vector;

class user{
	string username;
	string password;
	vector<int> games;
	
public:
	user(string username,string password);
	bool addGame(int id);
	void addVector(int id);
	bool deleteGame(int id);
	void changePassword(string password);
	string getUsername();
	string getPassword();
	bool isValidPassword(string Password);
	string toString()const;
	
};

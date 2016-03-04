#include "user.h"
#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

user(string username ,string password){
	this -> username = username;	
	this -> password = password;
}
bool addGame(int id){
	
}
bool deleteGame(int id){

}
void changePassword(string password){

}
string getUsername(){

}
bool isValidPassword(string username,string Password){

}
string toString()const{
	stringstream ss;
	ss<< "USERNAME: " << username<< " PASSWORD: " << password;
	return ss.str();
}

#include "user.h"
#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;
using std::cout;
user::user(string username ,string password){
	this -> username = username;	
	this -> password = password;
}
bool user::addGame(int id){
	bool puede=true;
	for(int i=0; i<games.size();i++){
		if(games[i] == id){
			puede=false;	
		}
	}
	return puede;	
}
bool user::deleteGame(int id){

}
void user::changePassword(string password){

}
string user::getUsername(){
	return username;
}
bool user::isValidPassword(string username,string Password){

}
string user::toString()const{
	stringstream ss;
	ss<< "USERNAME: " << username<< " PASSWORD: " << password;
	for(int i=0;i<games.size();i++){
		cout<< "\t"<< i+1<<"- "<<games[i];
	}
	return ss.str();
}






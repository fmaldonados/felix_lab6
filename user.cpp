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
void user::addVector(int id){
	games.push_back(id);
}
bool user::deleteGame(int id){
	bool puede=true;
        for(int i=0; i<games.size();i++){
                if(games[i] == id){
                        puede=false;
                }
        }
        return puede;
}
void user::changePassword(string password){
	this->password=password;
}
string user::getUsername(){
	return username;
}
string user::getPassword(){
	return password;
}
bool user::isValidPassword(string Password){
	bool puede=false;
	if(this->password==Password)
		puede=true;
	
	return puede; 
}
string user::toString()const{
	stringstream ss;
	ss<< "USERNAME: " << username<< " PASSWORD: " << password<<"\n";
	for(int i=0;i<games.size();i++){
		ss << "\t"<< i+1<<"- "<<games[i]<<"\n";
	}
	return ss.str();
}






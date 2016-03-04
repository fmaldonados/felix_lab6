#include "game.h"
#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;	
	
	
game::game(int id, string name, int year, string developers, string genre){
	this -> id = id;
	this -> name = name;
	this -> year = year;
	this -> developers = developers;
	this -> genre = genre;

}
int game::getId(){
	return id;
}
string game::toString()const{
	stringstream ss;
        ss<< "ID: " << id<< " NAME: " << name;
        return ss.str();
}

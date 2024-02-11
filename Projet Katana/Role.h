#pragma once

#ifndef HEADER_ROLE
#define HEADER_ROLE
#include <string>
using namespace std;

class Role
{
private:
	string Name;
public:
	//Constructeur
	Role();
	Role(string Name); 

	//Getters
	string GetName() { return this->Name; }
};
#endif


#pragma once

#ifndef HEADER_CARD
#define HEADER_CARD
#include <string>
#include <iostream>

using namespace std;

class Card
{
private:
	string Name;
	string Type;

	

public:
	//Getters
	string GetName() { return this->Name; }
	string GetType() { return this->Type; }

	//Setters
	void SetName(string name) { this->Name = name; }
	void SetType(string type) { this->Type = type; }

	virtual void Display() { cout << "Card"; }
};

#endif
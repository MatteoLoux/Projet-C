#pragma once
#include <string>
#include <iostream>

#ifndef HEADER_CARD
#define HEADER_CARD
using namespace std;

class Card
{
private:
	string Name;
	int Damage;
	int Range;

public:
	//Constructeur
	Card(string name, int damage, int range);

	//Getters
	string GetName() { return this->Name; }
	int GetDamage() { return this->Damage; }
	int GetRange() { return this->Range; }

	//Méthodes
	void display(); //Affichage de la carte

};

#endif
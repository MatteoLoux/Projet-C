#pragma once
#ifndef HEADER_WEAPON
#define HEADER_WEAPON
#include "Card.h"
class Weapon :  Card
{
private:
	int Damage;
	int Range;

public:
	//Constructeur
	Weapon(string name, int damage, int range);

	//Getters
	int GetDamage() { return this->Damage; }
	int GetRange() { return this->Range; }
	
	//Affichage
	void Display();
};

#endif // !HEADER_WEAPON




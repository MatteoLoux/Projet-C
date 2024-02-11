#pragma once
#ifndef HEADER_WEAPON
#define HEADER_WEAPON
#include "Card.h"
#include <iostream>
#include <iomanip>
using namespace std;
class Weapon :  public Card
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




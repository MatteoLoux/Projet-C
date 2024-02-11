#pragma once
#ifndef HEADER_PERM
#define HEADER_PERM
#include "Card.h"	
#include <iostream>
#include <iomanip>
class Permanente : public Card
{
private:
	string Skill;

public:
	//Constructeur
	Permanente(string name, string skill);

	//Getters
	string GetSkill() { return this->Skill; }

	//Affichage
	void Display();

};

#endif



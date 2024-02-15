#pragma once
#ifndef HEADER_ACTION
#define HEADER_ACTION
#include "Card.h"
#include <iostream>
#include <iomanip>
class Action : public Card
{
private:
	string Skill;

	
public:
	//Constructeur
	Action(string name, string skill);

	//Getters
	string GetSkill() { return this->Skill; }

	//Affichage
	void Display() override;
};

#endif




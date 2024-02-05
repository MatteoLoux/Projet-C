#pragma once
#ifndef HEADER_ACTION
#define HEADER_ACTION
#include "Card.h"
class Action :  Card
{
private:
	string Skill;

public:
	//Constructeur
	Action(string name, string skill);

	//Getters
	string GetSkill() { return this->Skill; }

	//Affichage
	void Display();
};

#endif




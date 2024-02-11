#pragma once

#ifndef HEADER_CHARACTER
#define HEADER_CHARACTER
#include <string>
#include "CardSkill.h"
using namespace std;

class Character
{
private:
	string Name;
	string DescriptionSkill;
	int Hp;

public:
	//Constructeur 
	Character();
	Character(string name, string skill, int hp);

	//Getters
	string GetName() { return this->Name; }
	string GetDescSkill() { return this->DescriptionSkill; }
	int GetHp() { return this->Hp; }

	//Setters
	void SetDescSkill(string desc) { this->DescriptionSkill = desc; }
	void SetHp(int hp) { this->Hp = hp; }

	
};


#endif


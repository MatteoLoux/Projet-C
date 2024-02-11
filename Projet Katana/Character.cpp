#include "Character.h"

Character::Character()
{
	this->Name = "";
	this->DescriptionSkill = "";
	this->Hp = 0;
}

//Constructeur
Character::Character(string name, string skill, int hp)
{
	this->Name = name;
	this->DescriptionSkill = skill;
	this->Hp = hp;
}

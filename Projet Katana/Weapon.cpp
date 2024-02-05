#include "Weapon.h"

Weapon::Weapon(string name, int damage, int range)
{
	this->SetName(name);
	this->SetType("Arme");
	this->Damage = damage;
	this->Range = range;
}

void Weapon::Display()
{
}

#include "Weapon.h"

Weapon::Weapon(string name, int damage, int range)
{
	this->SetName(name);
	this->SetType("Weapon");
	this->Damage = damage;
	this->Range = range;
}

void Weapon::Display()
{
	cout << "+------------+" << endl;
	cout << "|" << setw(11) << this->GetName() << " |" << endl;
	cout << "|            |" << endl;
	cout << "| Degats: " << this->Damage << "  |" << endl;
	cout << "| Portee: " << this->Range << "  |" << endl;
	cout << "|            |" << endl;
	cout << "+------------+" << endl;
}

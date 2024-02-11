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
	cout << "-----------------------" << endl;
	cout << "| " << setw(21) << left << this->GetName() << "|" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|  Degats : " << setw(9) << right << this->Damage << "  |" << endl;
	cout << "|  Portee : " << setw(9) << right << this->Range << "  |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "| " << setw(21) << left << this->GetType() << "|" << endl;
	cout << "-----------------------" << endl;	
}

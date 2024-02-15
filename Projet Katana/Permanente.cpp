#include "Permanente.h"

Permanente::Permanente(string name, string skill)
{
	this->SetName(name);
	this->SetType("Permanente");
	this->Skill = skill;
}

void Permanente::Display()
{
	cout << "+------------+" << endl;
	cout << "|" << setw(11)<< this->GetName() << " |" << endl;
	cout << "|            |" << endl;
	cout << "|            |" << endl;
	cout << "|            |" << endl;
	cout << "|            |" << endl;
	cout << "+------------+" << endl;
}

#include "Permanente.h"

Permanente::Permanente(string name, string skill)
{
	this->SetName(name);
	this->SetType("permanente");
	this->Skill = skill;
}

void Permanente::Display()
{
	cout << "-----------------------" << endl;
	cout << "| " << setw(21) << left << this->GetName() << "|" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "|                      |" << endl;
	cout << "-----------------------" << endl;
}

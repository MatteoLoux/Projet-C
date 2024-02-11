#include "Action.h"

Action::Action(string name, string skill)
{
	this->SetName(name);
	this->SetType("Action");
	this->Skill = skill;
}

void Action::Display()
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

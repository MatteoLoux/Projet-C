#include "Action.h"

Action::Action(string name, string skill)
{
	this->SetName(name);
	this->SetType("Action");
	this->Skill = skill;
}

void Action::Display()
{
}

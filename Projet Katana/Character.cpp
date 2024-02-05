#include "Character.h"

//Constructeur
Character::Character(string name)
{
	this->Name = name;
	GetAttributsByName(*this);
}


//Défini les attributs du character à partir de son nom
void GetAttributsByName(Character character) {
	string name = character.GetName();
	if (name == "Hanzo") {
		character.SetDescSkill("");
		character.SetHp(4);
	}
	else if (name == "Ushiwaka") {
		character.SetDescSkill("");
		character.SetHp(4);
	}
	else if (name == "Chiyome") {
		character.SetDescSkill("");
		character.SetHp(4);
	}
	else if (name == "Hideyoshi") {
		character.SetDescSkill("");
		character.SetHp(4);
	}
	else if (name == "Ginchiyo") {
		character.SetDescSkill("");
		character.SetHp(4);
	}
	else if (name == "Goemon") {
		character.SetDescSkill("");
		character.SetHp(5);
	}
	else if (name == "Nobunaga") {
		character.SetDescSkill("");
		character.SetHp(5);
	}
	else if (name == "Tomoe") {
		character.SetDescSkill("");
		character.SetHp(5);
	}
	else if (name == "Iesayu") {
		character.SetDescSkill("");
		character.SetHp(5);
	}
	else if (name == "Benkai") {
		character.SetDescSkill("");
		character.SetHp(5);
	}
	else if (name == "Musashi") {
		character.SetDescSkill("");
		character.SetHp(5);
	} 
	else if (name == "Kojiro")
	{
		character.SetDescSkill("");
		character.SetHp(5);
	}
}


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
		character.SetDescSkill(HANZO_S);
		character.SetHp(4);
	}
	else if (name == "Ushiwaka") {
		character.SetDescSkill(USHIWAKA_S);
		character.SetHp(4);
	}
	else if (name == "Chiyome") {
		character.SetDescSkill(CHIYOME_S);
		character.SetHp(4);
	}
	else if (name == "Hideyoshi") {
		character.SetDescSkill(HIDEYOSHI_S);
		character.SetHp(4);
	}
	else if (name == "Ginchiyo") {
		character.SetDescSkill(GINCHIYO_S);
		character.SetHp(4);
	}
	else if (name == "Goemon") {
		character.SetDescSkill(GOEMON_S);
		character.SetHp(5);
	}
	else if (name == "Nobunaga") {
		character.SetDescSkill(NOBUNAGA_S);
		character.SetHp(5);
	}
	else if (name == "Tomoe") {
		character.SetDescSkill(TOMOE_S);
		character.SetHp(5);
	}
	else if (name == "Iesayu") {
		character.SetDescSkill(IEYASU_S);
		character.SetHp(5);
	}
	else if (name == "Benkai") {
		character.SetDescSkill(BENKAI_S);
		character.SetHp(5);
	}
	else if (name == "Musashi") {
		character.SetDescSkill(MUSASHI_S);
		character.SetHp(5);
	} 
	else if (name == "Kojiro")
	{
		character.SetDescSkill(KOJIRO_S);
		character.SetHp(5);
	}
}


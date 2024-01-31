#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "Role.h"
#include "Character.h"

using namespace std;

#ifndef HEADER_PLAYER
#define HEADER_PLAYER


class Player
{
private:
	string pseudo;
	Role role;
	Character personnage;
	int lifePoint;
	int honnorPoint;
	vector<Card> Deck {};


public:
	//Constructeur
	Player(string pseudo);

	//Getters
	string getPseudo() { return this->pseudo; }
	int getLifePoint() { return this->lifePoint; }
	int getHonnorPoint() { return this->honnorPoint; }
	Character getCharacter() { return this->personnage; }
	Role getRole() { return this->role; }
	vector<Card> GetDeck() { return this->Deck; }

	//Setters
	void setPseudo(string name) { this->pseudo = name; }
	void setLifePoint(int LifePoint) { this->lifePoint = LifePoint; }
	void setHonnorPoint(int HonnorPoint) { this->honnorPoint = HonnorPoint; }
	void setCharacter(Character character) { this->personnage = character; }
	void setRole(Role Role) { this->role = Role; }
	void setDeck(vector<Card> deck) { this->Deck = deck; }


	//Méthodes
	bool IsAlive();
};
#endif 


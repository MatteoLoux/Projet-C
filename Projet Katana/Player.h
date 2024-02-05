#pragma once

#ifndef HEADER_PLAYER
#define HEADER_PLAYER
#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "Role.h"
#include "Character.h"

using namespace std;

class Player
{
private:
	string name;
	Role role;
	Character personnage;
	int lifePoint;
	int honnorPoint;
	vector<Card> Deck {};


public:
	//Constructeur
	Player(string name);

	//Getters
	string GetName() { return this->name; }
	int GetLifePoint() { return this->lifePoint; }
	int GetHonnorPoint() { return this->honnorPoint; }
	Character GetCharacter() { return this->personnage; }
	Role GetRole() { return this->role; }
	vector<Card> GetDeck() { return this->Deck; }

	//Setters
	void SetName(string Pseudo) { this->name = Pseudo; }
	void SetLifePoint(int LifePoint) { this->lifePoint = LifePoint; }
	void SetHonnorPoint(int HonnorPoint) { this->honnorPoint = HonnorPoint; }
	void SetCharacter(Character Character) { this->personnage = Character; }
	void SetRole(Role Role) { this->role = Role; }
	void SetDeck(vector<Card> Deck) { this->Deck = Deck; }


	//Méthodes
	bool IsAlive(); //Renvoie true si le joueur est en vie, false sinon

	void DisplayDeck(); //Affichage du deck du joueur
};
#endif 


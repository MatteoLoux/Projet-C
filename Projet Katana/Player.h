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
	vector<Card*>* Deck;


public:
	//Constructeur
	Player(string name);

	//Getters
	string GetName() { return this->name; }
	int GetLifePoint() { return this->lifePoint; }
	int GetHonnorPoint() { return this->honnorPoint; }
	Character GetCharacter() { return this->personnage; }
	Role GetRole() { return this->role; }
	vector<Card*>* GetDeck() { return this->Deck; }

	//Setters
	void SetName(string Pseudo) { this->name = Pseudo; }
	void SetLifePoint(int LifePoint) { this->lifePoint = LifePoint; }
	void SetHonnorPoint(int HonnorPoint) { this->honnorPoint = HonnorPoint; }
	void SetCharacter(Character Character) { this->personnage = Character; }
	void SetRole(Role Role) { this->role = Role; }
	void SetDeck(vector<Card*>* Deck) { this->Deck = Deck; }


	//Méthodes
	void TakeDamage(int damage); //Prends des dégats, peut changer en fonction du personnage
	bool IsGrounded(); // Renvoie true si le joueur est a terre, false sinon
	void RemoveCardDeck(int i); //Retire une carte du deck, prends l'indice de la carte dans le deck en parametre
	void GiveHp(); //Donne les hp selon le personnage
	void DisplayDeck(); //Affichage du deck du joueur
	void AddCardDeck(Card* card); //Ajoute une carte dans le deck, prends une carte en parametre
	bool GotParade(); //Renvoie true si le joueur possède une parade
	size_t findIndexParade();
};
#endif 


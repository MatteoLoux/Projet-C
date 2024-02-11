#pragma once

#ifndef HEADER_GAME
#define HEADER_GAME
#include <vector>
#include <stack>
#include <algorithm>
#include <random>
#include "Card.h";
#include "Action.h";
#include "Weapon.h";
#include "Permanente.h";
#include "Player.h";

template<typename T>
void Shuffle(vector<T*>* list); // mélange une liste

class Game
{
private:
	stack<Card*> Pioche; //Pile de Carte
	vector<Card*> Defausse; // Défausse de carte
	vector<Player*> Joueurs; //Liste des joueurs

public:
	//Constructeur
	Game(int nb_joueur); // Initalise les joueurs, distribue les cartes et met en place la pioche

	void Init_Player(int nb_joueur); // Iniatilise les joueurs

	void Init_Action_Card(vector<Card*>* tmp_pioche); // Initialise les cartes d'actions

	void Init_Perm_Card(vector<Card*>* tmp_pioche); // Initialise les cartes permanentes

	void Init_Weapon_Card(vector<Card*>* tmp_pioche); //Initialise les cartes d'armes

	vector<Character>* Init_Character(); // Renvoie une liste de personnage mélangé

	void Init_Pioche(); // Initialise la pioche et la défausse

	void SetPlayerStats( Role role[]);// Donne un role, un personnage et leurs statistiques à chaque joueur

	void DistributeCard();// Distribue les cartes aux joueurs au début de la partie
	
	//Distribut les cartes selon le nombre de joueurs
	void Trois_Joueurs();
	void Quatre_Joueurs();
	void Cinq_Joueurs();
	void Six_Joueurs();
	void Sept_Joueurs();

	


};





#endif


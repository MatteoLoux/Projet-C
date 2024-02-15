#pragma once

#ifndef HEADER_GAME
#define HEADER_GAME
#include <vector>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <random>
#include <cmath>
#include "Card.h";
#include "Action.h";
#include "Display.h";
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
	string LastAction; //Dernière action du dernier joueur

public:
	//Constructeur
	Game(int nb_joueur); // Initalise les joueurs, distribue les cartes et met en place la pioche

	//Getters
	vector<Player*> GetJoueurs() { return this->Joueurs; }
	string GetLastAction() { return this->LastAction; }


	void Init_Player(int nb_joueur); // Iniatilise les joueurs

	void Init_Action_Card(vector<Card*>* tmp_pioche); // Initialise les cartes d'actions

	void Init_Perm_Card(vector<Card*>* tmp_pioche); // Initialise les cartes permanentes

	void Init_Weapon_Card(vector<Card*>* tmp_pioche); //Initialise les cartes d'armes

	vector<Character>* Init_Character(); // Renvoie une liste de personnage mélangé

	void Init_Pioche(); // Initialise la pioche et la défausse

	void PickCard(Player* player); //Pioche une carte pour le joueur player

	void SetPlayerStats( Role role[]);// Donne un role, un personnage et leurs statistiques à chaque joueur

	void DistributeCard();// Distribue les cartes aux joueurs au début de la partie

	void EmptyPioche();// Mélange la défausse, forme une nouvelle pioche et retire un points d'honneur aux joueurs

	void DefausseCardDeck(Player* player,int i); //Retire une carte du deck et la met dans la défausse, prends l'indice de la carte dans le deck et le joueur en parametre
	
	//Distribut les cartes selon le nombre de joueurs
	void Trois_Joueurs();
	void Quatre_Joueurs();
	void Cinq_Joueurs();
	void Six_Joueurs();
	void Sept_Joueurs();

	bool IsEndGame(); //Renvoie true si la partie doit s'arrêter, false sinon

	void AttackPlayer(Player* player, Weapon* carteWeapon); //Attaque du player vers un autre joueur selectionné 

	void InfoPreGame(); //Affiche les informations de début de partie

	int DisplayInfoRound(Player* player); //Affiche les informations de chaque round

	int calculateDifficulty(vector<Player*> players, size_t attackerIndex, size_t defenderIndex); //Calcule la difficulté d'une attaque entre deux joueurs;

	void PlayCard(Player* player, int indiceCarte); // Joue la carte du player à l'indice dans le Deck

	void RecoveryPhase(Player* player); //Phase de récupération

	void PickCardPhase(Player* player); //Phase de pioche

	void PlayPhase(Player* player); //Phase de jeu

	void DefaussePhase(Player* player); //Phase de défausse

	void Round(); //Déroulement d'un round
	


};





#endif


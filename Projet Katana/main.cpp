#include <iostream>
#include "main.h"
#include "Display.h"
#include "Game.h"
#include "Player.h"
#include "Card.h"
#include <iomanip>
#include <sstream>
using namespace std;


void maint() {
	int choix = Start(); //Option de début de partie
	while (choix != 1) {
		if (choix == 2) {
			choix = Rules();
		}
		else {
			Exit();
		}
	}
	int nb_joueur = Play();
	Game* game = new Game(nb_joueur); //Initialisation de la partie
	Player* player = game->GetJoueurs()[0];
	player->DisplayDeck();
	player->RemoveCardDeck(0);
	player->DisplayDeck();

}

int main() {
	int choix = Start(); //Option de début de partie
	while (choix != 1) { 
		if (choix == 2) {
			choix = Rules();
		}
		else {
			Exit(); 
		}
	}
	int nb_joueur = Play();
	Game* game = new Game(nb_joueur); //Initialisation de la partie
	game->InfoPreGame(); //Affichage des informations de début
	while (!game->IsEndGame()) { //Tant que la partie n'est pas fini
		game->Round();

	}
}

//for (Player* joueur : game->GetJoueurs()) {
	//joueur->DisplayDeck();
//}

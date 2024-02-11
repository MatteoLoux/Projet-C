#include <iostream>
#include "main.h"
#include "Display.h"
#include "Game.h"
#include <iomanip>
#include <sstream>
using namespace std;




int main() {
	int choix = Start();
	while (choix != 1) {
		if (choix == 2) {
			choix = Rules();
		}
		else {
			Exit(); 
		}
	}
	int nb_joueur = Play();
	Game game =  Game(nb_joueur);
}



#include "Display.h"
#include <iostream>

using namespace std;

int Choice() {
	//Affiche les choix et enregistre la saisie
	cout << "1. Jouer" << endl;
	cout << "2. Afficher les regles" << endl;
	cout << "3. Quitter" << endl;
	cout << "Choisissez entre 1 et 3 : ";
	int choice;
	cin >> choice;

	//Tant que la saisie n'est pas valide
	while (cin.fail() || choice < 1 || choice > 3) {	
		// Effacer error flags
		cin.clear(); 

		// Ignorer le reste de la ligne invalide
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Remande la saisie
		cout << "Saisie invalide. Veuillez entrer un nombre entre 1 et 3 : ";
		cin >> choice;
	}

	return choice;
}

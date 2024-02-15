#include "Display.h"


using namespace std;



int VerifyInput(int min, int max)
{
	int choix;
	cin >> choix;

	//Tant que la saisie n'est pas valide
	while (cin.fail() || choix < min || choix > max) {
		// Effacer error flags
		cin.clear();

		// Ignorer le reste de la ligne invalide
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//Remande la saisie
		cout << "Saisie invalide. Veuillez entrer un nombre entre " << min  << " et " << max << " : " << endl;
		cin >> choix;
	}

	return choix;
}

int Choice() {
	//Affiche les choix et enregistre la saisie
	cout << "1. Jouer" << endl;
	cout << "2. Afficher les regles" << endl;
	cout << "3. Quitter" << endl;
	cout << "Choisissez entre 1 et 3 : " << endl;
	size_t choice = VerifyInput(1,3);
	return choice;
}

void WaitInput()
{
	cin.get();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


int Start()
{

	return Choice();
}

int Rules()
{
	string url = "http://jeuxstrategie1.free.fr/jeu_katana/regle.pdf";
	string command = "start " + url;
	system(command.c_str());
	return Choice();
}

void Exit()
{
	exit(0);
}

int Play()
{
	//Demande nombre de joueurs
	cout << "Combien de joueurs ? (entre 3 et 7) " << endl;
	int choix = VerifyInput(3, 7);

	return choix;
}

string AskName(int numPlayer)
{
	string playerName;
	cout << "Nom du joueur " << numPlayer + 1 << ": ";
	cin >> playerName;
	return playerName;

}

void DisplayPlayer(Player* player)
{
	cout << player->GetName() << endl;
	cout << "Role : " << player->GetRole().GetName() << endl;
	cout << "Personnage : " << player->GetCharacter().GetName() << endl;
	cout << "HP : " << player->GetLifePoint() << endl;
	cout << "Points d'honneurs : " << player->GetHonnorPoint() << endl;
	cout << "Nombre de cartes en main : " << player->GetDeck()->size() << endl;
	player->DisplayDeck();
}




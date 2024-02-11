#include "Game.h"

//Mélange une liste de carte
template<typename T>
void Shuffle(vector<T*>* list)
{
	random_device rd;
	mt19937 gen(rd());
	shuffle((*list).begin(), (*list).end(), gen);
}

Game::Game(int nb_joueur)
{
	Init_Player(nb_joueur); //Initialise les joueurs
	Init_Pioche(); //Initialise la pioche
	switch (nb_joueur) //Donne les attributs et carte aux joueurs en fonction du nombre
	{
	case 3:
		Trois_Joueurs();
	case 4:
		Quatre_Joueurs();
	case 5:
		Cinq_Joueurs();
	case 6:
		Six_Joueurs();
	default:
		Sept_Joueurs();
	}
}


void Game::Init_Player(int nb_joueur)
{
	for (int i = 0; i < nb_joueur; i++) {
		this->Joueurs.push_back(new Player("joueur" + (i + 1)));
	}
}

void Game::Init_Action_Card(vector<Card*>* tmp_pioche)
{
	//Initialisation de toutes les cartes d'actions
	for (int i = 0; i < 4; i++) {
		Action* Cri_de_Guerre = new Action("Cri de Guerre", CRI_DE_GUERRE);
		(*tmp_pioche).push_back(Cri_de_Guerre);
	}
	for (int i = 0; i < 3; i++) {
		Action* Daimyo = new Action("Daimyo", DAIMYO);
		(*tmp_pioche).push_back(Daimyo);
	}
	for (int i = 0; i < 5; i++) {
		Action* Diversion = new Action("Diversion", DIVERSION);
		(*tmp_pioche).push_back(Diversion);
	}
	for (int i = 0; i < 6; i++) {
		Action* Geisha = new Action("Geisha", GEISHA);
		(*tmp_pioche).push_back(Geisha);
	}
	for (int i = 0; i < 3; i++) {
		Action* Meditation = new Action("Meditation", MEDITATION);
		(*tmp_pioche).push_back(Meditation);
	}
	for (int i = 0; i < 15; i++) {
		Action* Parade = new Action("Parade", PARADE);
		(*tmp_pioche).push_back(Parade);
	}
	for (int i = 0; i < 4; i++) {
		Action* Ceremonie_du_the = new Action("Ceremonie du the", CEREMONIE_DU_THE);
		(*tmp_pioche).push_back(Ceremonie_du_the);
	}
	for (int i = 0; i < 3; i++) {
		Action* Jujitsu = new Action("Jujitsu", JUJITSU);
		(*tmp_pioche).push_back(Jujitsu);
	}
}

void Game::Init_Perm_Card(vector<Card*>* tmp_pioche)
{
	for (int i = 0; i < 3; i++) {
		Permanente* Attaque_Rapide = new Permanente("Attaque Rapide", ATTAQUE_RAPIDE);
		(*tmp_pioche).push_back(Attaque_Rapide);
	}
	for (int i = 0; i < 2; i++) {
		Permanente* Code_du_Bushido = new Permanente("Code du Bushido", CODE_DU_BUSHIDO);
		(*tmp_pioche).push_back(Code_du_Bushido);
	}
	for (int i = 0; i < 4; i++) {
		Permanente* Armure = new Permanente("Armure", ARMURE);
		(*tmp_pioche).push_back(Armure);
	}
	for (int i = 0; i < 6; i++) {
		Permanente* Concentration = new Permanente("Concentration", CONCENTRATION);
		(*tmp_pioche).push_back(Concentration);
	}
}

void Game::Init_Weapon_Card(vector<Card*>* tmp_pioche) //A FINIR
{
}

vector<Character>* Game::Init_Character()
{
	vector<Character>* liste_personnage = new vector<Character>;
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP)); //AUTRE PERSONNAGE A REJOUTER
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP));


	random_device rd;
	mt19937 gen(rd());		//mélange de la liste  aléatoirement
	shuffle((*liste_personnage).begin(), (*liste_personnage).end(), gen);
	return liste_personnage;
}



void Game::Init_Pioche()
{
	vector<Card*> tmp_pioche = {}; // Liste temporaire pour mélanger avant de push dans la pile
	this->Defausse = {}; // Initialisation de la défausse

	//Initalisation de toutes les cartes dans la liste temporaire
	Init_Action_Card(&tmp_pioche);
	Init_Perm_Card(&tmp_pioche);
	Init_Weapon_Card(&tmp_pioche);
	
	//Mélange de la liste
	Shuffle(&tmp_pioche);

	//Push element dans la pioche
	for (Card* carte : tmp_pioche) {
		this->Pioche.push(carte);
	}
}

void Game::SetPlayerStats( Role role[])
{
	int nb_joueur = this->Joueurs.size();
	vector<Character>* liste_personnage = Init_Character();
	Shuffle(&this->Joueurs); //Mélnge la liste des joueurs
	for (int i = 0; i < nb_joueur; i++) {
		this->Joueurs[i]->SetRole(role[i]); //Attribut le role en fonction de la place dans la liste
		this->Joueurs[i]->SetCharacter((*liste_personnage)[i]); //Attribut le personnage 
		this->Joueurs[i]->GiveHp(); //Donne les hp selon le personnage
		if (i == 0) //Si c'est le shogun
		{
			this->Joueurs[i]->SetHonnorPoint(5); //5 points d'honneur
		}
		else {
			this->Joueurs[i]->SetHonnorPoint(0.5 * nb_joueur * nb_joueur - 7.5 * nb_joueur + 36); //Sinon selon les personnages (paramètre de SetHonnorPoint : fonction tel que f(4) = f(5) = 3 et f(6) = f(7) = 4)
		}
	}
	delete liste_personnage;
}

void Game::DistributeCard()
{
	int nb_joueurs = this->Joueurs.size();
	for (int i = 0; i < nb_joueurs; i++) {
		int j;
		if (i == 0) {
			j = 3;
		}
		else if (i == 1 || i == 2) {
			j = 2;
		}
		else if (i == 3 || i == 4) {
			j = 1;
		}
		else if (i == 5 || i == 6) {
			j = 0;
		}
		for (j; j < 7; j++) {
			Card* carte = Pioche.top();
			this->Joueurs[i]->AddCardDeck(carte);
			Pioche.pop();
		}
	}
}

void Game::Trois_Joueurs()
{

}

void Game::Quatre_Joueurs()
{
	Role role[4] = {Role("Shogun"), Role("Samourai"), Role("Ninja"), Role("Ninja")}; //Créer liste de role
	SetPlayerStats(role);
	DistributeCard();
}

void Game::Cinq_Joueurs()
{
	Role role[5] = { Role("Shogun"), Role("Samourai"), Role("Ronin"), Role("Ninja"), Role("Ninja")};
	SetPlayerStats(role);
	DistributeCard();
}

void Game::Six_Joueurs()
{
	Role role[6] = { Role("Shogun"), Role("Samourai"), Role("Ronin"), Role("Ninja"), Role("Ninja"), Role("Ninja") };
	SetPlayerStats(role);
	DistributeCard();
}

void Game::Sept_Joueurs()
{
	Role role[7] = { Role("Shogun"), Role("Samourai"), Role("Samourai"), Role("Ronin"), Role("Ninja"), Role("Ninja"), Role("Ninja") };
	SetPlayerStats(role);
	DistributeCard();
}




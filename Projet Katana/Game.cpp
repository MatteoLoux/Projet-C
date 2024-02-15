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
	 //Donne les attributs et carte aux joueurs en fonction du nombre
	if (nb_joueur == 3) {
		Trois_Joueurs();
	}
	else if (nb_joueur == 4) {
		Quatre_Joueurs();
	}
	else if (nb_joueur == 5) {
		Cinq_Joueurs();
	}
	else if (nb_joueur == 6) {
		Six_Joueurs();
	}
	else if (nb_joueur == 7) {
		Sept_Joueurs();
	}
}




void Game::Init_Player(int nb_joueur)
{
	for (int i = 0; i < nb_joueur; i++) {
		string name = AskName(i);
		this->Joueurs.push_back(new Player(name));
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
	(*tmp_pioche).push_back(new Weapon("Nodashi", 3, 3));
	(*tmp_pioche).push_back(new Weapon("Naginata", 1, 4));
	(*tmp_pioche).push_back(new Weapon("Naginata", 1, 4));
	(*tmp_pioche).push_back(new Weapon("Nagayari", 2, 4));
	(*tmp_pioche).push_back(new Weapon("Tanegashima", 1, 5));
	(*tmp_pioche).push_back(new Weapon("Daikyu", 2, 5));
	for (int i = 0; i < 5; i++) {
		(*tmp_pioche).push_back(new Weapon("Bo", 1, 2));
	}
	for (int i = 0; i < 4; i++) {
		(*tmp_pioche).push_back(new Weapon("Kusarigama", 2, 2));
	}
	(*tmp_pioche).push_back(new Weapon("Katana", 3, 2));
	for (int i = 0; i < 3; i++) {
		(*tmp_pioche).push_back(new Weapon("Shuriken", 1, 3));
	}
	(*tmp_pioche).push_back(new Weapon("Kanobo", 2, 3));
	for (int i = 0; i < 6; i++) {
		(*tmp_pioche).push_back(new Weapon("Bokken", 1, 1));
	}
	for (int i = 0; i < 5; i++) {
		(*tmp_pioche).push_back(new Weapon("Kiseru", 2, 1));
	}
	(*tmp_pioche).push_back(new Weapon("Wakizashi", 3, 1));
}






vector<Character>* Game::Init_Character()
{
	vector<Character>* liste_personnage = new vector<Character>;
	liste_personnage->push_back(Character("Hanzo", HANZO_S, HANZO_HP)); //AUTRE PERSONNAGE A REJOUTER
	liste_personnage->push_back(Character("Ushiwaka", USHIWAKA_S, USHIWAKA_HP));
	liste_personnage->push_back(Character("Chiyome", CHIYOME_S, CHIYOME_HP));
	liste_personnage->push_back(Character("Hideyoshi", HIDEYOSHI_S, HIDEYOSHI_HP));
	liste_personnage->push_back(Character("Ginchiyo", GINCHIYO_S, GINCHIYO_HP));
	liste_personnage->push_back(Character("Goemon", GOEMON_S, GOEMON_HP));
	liste_personnage->push_back(Character("Nobunaga", NOBUNAGA_S, NOBUNAGA_HP));
	liste_personnage->push_back(Character("Tomoe", TOMOE_S, TOMOE_HP));
	liste_personnage->push_back(Character("Ieyasu", IEYASU_S, IEYASU_HP));
	liste_personnage->push_back(Character("Benkei", BENKAI_S, BENKAI_HP));
	liste_personnage->push_back(Character("Musashi", MUSASHI_S, MUSASHI_HP));
	liste_personnage->push_back(Character("Kojiro", KOJIRO_S, KOJIRO_HP));





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




void Game::PickCard(Player* player)
{
	Card* carte = Pioche.top();
	player->AddCardDeck(carte);
	Pioche.pop();
}




void Game::SetPlayerStats( Role role[])
{
	size_t nb_joueur = this->Joueurs.size();
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
		else {//Sinon selon le nombre de joueurs
			if (nb_joueur > 5) {
				this->Joueurs[i]->SetHonnorPoint(4);
			}
			else {
				this->Joueurs[i]->SetHonnorPoint(3);
			}
			
		}
	}
	delete liste_personnage;
}




void Game::DistributeCard()
{
	int nb_joueurs = this->Joueurs.size();
	for (int i = 0; i < nb_joueurs; i++) {
		size_t j;
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
		for (; j < 7; j++) {
			PickCard(this->Joueurs[i]);
		}
	}
}

void Game::EmptyPioche()
{
	Shuffle(&this->Defausse); //Mélange de la défausse

	for (Card* carte : this->Defausse) { //Pour chaque carte dans la défausse
		this->Pioche.push(carte); //On l'ajoute dans la pile
	}
	this->Defausse = {}; // Vide la defausse

}

void Game::DefausseCardDeck(Player* player, int i)
{
	this->Defausse.push_back((*player->GetDeck())[i]);
	player->RemoveCardDeck(i);
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

bool Game::IsEndGame()
{
	for (Player* player : this->Joueurs) {
		if (player->GetHonnorPoint() < 1) {
			return true;
		}
	}
	return false;
}

void Game::AttackPlayer(Player* player, Weapon* carteWeapon)
{
	size_t indexPlayer; //indice player
	size_t indexDefenseur; //indice defenseur
	cout << "Choisissez le numero de l'adversaire a attaquer : " << endl;
	for (int i = 0; i < this->Joueurs.size(); i++) { // Pour chaque joueur dans la liste 
		if (Joueurs[i] != player) {
			cout << i + 1 << " : " << Joueurs[i]->GetName() << endl;
			cout << "HP : " << Joueurs[i]->GetLifePoint() << endl;
			cout << "Points d'honneur : " << Joueurs[i]->GetHonnorPoint() << endl << endl;
		}
		else {
			indexPlayer = i;
		}
	}
	indexDefenseur = VerifyInput(1, this->Joueurs.size()) - 1; //Enregistre l'indice du defenseur
	cout << "Attaquer " << this->Joueurs[indexDefenseur]->GetName() << " avec une difficulté de " << calculateDifficulty(this->Joueurs, indexPlayer, indexDefenseur) << " ? (1: oui, 2:non)" << endl;
	int choix = VerifyInput(1, 2);
	if (choix == 1) {
		Player* Defenseur = this->Joueurs[indexDefenseur];
		if (Defenseur->IsGrounded()) { // Si le joueur est à terre
			system("cls");
			cout << Defenseur->GetName() << " est à terre, vous ne pouvez pas l'attaquer." << endl; //Impossible de l'attaquer
			AttackPlayer(player, carteWeapon);
		}
		if (calculateDifficulty(this->Joueurs, indexPlayer, indexDefenseur) > carteWeapon->GetRange()) {//Si la difficulté est supérieur à la précision de l'arme
			system("cls");
			cout << "La precision de l'arme n'est pas assez eleve"; //Impossible de l'attaquer
			AttackPlayer(player, carteWeapon);
		}
		//Si toutes les conditions sont ok pour attaquer
		if (Defenseur->GotParade()) { //Si le défenseur possède une Parade
			system("cls");
			cout << player->GetName() << " attaque " << Defenseur->GetName() << " avec " << carteWeapon->GetName() << endl;
			cout << "Utiliser une parade pour bloquer l'attaque ? 1: oui 2: non" << endl;
			choix = VerifyInput(1, 2); 
			if (choix == 1) { //Si il décide d'utiliser la parade
				size_t indiceParade = Defenseur->findIndexParade();
				Defenseur->RemoveCardDeck(indiceParade);
				this->LastAction = player->GetName() + " a ataquer " + Defenseur->GetName() + " avec " + carteWeapon->GetName() + ". L'attaque a ete bloque avec une parade.";
			} 
			else { //Si il n'utilise pas la parade
				Defenseur->TakeDamage(carteWeapon->GetDamage());
				this->LastAction = player->GetName() + " a ataquer " + Defenseur->GetName() + " avec " + carteWeapon->GetName() + ". L'attaque a reussi.";
			}
		} 
	}
	else { //Si il veut annuler son attaque
		system("cls");
		AttackPlayer(player, carteWeapon);
	}

}



void Game::InfoPreGame()
{
	for (Player* joueur : this->Joueurs) {
		system("cls");
		DisplayPlayer(joueur);
		cout << "Appuyer sur une Entree pour passer au joueur suivant ..." << endl;
		WaitInput();
	}
	system("cls");
	cout << "Le shogun est : " << this->Joueurs[0]->GetName() << endl;
	cout << "Appuyer sur Entree pour passer au debut de la partie";
	WaitInput();
}

int Game::DisplayInfoRound(Player* player)
{
	int choix;
	DisplayPlayer(player);
	cout << "Entrer 0 pour ne rien faire ou selectionner une carte de votre Deck entre 1 et " << player->GetDeck()->size() << endl;
	choix = VerifyInput(0, player->GetDeck()->size());
	return choix;
}




int Game::calculateDifficulty(vector<Player*> players, size_t attackerIndex, size_t defenderIndex)
{
	size_t n = players.size();

	// Calculer la distance parcourue dans le sens anti-horaire
	size_t distance1 = 0;
	for (size_t i = attackerIndex; i != defenderIndex; i = (i + 1) % n) {
		if (!players[i]->IsGrounded())
			distance1++;
	}

	// Calculer la distance parcourue dans le sens horaire
	size_t distance2 = 0;
	for (size_t i = attackerIndex; i != defenderIndex; i = (i - 1 + n) % n) {
		if (!players[i]->IsGrounded())
			distance2++;
	}

	if (players[defenderIndex]->GetCharacter().GetName() == "Benkei") //Si le personnage attaqué est Benkai, on augmente la difficulté + 1
	{
		return min(distance1, distance2) + 1;
	}
	// La difficulté de l'attaque est la distance minimale entre les deux distances
	return min(distance1, distance2);
}

void Game::PlayCard(Player* player, int indiceCarte)
{
	Card* carte = (*player->GetDeck())[indiceCarte];
	if (carte->GetType() == "Weapon") {
		// Vérifier si la carte est une arme en utilisant dynamic_cast
		Weapon* arme = dynamic_cast<Weapon*>(carte);
		if (arme != nullptr) { // La conversion a réussi, la carte est une arme
			AttackPlayer(player, arme);
			DefausseCardDeck(player, indiceCarte);
		}
	}
	else if (carte->GetType() == "Permanente") {

	}
	else { //Carte de type Action

	}
}

void Game::RecoveryPhase(Player* player)
{
	cout << "Phase de recuperation" << endl;
	cout << "Vous avez : " << player->GetLifePoint() << " points de vie" << endl;
	if (player->GetLifePoint() < 1) {
		player->GiveHp();
		cout << "Vous avez recuperer vos points de vie" << endl;
	}
	else {
		cout << "Vous n'avez pas besoin de recuperer vos points de vie" << endl << endl;
	}
}

void Game::PickCardPhase(Player* player)
{
	cout << "Vous avez pioche 2 cartes" << endl;
	for (int i = 0; i < 2; i++) {
		if (this->Pioche.size() < 1) {
			EmptyPioche();
		}
		PickCard(player);
	}
}

void Game::PlayPhase(Player* player)
{
	bool UseWeaponCard = false; //Ne peut jouer une arme d'action qu'1 fois
	int choix = DisplayInfoRound(player); 
	if (choix != 0) { //Si le joueur joue une carte
		while (choix != 0) { //Tant qu'il ne décide pas d'arreter de joueur
			
			PlayCard(player, choix - 1);
			choix = DisplayInfoRound(player);
			
		}
	}
	else {
		this->LastAction = player->GetName() + " n'a joue aucune carte.";
	}
}

void Game::DefaussePhase(Player* player)
{
	int nb_cartes = player->GetDeck()->size(); //Nombre de cartes dans le deck
	cout << "Vous avez " << nb_cartes << "cartes" << endl;
	if (nb_cartes > 7) { //Si le joueur a plus de 7 cartes
		cout << "Vous avez plus de 7 cartes, selectionnez le numero des cartes a defausser" << endl;
		int cartes_en_trop = nb_cartes - 7;
		size_t choix;
		for (int i = 0; i < cartes_en_trop; i++) { //On lui retire le surplus
			player->DisplayDeck(); //Affiche le deck
			cout << "Numero de la carte a supprimer : ...";
			choix = VerifyInput(1, nb_cartes);
			DefausseCardDeck(player, choix - 1); // Defausse carte choisi du deck du joueur
			cout << "Carte defaussee !";
			nb_cartes--;
		}
	}
}

void Game::Round()
{
	size_t nb_joueurs = this->Joueurs.size();
		for (int i = 0; i < nb_joueurs; i++) {
		system("cls");
		Player* player = this->Joueurs[i]; // Uniquement le joueur qui voit
		RecoveryPhase(player);
		PickCardPhase(player);
		PlayPhase(player);
		DefaussePhase(player);
		system("cls");  //Tous les joueurs peuvent regarder
		cout << this->LastAction << endl;
		cout << "Appuyez sur une Entree pour passer au prochain joueur ..." << endl;
		WaitInput();
	}
		cout << "Round termine, appuyez sur Entree pour passer au suivant ..." << endl;
		WaitInput();

}




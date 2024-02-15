#pragma once
#ifndef HEADER_DISPLAY
#define HEADER_DISPLAY
#include <iostream>
#include <string>
#include <cstdlib>
#include "Player.h";

using namespace std;

int VerifyInput(int min, int max);

int Choice(); //Affichage des choix

void WaitInput(); //Attends l'appuie de la touche Entr�e pour continuer


int Start(); //Affichage au lancement du jeu, renvoie le choix du joueur. (1-> jouer, 2-> r�gles,3-> quitter)

int Rules(); //Affiche les r�gles et redemande un choix.

void Exit(); //Quitte le programme

int Play(); //Demande le nombre de joueurs, renvoie ce nombre


string AskName(int numPlayer); //Demande le nom du joueur num�ro numPlayer et le renvoie

void DisplayPlayer(Player* player); //Affiche les informations d'un joueur






#endif 







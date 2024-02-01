#include <iostream>
#include "function.h"
using namespace std;

void AfficheBonjour()
{
	//Code de la fonction
	cout << "Bonjour";
}

int Permuter_nb(int a, int b)
{

	return a + b;
}

void doubler(int *x)
{
	 *x *= 2;
}

int maint() {
	int nombre = 5;
	doubler(&nombre);
	cout << nombre;
	return nombre;
}


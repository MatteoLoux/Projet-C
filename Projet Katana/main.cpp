#include <iostream>
#include "function.h"
using namespace std;

int main() {
	AfficheBonjour();
	int nb1 = 1;
	int nb2 = 3;

	int* p_nb1 = &nb1;
	cout << "Pointeur de nb1 :" << p_nb1 << endl;
	*p_nb1 = *p_nb1 + 1;
	cout << "valeur de nb1 :" << nb1 << endl;
	Permuter_nb(nb1, nb2);
	return nb1;
}
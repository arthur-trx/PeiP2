#include <iostream>

#include "CEleve.h"
#include "CApprentis.h"

using namespace std;

int main(void) {
	CApprentis* tab[3];
	for (int x = 0; x < 3; x++) {
		cout << x << endl;
		CApprentis ap;
		//cin >> ap;
		tab[x] = &ap;
	}
	for (int x = 0; x < 3; x++) {
		cout << *tab[x];
	}
	cout << moyenne_age(*tab, 3, 5) << endl;
	for (int x = 0; x < 3; x++) {
		cout << tab[x]->Get_Annee();
	}
	

}

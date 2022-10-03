#include <iostream>
#include"CVehicule_thermique.h"
#include "CVehicule_hybride.h"

using namespace std;

int main(void) {
	CVehicule_hybride hybride;
	cin >> hybride;
	cout << hybride;
	cout << "l'autonomie total est : " << hybride.Get_Autonomie() << "km\n";


}

// des erreurs sur les constructeur copie / les output


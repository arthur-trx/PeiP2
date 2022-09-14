#include <iostream>
using namespace std;
#include "CIndividu.h"
#include "CSalarie.h"
#include "CEntreprise.h"


int main(void) {

	/*
	CIndividu i1;
	cin >> i1;
	cout << i1;
	cout << "test\n";
	char name[30];
	char firstname[30];
	int birth;
	cout << "entrer nom : \n";
	cin >> name;
	cout << "entrer pr\202nom : ";
	cin >> firstname;
	cout << "entrer ann\202e de naissance";
	cin >> birth;
	CIndividu i2(name, firstname, birth);
	cout << i2;

	cout << "-------------------------TP2-----------------\n";
	CSalarie s1;
	cin >> s1;
	cout << s1;
	*/
	cout << "-------------------------TP3-----------------\n";
	CEntreprise s;
	cin >> s;
	cout << s;
	cout << s.somme_salaire();

}



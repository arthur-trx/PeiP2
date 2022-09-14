#pragma once

#include <iostream>
using namespace std;

#include "CSalarie.h"


class CEntreprise
{
private:
	char* m_pName;
	CSalarie* m_pSalaries;
	int m_nNbSalaries;
public:
	CEntreprise();
	CEntreprise(char*, CSalarie*, int);
	CEntreprise(const CEntreprise&);
	~CEntreprise();

	friend ostream& operator << (ostream&, const CEntreprise&);
	friend istream& operator >> (istream&, CEntreprise&);

	int somme_salaire();

};


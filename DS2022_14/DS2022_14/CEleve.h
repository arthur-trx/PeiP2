#pragma once
#include <iostream>

using namespace std;
class CEleve
{
private:
	char* m_pNom;
	char* m_pPrenom;
	int m_nAnnee;
	int m_nAge;
public:
	CEleve();
	CEleve(char*, char*, int, int);
	CEleve(const CEleve&);
	~CEleve();

	friend istream& operator >> (istream&, CEleve&);
	friend ostream& operator << (ostream&, const CEleve&);
	int Get_Annee();
	int Get_Age();

};


#include "CApprentis.h"

CApprentis::CApprentis() :CEleve(), m_pNomEntreprise(NULL) { cout << "test\n"; }
CApprentis::CApprentis(char* name, char* firstname, int annee, int age, char* entreprise) : CEleve(name,firstname, annee, age), m_pNomEntreprise(NULL) 
{
	m_pNomEntreprise = new char[strlen(entreprise) + 1];
	strcpy_s(m_pNomEntreprise, strlen(entreprise) + 1, entreprise);
}
CApprentis::CApprentis(const CApprentis& A) : CEleve(A), m_pNomEntreprise(NULL)
{
	m_pNomEntreprise = new char[strlen(A.m_pNomEntreprise) + 1];
	strcpy_s(m_pNomEntreprise, strlen(A.m_pNomEntreprise) + 1, A.m_pNomEntreprise);
}

CApprentis::~CApprentis()
{
	if (m_pNomEntreprise != NULL) delete[]m_pNomEntreprise;
}

ostream& operator << (ostream & os, const CApprentis & s) 
{
	CEleve temp (s);
	os << s;
	os << "le nom de l'entreprise est : " << s.m_pNomEntreprise << endl;
	return os;
}

istream& operator >> (istream& is, CApprentis& s)
{
	char temp[50];
	CEleve temp_e;
	is >> temp_e;
	cout << "veuillez rentrer le nom de l'entreprise \n";
	is >> temp;
	s.m_pNomEntreprise = new char[strlen(temp) + 1];
	strcpy_s(s.m_pNomEntreprise, strlen(temp) + 1, temp);
	return is;
}



float moyenne_age(CApprentis* tab, int taille, int annee)
{
	int compte = 0;
	float moyenne = 0;
	//for (int x = 0; x < sizeof(tab); x++) 
	for (int x = 0; x < taille; x++)
	{
		if (tab[x].Get_Annee() == annee)
		{
			compte += 1;
			moyenne += tab[x].Get_Age();
		}
	}
	moyenne /= compte;
	return moyenne;
}

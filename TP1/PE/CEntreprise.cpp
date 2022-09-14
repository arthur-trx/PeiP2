#include "CEntreprise.h"

CEntreprise::CEntreprise()
	:m_pName(NULL), m_pSalaries(NULL), m_nNbSalaries(0) 
{

}
CEntreprise::CEntreprise(char * Name, CSalarie* tab, int nb)
	: m_pName(NULL), m_pSalaries(NULL), m_nNbSalaries(nb) 
{
	m_pName = new char[strlen(Name) + 1];
	strcpy_s(m_pName, strlen(Name) + 1, Name);
	m_pSalaries = new CSalarie[m_nNbSalaries];
	for (int x = 0; x < m_nNbSalaries; x++) {
		m_pSalaries[x] = tab[x];
	}
}

CEntreprise::CEntreprise (const CEntreprise& s)
	: m_pName(NULL), m_pSalaries(NULL), m_nNbSalaries(s.m_nNbSalaries)
{
	m_pName = new char[strlen(s.m_pName) + 1];
	strcpy_s(m_pName, strlen(s.m_pName) + 1, s.m_pName);
	m_pSalaries = new CSalarie[m_nNbSalaries];
	for (int x = 0; x < m_nNbSalaries; x++) {
		m_pSalaries[x] = s.m_pSalaries[x];
	}
}

CEntreprise::~CEntreprise() {
	if (m_pName != NULL) delete[] m_pName;
	if (m_pSalaries != NULL) delete[] m_pSalaries;
}


ostream& operator << (ostream& os, const CEntreprise& s)
{
	os << "entreprise :" << s.m_pName << endl;
	for (int i = 0; i < s.m_nNbSalaries; i++) os << s.m_pSalaries[i] << endl;
	return os;
}

istream& operator >> (istream& is, CEntreprise& s)
{
	cout << "veuillez entrer le nom de l'entreprise :" << endl;
	char temp[50];
	is >> temp;
	s.m_pName = new char [strlen(temp) + 1];
	strcpy_s(s.m_pName, strlen(temp)+1, temp);

	cout << "ceullez entrer le nombre de salari\202s \n";
	int temp_int;
	is >> temp_int;
	if (temp_int != s.m_nNbSalaries)
	{
		delete[] s.m_pSalaries;
		s.m_nNbSalaries = temp_int;
		s.m_pSalaries = new CSalarie[s.m_nNbSalaries];
	}

	for (int i = 0; i < s.m_nNbSalaries; i++) {
		cout << "--salari\202  " << i + 1 << " --" << endl;
		CSalarie temp_sala;
		is >> temp_sala;
		s.m_pSalaries[i] = temp_sala;
	}
	return is;
}

int CEntreprise::somme_salaire()
{
	int somme = 0;
	for (int x = 0; x < m_nNbSalaries; x++) somme += m_pSalaries[x].salaire();
	return somme;
}
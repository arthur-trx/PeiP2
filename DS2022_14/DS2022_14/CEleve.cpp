#include "CEleve.h"


CEleve::CEleve() :m_pNom(NULL), m_pPrenom(NULL), m_nAnnee(0), m_nAge(0) { }

CEleve::CEleve(char* name, char* firstname, int annee, int age) : m_pNom(NULL), m_pPrenom(NULL), m_nAnnee(annee), m_nAge(age)
{
	m_pNom = new char[strlen(name) + 1];
	m_pPrenom = new char[strlen(firstname) + 1];
	strcpy_s(m_pNom, strlen(name) + 1, name);
	strcpy_s(m_pPrenom, strlen(firstname) + 1, firstname);
}

CEleve::CEleve(const CEleve& S) : m_pNom(NULL), m_pPrenom(NULL), m_nAnnee(S.m_nAnnee), m_nAge(S.m_nAge)
{
	if (S.m_pNom != NULL) {
		m_pNom = new char[strlen(S.m_pNom) + 1];
		strcpy_s(m_pNom, strlen(S.m_pNom) + 1, S.m_pNom);
	}
	if (S.m_pPrenom != NULL) {
		m_pPrenom = new char[strlen(S.m_pPrenom) + 1];
		strcpy_s(m_pPrenom, strlen(S.m_pPrenom) + 1, S.m_pPrenom);
	}
}

CEleve::~CEleve(){
	if (m_pNom != NULL) delete[] m_pNom;
	if (m_pPrenom != NULL) delete[] m_pPrenom;
}
ostream& operator << (ostream& os, const CEleve& s) {
	cout << "test 2 \n";
	os << "l'eleve s'appelle :  " << s.m_pNom << "   " << s.m_pPrenom << endl;
	os << "il est en " << s.m_nAnnee << "année(s)" << endl;
	os << "il a" << s.m_nAge << "ans\n";
	return os;
}
istream& operator >> (istream& is, CEleve& s) {
	if (s.m_pNom != NULL) delete[] s.m_pNom;
	if (s.m_pPrenom != NULL) delete[] s.m_pPrenom;
	char temp[50];
	char temp_2[50];
	cout << "veuillez entrer le nom : \n";
	is >> temp;
	s.m_pNom = new char[strlen(temp) + 1];
	strcpy_s(s.m_pNom, strlen(temp) + 1, temp);
	cout << "veuillez entrer le prenom : \n";
	is >> temp_2;
	s.m_pPrenom = new char[strlen(temp_2) + 1];
	strcpy_s(s.m_pPrenom, strlen(temp_2) + 1, temp_2);
	cout << "veuillez entrer l'annee : \n";
	is >> s.m_nAnnee;
	cout << "veuillez entrer l'age : \n";
	is >> s.m_nAge;
	return is;
}


int CEleve::Get_Age() { return m_nAge; }
int CEleve::Get_Annee() { return m_nAnnee; }
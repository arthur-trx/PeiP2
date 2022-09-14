#include "CSalarie.h"


CSalarie::CSalarie():CIndividu()
{
	m_nHiring = 0;
	m_nSalary = 0;
	m_pRole = NULL;

}
CSalarie::CSalarie(char* Name, char* FirstName, int Birth, int hiring, int salary, char* Role) : CIndividu(Name, FirstName, Birth)
{
	m_nHiring = hiring;
	m_nSalary = salary;
	m_pRole = new char[strlen(Role) + 1];
	strcpy_s(m_pRole, strlen(Role) + 1, Role);

}
CSalarie::CSalarie(const CSalarie& s) : CIndividu (s)
{
	m_nHiring = s.m_nHiring;
	m_nSalary = s.m_nSalary;
	m_pRole = new char[strlen(s.m_pRole) + 1];
	strcpy_s(m_pRole, strlen(s.m_pRole) + 1, s.m_pRole);

}
CSalarie::~CSalarie()
{
	if (m_pRole != NULL) delete[] m_pRole;

}

ostream& operator << (ostream& os, CSalarie& s)
{
	CIndividu* I = &s;
	os << *I;
	os << "Date d'embauche :" << s.m_nHiring << endl;
	os << "Fonction : " << s.m_pRole << endl;
	os << "Salaire : " << s.m_nSalary << endl;
	return os;
}

istream& operator >> (istream& is, CSalarie& s) 
{
	CIndividu* I = &s;
	is >> *I;


	cout << "rentrer l'ann\202e d'embauche : \n";
	is >> s.m_nHiring;
	cout << "rentrer le salaire : \n";
	is >> s.m_nSalary;
	char temp[30];
	cout << "rentrer le role : \n";
	is >> temp;
	delete[] s.m_pRole;
	s.m_pRole = new char[strlen(temp) + 1];
	strcpy_s(s.m_pRole, strlen(temp) + 1, temp);
	return is;
}

int CSalarie::salaire() {
	return  m_nSalary;
}




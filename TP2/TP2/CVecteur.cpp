#include "CVecteur.h"


CVecteur::CVecteur()
	:m_pComp(NULL), m_nNbComp(0) 
{

}

CVecteur::CVecteur(int* comp, int nb)
	: m_pComp(NULL), m_nNbComp(nb)
{
	m_pComp = new int[m_nNbComp];
	for (int i = 0; i < m_nNbComp; i++)
	{
		m_pComp[i] = comp[i];
	}

}

CVecteur::CVecteur(const CVecteur& s)
	: m_pComp(NULL), m_nNbComp(s.m_nNbComp)
{
	m_pComp = new int[m_nNbComp];
	for (int i = 0; i < m_nNbComp; i++)
	{
		m_pComp[i] = s.m_pComp[i];
	}
}

CVecteur::~CVecteur()
{
	if (m_pComp != NULL) delete[] m_pComp;

}

ostream& operator << (ostream& os, const CVecteur& s) {
	os << "le vecteurs a " << s.m_nNbComp << " composante(s)\n";
	for (int i = 0; i < s.m_nNbComp; i++)
	{
		os << "composante " << i <<" : " << s.m_pComp[i] <<endl;
	}
	
	return os;
}

istream& operator >> (istream& is, CVecteur& s) {
	cout << "veuillez entrer le nombre de composante : \n";
	int temp;
	is >> temp;
	if (s.m_nNbComp != temp)
	{
		s.m_nNbComp = temp;
		delete[] s.m_pComp;
		s.m_pComp = new int[s.m_nNbComp];
	}

	for (int i = 0; i < s.m_nNbComp; i++)
	{
		cout << "veuillez rentrer composantes " << i << " : \n";
		is >> s.m_pComp[i];
	}
	return is;
}

int CVecteur::GetComp(int n) {
	if (n < m_nNbComp) return m_pComp[n];
	return 0;
}



#include "CPoint3D_couleur.h"

CPoint3D_couleur::CPoint3D_couleur():CPoint3D(),CCouleur(), m_pName(NULL)
{
	cout << "init 3dc default\n";
}

CPoint3D_couleur::CPoint3D_couleur(int x, int y, int z, int color[3], char* name) : CPoint3D(x, y, z), CCouleur(color)
{
	cout << "init 3dc x,y,z,tab_c,name\n";
	m_pName = new char[strlen(name) + 1];
	strcpy_s(m_pName, strlen(name) + 1, name);
}
CPoint3D_couleur::CPoint3D_couleur(const CPoint3D_couleur& s) : CPoint3D(s), CCouleur(s)
{
	cout << "init 3dc copie\n";
	m_pName = new char[strlen(s.m_pName) + 1];
	strcpy_s(m_pName, strlen(s.m_pName) + 1, s.m_pName);
}

CPoint3D_couleur::~CPoint3D_couleur()
{
	cout << "destructeur 3dc \n";
	if (m_pName != NULL) delete[] m_pName;
}

ostream& operator<<(ostream& os, CPoint3D_couleur& s) 
{
	os << "le point " << s.m_pName << " : " << endl;
	CPoint3D* temp = &s;
	os << *temp;
	CCouleur* temp_c = &s;
	os << *temp_c;
	return os;
}

istream& operator>>(istream& is, CPoint3D_couleur& s)
{
	CPoint3D* temp = &s;
	is >> *temp;
	CCouleur* temp_c = &s;
	is >> *temp_c;
	cout << "veuillez retrer le nom du point :  \n";
	char temp_n[30];
	is >> temp_n;
	delete[] s.m_pName;
	s.m_pName = new char[strlen(temp_n) + 1];
	strcpy_s(s.m_pName, strlen(temp_n) +1, temp_n);
	return is;
}

CPoint3D_couleur CPoint3D_couleur::operator=(const CPoint3D_couleur& point3d_color)
{
	if (strlen(point3d_color.m_pName) != strlen(m_pName))
	{
		delete[] m_pName;
		m_pName = new char[strlen(point3d_color.m_pName) + 1];
	}
	strcpy_s(m_pName, strlen(point3d_color.m_pName) +1, point3d_color.m_pName);

	return CPoint3D_couleur();
}


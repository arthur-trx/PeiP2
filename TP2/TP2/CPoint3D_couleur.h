#pragma once

#include "CPoint3D.h"
#include "CCouleur.h"
#include <iostream>
using namespace std;


class CPoint3D_couleur : public CPoint3D, public CCouleur
{
	char* m_pName;
public:
	CPoint3D_couleur();
	CPoint3D_couleur(int, int, int,int [3], char*);
	CPoint3D_couleur(const CPoint3D_couleur&);
	~CPoint3D_couleur();
	friend ostream& operator<< (ostream&, CPoint3D_couleur&);
	friend istream& operator>> (istream&, CPoint3D_couleur&);
	CPoint3D_couleur operator= (const CPoint3D_couleur&);
	 
};


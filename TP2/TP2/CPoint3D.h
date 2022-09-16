#pragma once

#include <iostream>

using namespace std;

#include "CPoint2D.h"

class CPoint3D : public CPoint2D
{
private :
	int m_Z;
public:
	CPoint3D();
	CPoint3D(int, int, int);
	CPoint3D(const CPoint3D&);
	~CPoint3D();

	friend ostream& operator << (ostream&, CPoint3D&);
	friend istream& operator >> (istream&, CPoint3D&);
	friend CPoint3D operator+ (CPoint3D, CVecteur);

	void Qui_suis_je();


};


#pragma once

#include <iostream>
using namespace std;

#include "CVecteur.h"


class CPoint2D
{
private:
	int m_X;
	int m_Y;
public:
	CPoint2D();
	CPoint2D(int x, int y);
	CPoint2D(const CPoint2D&);
	~CPoint2D();

	friend ostream& operator << (ostream&, const CPoint2D&);
	friend istream& operator >> (istream&, CPoint2D&);
	friend CPoint2D operator+ (CPoint2D, CVecteur);

	int GetX();
	int GetY();
};


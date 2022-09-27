#pragma once
#include "CObjetGraphique.h"

class CSegment : public CObjetGraphique
{
	int m_longueur;
	double m_angle;
public:
	CSegment();
	CSegment(int, int, int[3], int, int, double);
	CSegment(const CSegment&);
	~CSegment();

	friend ostream& operator << (ostream& os, const CSegment&);
	friend istream& operator >> (istream& is, CSegment&);
	virtual char* Get_type();

};


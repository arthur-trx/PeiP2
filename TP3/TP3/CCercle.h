#pragma once
#include "CObjetGraphique.h"
class CCercle : public CObjetGraphique
{
private:
	int m_rayon;
public:
	CCercle();
	CCercle(int, int, int[3], int, int);
	CCercle(const CCercle&);
	~CCercle();

	friend ostream& operator << (ostream&, const CCercle&);
	friend istream& operator >> (istream&, CCercle&);
	virtual char* Get_type();
};


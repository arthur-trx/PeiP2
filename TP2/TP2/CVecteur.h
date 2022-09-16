#pragma once
#include <iostream>

using namespace std;
class CVecteur
{
private:
	int* m_pComp;
	int m_nNbComp;

public:
	CVecteur();
	CVecteur(int*, int);
	CVecteur(const CVecteur&);
	~CVecteur();

	friend ostream& operator << (ostream&, const CVecteur&);
	friend istream& operator >> (istream&, CVecteur&);
	int GetComp(int);
};


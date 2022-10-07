#pragma once
#include "CEleve.h"

class CApprentis : public CEleve
{
private:
	char* m_pNomEntreprise;

public:
	CApprentis();
	CApprentis(char*, char*, int, int, char*);
	CApprentis(const CApprentis&);
	~CApprentis();

	friend ostream& operator<<(ostream&, const CApprentis&);
	friend istream& operator>>(istream&, CApprentis&);

	friend float moyenne_age(CApprentis*,int, int);

};


#pragma once
#include <iostream>
using namespace std;
#include "CIndividu.h"

class CSalarie : public CIndividu
{
private:
	int m_nHiring;
	int m_nSalary;
	char* m_pRole;

public:
	CSalarie();
	CSalarie(char*, char*, int, int, int, char*);
	CSalarie(const CSalarie&);
	~CSalarie();
	friend ostream& operator << (ostream&, CSalarie&);
	friend istream& operator >> (istream&, CSalarie&);

	int salaire();
};


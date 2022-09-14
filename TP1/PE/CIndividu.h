#pragma once

#include <iostream>
using namespace std;

class CIndividu
{
private:
	char* m_cName;
	char* m_cFirstName;
	int m_nBirth;
public:
	CIndividu();
	CIndividu(char* m_cName, char* m_cFirstName, int m_nBirth);
	CIndividu(const CIndividu&);
	~CIndividu();
	friend ostream& operator << (ostream&, const CIndividu&);
	friend istream& operator >> (istream&, CIndividu&);





};


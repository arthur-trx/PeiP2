#pragma once

#include <iostream>
using namespace std;

class CCouleur
{
	int m_nColor[3];
public:
	CCouleur();
	CCouleur(int [3]);
	CCouleur(int, int, int);
	CCouleur(const CCouleur&);
	~CCouleur();

	friend ostream& operator<< (ostream&, const CCouleur&);
	friend istream& operator>> (istream&, CCouleur&);
	CCouleur operator= ( const CCouleur&);

	void Qui_suis_je();


};


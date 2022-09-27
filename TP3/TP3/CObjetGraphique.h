#pragma once

#include <iostream>
using namespace std;

class CObjetGraphique
{
	int m_x;
	int m_y;
	int m_color[3];
	int m_width;
public:
	CObjetGraphique();
	CObjetGraphique(int, int, int[3], int);
	CObjetGraphique(const CObjetGraphique&);
	~CObjetGraphique();

	friend ostream& operator<<(ostream&, const CObjetGraphique&);
	friend istream& operator >> (istream&, CObjetGraphique&);

	virtual char* Get_type();

	void Translate(int, int);

	int Get_X();
	int Get_Y();
	int Get_color_R();
	int Get_color_G();
	int Get_color_B();
	int Get_width();
	void Set_X(int);
	void Set_Y(int);
	void Set_color_R(int);
	void Set_color_G(int);
	void Set_color_B(int);
	void Set_width(int);
};


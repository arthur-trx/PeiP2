#include "CCercle.h"


CCercle::CCercle() : CObjetGraphique(), m_rayon(0) {	}
CCercle::CCercle(int x, int y, int color[3], int width, int r) : CObjetGraphique(x,y,color, width), m_rayon(r) {	}
CCercle::CCercle(const CCercle& S) : CObjetGraphique(S), m_rayon(S.m_rayon) {}
CCercle::~CCercle() {	}

ostream& operator <<(ostream& os, const CCercle& s)
{
	os << "out cercle : " << endl;
	CObjetGraphique obj(s);
	os << obj;
	os << "rayon : " << s.m_rayon << endl;
	return os;
}
istream& operator>>(istream& is, CCercle& s)
{
	cout << "in cercle : " << endl;
	CObjetGraphique obj;
	is >> obj;
	cout << "rentrer le rayon : \n";
	is >> s.m_rayon;
	return is;
}

char* CCercle::Get_type() {
	char* type; type = new char[strlen("Type : Cercle") + 1];
	strcpy_s(type, strlen("Type : Cercle") +1, "Type : Cercel");
	return type;
}
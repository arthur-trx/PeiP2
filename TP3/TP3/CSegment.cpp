#include "CSegment.h"

CSegment::CSegment() : CObjetGraphique(), m_longueur(0), m_angle(0) {	}
CSegment::CSegment(int x, int y, int color[3], int width, int l, double a) : CObjetGraphique(x,y,color,width), m_longueur(l), m_angle(a) {	}
CSegment::CSegment(const CSegment& S) : CObjetGraphique(S), m_longueur(S.m_longueur), m_angle(S.m_angle) {}
CSegment::~CSegment() { };

ostream& operator<< (ostream& os , const CSegment& s)
{
	os << "out segment : \n";
	CObjetGraphique obj(s);
	os << obj;
	os << "longueur : " << s.m_longueur << endl;
	os << "angle : " << s.m_angle << endl;
	return os;
}

istream& operator >> (istream& is, CSegment& s) {
	cout << "in segment : \n";
	CObjetGraphique obj;
	is >> obj;
	cout << "rentrer la longueur : \n";
	is >> s.m_longueur;
	cout << "rentrer l'angle : \n";
	is >> s.m_angle;
	return is;
}

char* CSegment::Get_type() {
	char* type; type = new char[strlen("Type : Ligne")+1];
	strcpy_s(type, strlen("Type : Ligne") +1, "Type : Ligne");
	return type;
}
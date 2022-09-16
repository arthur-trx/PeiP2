#include "CPoint2D.h"


CPoint2D::CPoint2D()
	:m_X(0), m_Y(0)
{
	cout << "init 2d default\n";
}

CPoint2D::CPoint2D(int x, int y)
	: m_X(x), m_Y(y)
{
	cout << "init 2d x,y\n";
}

CPoint2D::CPoint2D(const CPoint2D& s)
	: m_X(s.m_X), m_Y(s.m_Y)
{
	cout << "init 2d copie\n";
}

CPoint2D::~CPoint2D() { cout << "destructeur  2d \n"; }

ostream& operator <<(ostream& os, const CPoint2D& s)
{
	//os << "point2D : \n";
	os << "m_X = " << s.m_X << endl;
	os << "m_Y = " << s.m_Y << endl;
	return os;
}
istream& operator >> (istream& is, CPoint2D& s)
{
	cout << "veuillez entrer la composante X : \n";
	is >> s.m_X;
	cout << "veuillez entrer la composante Y : \n";
	is >> s.m_Y;
	return is;
}


CPoint2D operator+(CPoint2D point, CVecteur vect)
{
	CPoint2D pointt;
	pointt.m_X = vect.GetComp(0) + point.m_X;
	pointt.m_Y = vect.GetComp(1) + point.m_Y;

	return pointt;
}

int CPoint2D::GetX() { return m_X; }
int CPoint2D::GetY() { return m_Y; }
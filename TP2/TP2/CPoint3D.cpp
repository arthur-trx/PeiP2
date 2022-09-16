#include "CPoint3D.h"

CPoint3D::CPoint3D():CPoint2D(), m_Z(0)
{
	cout << "init 3d default\n";
}

CPoint3D::CPoint3D(int x, int y, int z):CPoint2D(x, y), m_Z(z)
{
	cout << "init 3d x,y,z\n";
}

CPoint3D::CPoint3D(const CPoint3D& s) : CPoint2D(s),m_Z (s.m_Z)
{
	cout << "init 3d copie\n";
}
CPoint3D::~CPoint3D() { cout << "destructeur 3d \n"; }




ostream& operator << (ostream& os, CPoint3D& s)
{
	//os << "point3D : \n";
	CPoint2D* temp = &s;
	os << *temp;
	os << "m_Z = " << s.m_Z << endl;
	return os;
}
istream& operator >> (istream& is, CPoint3D& s)
{
	CPoint2D* temp = &s;
	is >> *temp;
	cout << "veuillez entrer la composante Z : \n";
	is >> s.m_Z;


	return is;
}


CPoint3D operator+(CPoint3D point3d, CVecteur vect)
{
	CPoint2D point2d = point3d;
	int a = vect.GetComp(0) + point2d.GetX();
	int b = vect.GetComp(1) + point2d.GetY();
	int c = vect.GetComp(2) + point3d.m_Z;
	CPoint3D point(a, b, c);
	/*cout << "test a" << a << endl;
	cout << "test b" << b << endl;
	cout << "test c" << c << endl;*/
	return point;
}

void CPoint3D::Qui_suis_je()
{
	cout << "Classe Cpoint3D\n";
}
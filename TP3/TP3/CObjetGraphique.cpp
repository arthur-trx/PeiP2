#include "CObjetGraphique.h"

CObjetGraphique::CObjetGraphique()
	:m_x(0), m_y(0), m_width(0)
{
	m_color[0] = 0; m_color[1] = 0; m_color[2] = 0;
}
CObjetGraphique::CObjetGraphique(int x, int y, int color [3], int width)
	: m_x(x), m_y(y), m_width(width)
{
	m_color[0] = color[0]; m_color[1] = color[1]; m_color[2] = color[2];
}
CObjetGraphique::CObjetGraphique(const CObjetGraphique& S)
	:m_x(S.m_x), m_y(S.m_y), m_width(S.m_width)
{
	m_color[0] = S.m_color[0]; m_color[1] = S.m_color[1]; m_color[2] = S.m_color[2];
}

CObjetGraphique::~CObjetGraphique(){}

ostream& operator<<(ostream& os, const CObjetGraphique& s)
{
	os << "les coordonées sont : (" << s.m_x << ", " << s.m_y << ") \n";
	os << "la couleur est (" << s.m_color[0] << ", " << s.m_color[1] << ", " << s.m_color[2] << ")\n";
	os << "l'épaisseur est : " << s.m_width << endl;
	return os;
}

istream& operator >> (istream& is, CObjetGraphique& s)
{
	cout << "rentrer les coordonées :\n";
	cout << "x : \n";
	is >> s.m_x;
	cout << "y : \n";
	is >> s.m_y;
	cout << "rentrer la couleur :\n";
	cout << "R : \n";
	is >> s.m_color[0];
	cout << "G : \n";
	is >> s.m_color[1];
	cout << "B : \n";
	is >> s.m_color[2];
	cout << "quelle est l'epaisseur : \n";
	is >> s.m_width;

	return is;
}

char* CObjetGraphique::Get_type() {
	char* type; type = new char[strlen ("Objet de base")+1];
	strcpy_s(type, strlen("Objet de base") + 1, "Objet de base");
	return type;
}

void CObjetGraphique::Translate(int dx, int dy) {
	m_x += dx; m_y += dy;
}

int CObjetGraphique::Get_X() { return m_x;}
int CObjetGraphique::Get_Y() { return m_y; }
int CObjetGraphique::Get_color_R() { return m_color[0]; }
int CObjetGraphique::Get_color_G() { return m_color[1]; }
int CObjetGraphique::Get_color_B() { return m_color[2]; }
int CObjetGraphique::Get_width() { return m_width; }


void CObjetGraphique::Set_X(int x) { m_x = x; }
void CObjetGraphique::Set_Y(int y) { m_y = y; }
void CObjetGraphique::Set_color_R(int R) { m_color[0] = R; }
void CObjetGraphique::Set_color_G(int G) { m_color[1] = G; }
void CObjetGraphique::Set_color_B(int B) { m_color[2] = B; }
void CObjetGraphique::Set_width(int w) { m_width = w; }



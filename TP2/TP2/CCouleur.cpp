#include "CCouleur.h"

CCouleur::CCouleur() {
	cout << "init c default\n";
	m_nColor[0]= 0; m_nColor[1] = 0; m_nColor[2] = 0;
}
CCouleur::CCouleur(int color[3]) {
	cout << "init c tab\n";
	m_nColor[0] = color[0]; m_nColor[1] = color[1]; m_nColor[2] = color[2];
}
CCouleur::CCouleur(int r, int g, int b) {
	cout << "init c r,g,b\n";
	m_nColor[0] = r; m_nColor[1] = g; m_nColor[2] = b;
}
CCouleur::CCouleur(const CCouleur& s) {
	cout << "init c copie\n";
	m_nColor[0] = s.m_nColor[0]; m_nColor[1] = s.m_nColor[1]; m_nColor[2] = s.m_nColor[2];
}
CCouleur::~CCouleur() { 
	cout << "destructeur c \n";
	//delete m_nColor;
}

ostream& operator<<(ostream& os, const CCouleur& s) {
	os << "la valeur de rouge est : " << s.m_nColor[0] <<endl;
	os << "la valeur de vert est : " << s.m_nColor[1] << endl;
	os << "la valeur de bleu est : " << s.m_nColor[2] << endl;
	return os;
}

istream& operator>> (istream& is, CCouleur& s)
{
	cout << "veuillez entrer la valeur du rouge : \n";
	is >> s.m_nColor[0];
	cout << "veuillez entrer la valeur du vert : \n";
	is >> s.m_nColor[1];
	cout << "veuillez entrer la valeur du bleu : \n";
	is >> s.m_nColor[2];
	return is;
}


CCouleur CCouleur::operator=(const CCouleur& c)
{
	m_nColor[0] = c.m_nColor[0]; m_nColor[1] = c.m_nColor[1]; m_nColor[2] = c.m_nColor[2];

	return CCouleur();
}
void CCouleur::Qui_suis_je()
{
	cout << "Classe Couleur\n";
}
#include <iostream>
using namespace std;

#include "CVecteur.h"
#include "CPoint2D.h"
#include "CPoint3D.h"
#include "CCouleur.h"
#include "CPoint3D_couleur.h"

int main(void) {
	cout << "------TP2 - 1------\n";
	/*
	CVecteur vec;
	cin >> vec;
	cout << vec;
	*/
	//CPoint2D point;
	//cin >> point;
	//cout << point;
	int* tab;
	tab = new int[3]; tab[0] = 2; tab[1] = 1; tab[2] = 0;
	//cout << point + CVecteur (tab, 2);

	cout << "------TP2 - 2------\n";
	/*CPoint3D point_3d;
	cin >> point_3d;
	cout << point_3d;
	CPoint3D translate (point_3d + CVecteur(tab, 3));
	cout << translate;
	CPoint3D point_3d_2(1, 1, 1);
	cin >> point_3d_2;
	cout << point_3d_2;
	CPoint3D translate_2 (point_3d_2 + CVecteur(tab, 3));
	cout << translate_2;
	
	int tab_2[3]; tab_2[0] = 255; tab_2[1] = 255; tab_2[2] = 255;
	CCouleur couleur;
	cin >> couleur;
	cout << couleur;
	*/
	cout << "------TP2 - 3------\n";
	CPoint3D_couleur p3d_c;

	cin >> p3d_c;
	cout << p3d_c;

	p3d_c.CCouleur::Qui_suis_je();
	p3d_c.CPoint3D::Qui_suis_je();





};
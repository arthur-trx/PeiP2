#include <iostream>
#include "CObjetGraphique.h"
#include "CSegment.h"
#include "CCercle.h"

using namespace std;

int main(void) {
	/*cout << "------------------------ - TP3 - 1----------------------------\n";
	CObjetGraphique objet;
	cin >> objet;
	cout << objet;
	objet.Set_X(0);
	objet.Set_Y(0);
	cout << objet;
	objet.Translate(100, 100);
	cout << objet;
	cout << "------------------------ - TP3 - 2 - a ----------------------------\n";
	CSegment seg;
	cin >> seg;
	cout << seg;
	int dx = 0; int dy = 0;
	cout << "rentrer translation sur x : \n"; cin >> dx;
	cout << "rentrer translation sur y : \n"; cin >> dy;
	seg.Translate(dx, dy);
	cout << seg;
	cout << "------------------------ - TP3 - 2 - b ----------------------------\n";
	CCercle cercle;
	cin >> cercle;
	cout << cercle;
	int dx = 0; int dy = 0;
	cout << "rentrer translation sur x : \n"; cin >> dx;
	cout << "rentrer translation sur y : \n"; cin >> dy;
	cercle.Translate(dx, dy);
	cout << cercle;

	cout << "fin des teste :\n";*/

	CObjetGraphique* m_pForme;
	//m_pForme = new CObjetGraphique[1];
	CObjetGraphique obj;
	m_pForme = &obj;
	cout << m_pForme->Get_type() << endl;
	CSegment seg;
	m_pForme = &seg;
	cout << m_pForme->Get_type() << endl;
	CCercle cercle;
	m_pForme = &cercle;
	//cout << m_pForme->CCercle::Get_type();
	cout << m_pForme->Get_type() << endl;

	CObjetGraphique* tab[5];
	tab[0] = &seg;
	tab[1] = &cercle;
	tab[2] = &cercle;
	tab[3] = &seg;
	tab[4] = &cercle;
	for (int i = 0; i < 5; i++)
	{
		cout << tab[i]->Get_type()<<endl;
	}
}

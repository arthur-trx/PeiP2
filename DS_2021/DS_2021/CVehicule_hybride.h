#pragma once
#include "CVehicule_thermique.h"
class CVehicule_hybride : public CVehicule_thermique
{
private:
	int m_fElectricCapacity;
	float m_fElectricAutonomie;
public:
	CVehicule_hybride();
	CVehicule_hybride(char*, float, float, float, float, int,float, float);
	CVehicule_hybride(const CVehicule_hybride&);
	~CVehicule_hybride();

	friend istream& operator >> (istream&, CVehicule_hybride&);
	friend ostream& operator << (ostream&, const CVehicule_hybride&);

	int Get_ElectricCapacity();
	int Get_ElectricAutonomie();
	int Get_Capacity();

};


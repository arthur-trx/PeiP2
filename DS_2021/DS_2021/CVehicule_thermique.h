#pragma once

#include <iostream>
using namespace std;


class CVehicule_thermique
{
private:
	char* m_pName;
	float m_fLength;
	float m_fWidth;
	float m_fWeight;
	float m_fConsumption;
	int m_nGasCapacity;
public:
	CVehicule_thermique();
	CVehicule_thermique(char*, float, float, float, float, int);
	CVehicule_thermique(const CVehicule_thermique&);
	~CVehicule_thermique();
	friend istream& operator >> (istream&, CVehicule_thermique&);
	friend ostream& operator << (ostream&, const CVehicule_thermique&);
	char* Get_Name();
	float Get_Length();
	float Get_Width();
	float Get_Weight();
	float Get_Consumption();
	int Get_GasCapacity();
	int Get_Autonomie();
		
};


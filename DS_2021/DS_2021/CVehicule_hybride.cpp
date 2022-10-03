#include "CVehicule_hybride.h"


CVehicule_hybride::CVehicule_hybride() : CVehicule_thermique(), m_fElectricAutonomie(0), m_fElectricCapacity(0) {}

CVehicule_hybride::CVehicule_hybride(char* name, float length, float width, float weight, float consomption, int capacity, float elecCap, float elecAuto) : CVehicule_thermique(name, length, width, weight, consomption, capacity), m_fElectricAutonomie(elecAuto), m_fElectricCapacity(elecCap) {}

CVehicule_hybride::CVehicule_hybride(const CVehicule_hybride& vehicule) : CVehicule_thermique(vehicule), m_fElectricAutonomie(vehicule.m_fElectricAutonomie), m_fElectricCapacity(vehicule.m_fElectricAutonomie) {}

CVehicule_hybride::~CVehicule_hybride() {}

ostream& operator << (ostream& os, const CVehicule_hybride& s){
	CVehicule_thermique thermique (s);
	os << s;
	os << "la capacite electrique est : " << s.m_fElectricCapacity << "kWh \n";
	os << "l'autonomie electrique est : " << s.m_fElectricAutonomie << "km \n";
	return os;
}

istream& operator >> (istream& is, CVehicule_hybride& s) {
	CVehicule_thermique temp;
	is >> temp;
	cout << "entrer la capacite electrique (en kWh) : \n";
	is >> s.m_fElectricCapacity;
	cout << "entrer l'autonomie electrique (en km) : \n";
	is >> s.m_fElectricAutonomie;
	return is;
}

int CVehicule_hybride::Get_ElectricCapacity() { return m_fElectricCapacity;}
int CVehicule_hybride::Get_ElectricAutonomie(){return m_fElectricAutonomie;}

int CVehicule_hybride::Get_Capacity() {
	CVehicule_thermique temp (*this);
	return m_fElectricCapacity + temp.Get_GasCapacity();
}

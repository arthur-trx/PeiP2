#include "CVehicule_thermique.h"

CVehicule_thermique::CVehicule_thermique()
	:m_pName(NULL), m_fLength(0), m_fWidth(0), m_fWeight(0),m_fConsumption(0), m_nGasCapacity(0)
{ }

CVehicule_thermique::CVehicule_thermique(char* name, float length, float width, float weight, float consomption, int capacity)
	: m_pName(NULL), m_fLength(length), m_fWidth(width), m_fWeight(weight), m_fConsumption(consomption), m_nGasCapacity(capacity)
{
	m_pName = new char[strlen(name) + 1];
	strcpy_s(m_pName, strlen(name) + 1, name);
}

CVehicule_thermique::CVehicule_thermique(const CVehicule_thermique& V) : m_pName(NULL), m_fLength(V.m_fLength), m_fWidth(V.m_fWidth), m_fWeight(V.m_fWeight), m_fConsumption(V.m_fConsumption), m_nGasCapacity(V.m_nGasCapacity)
{
	if (V.m_pName != NULL) {
		m_pName = new char[strlen(V.m_pName) + 1];
		strcpy_s(m_pName, strlen(V.m_pName) + 1, V.m_pName);
	}
}

CVehicule_thermique::~CVehicule_thermique()
{ 
	if (m_pName != NULL) delete[] m_pName;
}

ostream& operator << (ostream& os, const CVehicule_thermique& s)
{
	os << "le modele est : " << s.m_pName << endl;
	os << "sa longueur est : " << s.m_fLength << " cm\n";
	os << "sa largueur est : " << s.m_fWidth << " cm\n";
	os << "sa masse est : " << s.m_fWeight << " kg\n";
	os << "sa consomation moyenne est : " << s.m_fConsumption << " l.km^-1\n";;
	os << "sa capacité de reservoir est : " << s.m_nGasCapacity << " l\n";
	return os;
}

istream& operator >> (istream& is, CVehicule_thermique& s)
{
	char temp[50];
	cout << "entrez le nom du modele : \n";
	is >> temp;
	delete[] s.m_pName;
	s.m_pName = new char[strlen(temp) + 1];
	strcpy_s(s.m_pName, strlen(temp) + 1, temp);
	cout << "entrez la longueur (en cm) : \n";
	is >> s.m_fLength;
	cout << "entrez la largeur (en cm) : \n";
	is >> s.m_fWidth;
	cout << "entrez la masse (en kg) : \n";
	is >> s.m_fWeight;
	cout << "entrez la consomation (en l.km^-1) : \n";
	is >> s.m_fConsumption;
	cout << "entrez la capacite du reservoir (en l) : \n";
	is >> s.m_nGasCapacity;
	return is;
}

char* CVehicule_thermique::Get_Name() { return m_pName;  }
float CVehicule_thermique::Get_Length() { return m_fLength; }
float CVehicule_thermique::Get_Width() { return m_fWidth; }
float CVehicule_thermique::Get_Weight() { return m_fWeight; }
float CVehicule_thermique::Get_Consumption() { return m_fConsumption; }
int CVehicule_thermique::Get_GasCapacity() { return m_nGasCapacity; }

int CVehicule_thermique::Get_Autonomie() 
{
	return (m_nGasCapacity / m_fConsumption) ;
}
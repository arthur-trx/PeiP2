#include "CIndividu.h"
using namespace std;

CIndividu::CIndividu()
	:m_cName(NULL), m_cFirstName(NULL), m_nBirth(0)
{

}

CIndividu::CIndividu(char* cName, char* cFirstName, int nBirth )
	: m_cName(NULL), m_cFirstName(NULL), m_nBirth(nBirth)
{
	m_cName = new char[strlen(cName) + 1];
	strcpy_s(m_cName, strlen(cName) + 1, cName);
	m_cFirstName = new char[strlen(cFirstName) + 1];
	strcpy_s(m_cFirstName, strlen(cFirstName) + 1, cFirstName);
}
CIndividu::CIndividu(const CIndividu& individu)
	: m_cName(NULL), m_cFirstName(NULL), m_nBirth(individu.m_nBirth)
{
	m_cName = new char[strlen(individu.m_cName) + 1];
	strcpy_s(m_cName, strlen(individu.m_cName) + 1, individu.m_cName);
	m_cFirstName = new char[strlen(individu.m_cFirstName) + 1];
	strcpy_s(m_cFirstName, strlen(individu.m_cFirstName) + 1, individu.m_cFirstName);
}

ostream& operator << (ostream& os, const CIndividu& s) {
	os << "\202tat civil :" << s.m_cName << " , ";
	os << s.m_cFirstName << endl;
	os << "ann\202e de naissance :" << s.m_nBirth << endl;
	return os;
}

istream& operator >> (istream& is, CIndividu& s) {
	cout << "entrer votre nom \n";
	char temp [50];
	is >> temp;
	delete[] s.m_cName;
	s.m_cName = new char[strlen(temp) + 1];
	strcpy_s(s.m_cName, strlen(temp) + 1, temp);
	//cout << s.m_cName;
	cout << "entrer votre pr\202nom \n";
	char temp_1[50];
	is >> temp_1;
	delete[] s.m_cFirstName;
	s.m_cFirstName = new char[strlen(temp_1) + 1];
	strcpy_s(s.m_cFirstName, strlen(temp_1) + 1, temp_1);
	//cout << s.m_cName;
	cout << "entrer votre ann\202e de naissance \n";
	is >> s.m_nBirth;
	return is;
}





CIndividu::~CIndividu(){
	if (m_cName != NULL){
		delete[] m_cName;
	}
	if (m_cFirstName != NULL) {
		delete[] m_cFirstName;
	}
}

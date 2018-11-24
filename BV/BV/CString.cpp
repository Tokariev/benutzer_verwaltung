#include "CString.h"
#include <stdlib.h>
using namespace std;


char* CString::getString() //gibt string zurück
{
	return string;
}

CString::CString() //Konstruktor, wird beim anlegen aufgerufen
{
	string = nullptr;
}

void CString::setString(const char* str) //Konstruktor, wird beim anlegen aufgerufen
{
	string = new char[100];
	for (int i = 0; i < 100; i++) {
		if (str[i] != '\0') {
			string[i] = str[i];
		}
		else
		{
			string[i] = '\0';
			string[99] = '\0';
			return;
		}
	}
}

void CString::stringEingeben()
{
	char tempString[100];

	cout << "(Eingabe mit Enter bestaetigen):" << endl;
	//cin >> tempString;

	cin.getline(tempString, sizeof(tempString));
	CString::setString(tempString);
}

CString::~CString()
{
	delete string;
}


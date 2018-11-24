#include "CDatum.h"
#include "CString.h"
#include <iostream>
using namespace std;

CDatum::CDatum()
{
	tag = 0;
	monat = 0;
	jahr = 0;
}


CDatum::~CDatum()
{
}

int CDatum::getTag()
{
	return tag;
}

int CDatum::getMonat()
{
	return monat;
}

int CDatum::getJahr()
{
	return jahr;
}

const char * CDatum::getDatum()
{
	return getString();
}

void CDatum::setDatum(int inputTag, int inputMonat, int inputJahr)
{
	if (inputTag > 31) { tag = 31; }
	else if (inputTag < 1) { tag = 1; }
	else { tag = inputTag; };

	if (inputMonat > 12) { monat = 12; }
	else if (inputMonat < 1) { monat = 1; }
	else { monat = inputMonat; };

	if (inputJahr > 9999) { jahr = 9999; }
	else if (inputJahr < -9999) { jahr = -9999; }
	else { jahr = inputJahr; };

	char tempStr[11];
	tempStr[0] = tag / 10 + '0';
	tempStr[1] = tag % 10 + '0';
	tempStr[2] = '-';
	tempStr[3] = monat / 10 + '0';
	tempStr[4] = monat % 10 + '0';
	tempStr[5] = '-';
	tempStr[6] = jahr / 1000 + '0';
	tempStr[7] = jahr / 100 % 10 + '0';
	tempStr[8] = jahr / 10 % 10 +'0';
	tempStr[9] = jahr % 10 + '0';
	tempStr[10] = '\0';

	setString(tempStr);
}

void CDatum::datumEingeben() {
	CString stringTag;
	CString stringMonat;
	CString stringJahr;

	cout << "Bitte Datum eingeben:" << endl;
	cout << "Tag: " << endl;
	stringTag.stringEingeben();
	cout << "Monat: " << endl;
	stringMonat.stringEingeben();
	cout << "Jahr: " << endl;
	stringJahr.stringEingeben();

	int tempTag = atoi(stringTag.getString());
	int tempMonat = atoi(stringMonat.getString());
	int tempJahr = atoi(stringJahr.getString());

	setDatum(tempTag, tempMonat, tempJahr);
}

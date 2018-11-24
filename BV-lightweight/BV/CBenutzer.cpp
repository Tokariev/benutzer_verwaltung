#include "CBenutzer.h"
#include "CDatum.h"
#include "CString.h"
#include "CTelefonnummer.h"
#include <iostream>
using namespace std;
//CBenutzer kann einzelne variablen einlesen, oder alle auf einmal mit benutzerEingeben(), und alle seine Werte mit printString() direkt in konsole ausgeben

CBenutzer::CBenutzer()
{
}

CBenutzer::~CBenutzer()
{
}

void CBenutzer::anredeEingeben()
{
	cout << endl << "Anrede:" << endl;
	anrede.stringEingeben();
}

void CBenutzer::vornameEingeben()
{
	cout << endl << "Name:" << endl;
	name.stringEingeben();
}

void CBenutzer::nameEingeben()
{
	cout << endl << "Vorname:" << endl;
	vorname.stringEingeben();
}

void CBenutzer::geburtsdatumEingeben()
{
	cout << endl << "Geburtsdatum:" << endl;
	geburtsdatum.datumEingeben();
}

void CBenutzer::telefonnummerEingeben()
{
	cout << endl << "Telefonnummer:" << endl;
	telnr.stringEingeben();
}

void CBenutzer::kommentarEingeben()
{
	cout << endl << "Kommentar:" << endl;
	kommentar.stringEingeben();
}

void CBenutzer::benutzerEingeben() {
	cout << "Bitte Benutzerdaten eingeben:" << endl;
	anredeEingeben();
	vornameEingeben();
	nameEingeben();
	geburtsdatumEingeben();
	telefonnummerEingeben();
	kommentarEingeben();
	cout << endl;
}

void CBenutzer::printString() {
	cout << " " << anrede.getString() << " " << name.getString() << " " << vorname.getString() << " " << geburtsdatum.getDatum() << " " << telnr.getString() << " " << kommentar.getString() << " ";
}


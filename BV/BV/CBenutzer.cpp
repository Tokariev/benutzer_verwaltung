#include "CBenutzer.h"
#include "CDatum.h"
#include "CString.h"
#include "CTelefonnummer.h"
#include <iostream>
using namespace std;


CBenutzer::CBenutzer()
{
	name			= new CString();
	vorname			= new CString();
	anrede			= new CString();
	geburtsdatum	= new CDatum();
	telnr			= new CTelefonnummer();
	kommentar		= new CString();
}

void CBenutzer::setName(const char* input) {
	name->setString(input);
}

char* CBenutzer::getName() {
	return name->getString();
}

void CBenutzer::setVorname(const char* input) {
	vorname->setString(input);
}

char* CBenutzer::getVorname() {
	return vorname->getString();
}

void CBenutzer::setAnrede(const char* input) {
	anrede->setString(input);
}

char* CBenutzer::getAnrede() {
	return anrede->getString();
}

void CBenutzer::setKommentar(const char* input) {
	kommentar->setString(input);
}

char* CBenutzer::getKommentar() {
	return kommentar->getString();
}

void CBenutzer::setTelefonnummer(const char* input) {
	telnr->setString(input);
}

char* CBenutzer::setTelefonnummer() {
	return telnr->getString();
}

void CBenutzer::benutzerEingeben() {
	cout << "Bitte Benutzerdaten eingeben:" << endl;
	cout << endl << "Anrede:" << endl;
	anrede->stringEingeben();
	cout << endl << "Name:" << endl;
	name->stringEingeben();
	cout << endl << "Vorname:" << endl;
	vorname->stringEingeben();	
	cout << endl << "Geburtsdatum:" << endl;
	geburtsdatum->datumEingeben();
	cout << endl << "Telefonnummer:" << endl;
	telnr->stringEingeben();
	cout << endl << "Kommentar:" << endl;
	kommentar->stringEingeben();
	cout << endl;
}

void CBenutzer::printString() {
	cout << " " << anrede->getString() << " " << name->getString() << " " << vorname->getString() << " " << geburtsdatum->getDatum() << " " << telnr->getString() << " " << kommentar->getString() << " ";
}

CBenutzer::~CBenutzer()
{
	delete name;
	delete vorname;
	delete anrede;
	delete geburtsdatum;
	delete telnr;
	delete kommentar;
}
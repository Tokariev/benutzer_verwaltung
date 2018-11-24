#pragma once
#include "CString.h"
#include "CTelefonnummer.h"
#include "CDatum.h"
//Benutzer Klasse
//hat private Variablen, die name, vorname etc speichern können und bequeme methoden zum ändern/auslesen bereitstellen
class CBenutzer
{
private:
	CString anrede;
	CString name;
	CString vorname;
	CDatum geburtsdatum;
	CTelefonnummer telnr;
	CString kommentar;
public:

	//methoden um direkt werte von der console einzulesen und in die variablen zu schreiben
	void anredeEingeben();
	void vornameEingeben();
	void nameEingeben();
	void geburtsdatumEingeben();
	void telefonnummerEingeben();
	void kommentarEingeben();

	//kann man aufrufen um direkt alle variablen des benutzers einzulesen
	void benutzerEingeben();

	//methode um alle benutzer variablen in der console auszugeben
	void printString();

	CBenutzer();
	~CBenutzer();
};


#pragma once
#include "CString.h"
#include "CTelefonnummer.h"
#include "CDatum.h"

class CBenutzer
{
private:
	CString* name;
	CString* vorname;
	CString* anrede;
	CDatum* geburtsdatum;
	CTelefonnummer* telnr;
	CString* kommentar;
public:
	char * getVorname();
	void setAnrede(const char * input);
	char * getAnrede();
	void setKommentar(const char * input);
	char * getKommentar();
	void setTelefonnummer(const char * input);
	char * setTelefonnummer();
	void benutzerEingeben();
	void printString();
	void setName(const char * a);
	char * getName();
	void setVorname(const char * input);

	CBenutzer();
	~CBenutzer();
};


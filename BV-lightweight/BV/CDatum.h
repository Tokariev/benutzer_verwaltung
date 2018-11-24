#pragma once
#include "CString.h"
class CDatum: private CString //erbt von CString, hat also automatisch alle methoden / variablen die CString auch hat, nur sind die hier von aussen (zB auf CDatum Objekten in der Benutzer.cpp) nicht sichtbar (private vererbung) , sondern nur 'intern' innerhalb der CDatum.cpp 
{
public:
	CDatum();
	~CDatum();

	const char* getDatum();
	void setDatum(CString inputDatum);

	void datumEingeben();

private:

};


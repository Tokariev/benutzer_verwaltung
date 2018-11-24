#include "CDatum.h"
#include "CString.h"
#include <iostream>
using namespace std;

CDatum::CDatum()
{
}

CDatum::~CDatum()
{
}

const char* CDatum::getDatum()
{
	return getString(); //weil CDatum von CString erbt, hat es auch die getString methode, und auch einen eigenen internen char array "string_chars"
}

void CDatum::setDatum(CString inputDatum)
{
	setString( inputDatum.getString() ); //ruft die eigene setString methode auf (die von aussen nicht sichtbar ist und sonst nicht aufgerufen werden kann, weil private vererbt, nur hier drin sichtbar), um sich selbst den im inputDatum gespeicherten char-array als datums-wert zu setzen (spart eine menge schreibarbeit)
}

void CDatum::datumEingeben() {
	CString tempDat;

	cout << "Bitte Datum eingeben (TT.MM.JJJJ):" << endl;

	tempDat.stringEingeben();

	setDatum(tempDat); //übergibt ein CString objekt an die eigene (drüber definierte) setDatum methode, und die setzt es sich dann als datums-wert
}

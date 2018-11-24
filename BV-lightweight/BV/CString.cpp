#include "CString.h"
#include <stdlib.h>
using namespace std;

/*
CString ist unter der Haube implementiert als array von 100 chars, string_chars[0] bis string_chars[99]
chars sind im prinzip zahlen die buchstaben repräsentieren (siehe http://www.asciitable.com/,

char buchstabe='a';
ist dasselbe wie
char buchstabe=97;


wenn man einfach nur 'string_chars' schreibt, ist das ein pointer(=adresse) zum aller-ersten element des char-arrays
also wenn man nur 'string_chars' schreibt ist es vom typ 'char*', ein char-pointer

'\0' ist ein spezielles char, bedeutet ende des strings
wenn irgendeine funktion einen pointer kriegt auf den anfang des char-arrays, und den ganzen string lesen will,
geht sie so lange buchstabe für buchstabe im speicher vorwärts bis sie auf '\0' trifft
falls sie kein '\0' findet, geht sie immer weiter im speicher forwärts und versucht alles als buchstaben zu interprätieren (betriebsystem unterbindet das und meldet speicherzugriff fehler)

*/




char* CString::getString() //gibt pointer auf erstes element von 'string_chars' zurück
{
	return string_chars; //string_chars ist hier automatisch adresse zum ersten element des char-arrays 
}

void CString::setString(const char* str) //kopiert ab str(= pointer/adresse auf das erste char eines char-arrays, hoffentlich ^^ ) buchstabe für buchstabe ins CString char-array
{
	//geht von 0 bis 98 den input 'str' durch (geht nur bis zum vorletzten char, damit das letzte immer '\0' bleibt)
	for (int i = 0; i < 99; i++) {
		if (str[i] != '\0') { //solang kein ende vom string gefunden
			string_chars[i] = str[i]; //übertrage buchstabe für buchstabe aus str ins CString-interne 'string_chars' char-array
		}
		else //falls aber ende gefunden, trag ende '\0' ein und hör auf zu lesen, weil man sonst ausserhalb vom 'str' landet, das gibt speicher-zugriffs-fehler
		{
			string_chars[i] = '\0'; //trag ende ein ins CString char-array und
			return;	//verlasse sofort komplett die Funktion setString
		}
	}
}

void CString::stringEingeben()
{
	char tempString[100]; //temporäres char-array, da wird eingabe drin gespeichert
	cout << "(Eingabe mit Enter bestaetigen):" << endl;
	cin.getline(tempString, sizeof(char)*100);
	//cin.getline liesst alles ein, auch leerzeichen, und hört nur bei 'Enter' auf; "cin << tempString;" würde nur bis zum ersten leerzeichen lesen und hat auch andere probleme
	//cin.getline(pointer aufs erste element des char-arrays wohin gespeichert wird (hier tempString), platz für 100 chars)

	CString::setString(tempString); //übergeb pointer aufs erste array-element der gespeicherten eingabe an die eigene setString funktion
}

CString::CString()
{
}
CString::~CString()
{
}


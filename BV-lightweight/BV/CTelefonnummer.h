#pragma once
#include "CString.h"

//Telefonnummer, vererbt public von CString, und fügt keine eigenen Methoden oder Variablen dazu, dh kann alles was ein CString kann
//im Endeffekt ist das nur ein Umbenennen von CString, aber theoretisch kann man hier Telefonnummer-spezifische Funktionalität hinzufügen

class CTelefonnummer :
	public CString
{
public:
	CTelefonnummer();
	~CTelefonnummer();
};


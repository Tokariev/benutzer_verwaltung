#pragma once
#include "CString.h"
class CDatum :
	private CString
{
public:
	CDatum();
	~CDatum();
	int getTag();
	int getMonat();
	int getJahr();
	const char* getDatum();
	void setDatum(int inputTag, int inputMonat, int inputJahr);

	void datumEingeben();

private:
	int tag;
	int monat;
	int jahr;
};


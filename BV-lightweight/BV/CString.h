#pragma once
#include <iostream>
class CString
//CString, hat einen (privaten, dh nur in der CString.cpp sichtbaren) char-array fester größe (hunder elemente, von 0 bis 99)
//und wird benutzt um das array zu verwalten, füllen, ausgeben etc
{
private:
	char string_chars[100] = {'\0'};

public:
	char* getString();
	void setString(const char * str);
	void stringEingeben();

	CString();
	~CString();
};


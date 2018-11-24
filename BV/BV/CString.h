#pragma once
#include <iostream>
class CString
{
private:
	char* string;

public:
	char* getString();
	void setString(const char * str);
	void stringEingeben();

	CString();
	~CString();
};


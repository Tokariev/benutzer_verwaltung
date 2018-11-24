#include <stdio.h>
#include "CBenutzer.h"
using namespace std;

int main()
{
	CBenutzer benutzer;
	benutzer.benutzerEingeben();
	benutzer.printString();

	int end = 0;
	while (true) {
		cout << endl << endl << "Zum Beenden 0 eingeben:" << endl;
		cin >> end;
		if (end == 0) { return 0; }
	}
	return 0;
}
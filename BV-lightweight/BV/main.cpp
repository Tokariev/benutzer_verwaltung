#include <stdio.h>
#include "CBenutzer.h"
#include <vector>
#include <Windows.h>
using namespace std;

int main();

//hilfsfunktionen hier schon deklarieren (damit man deren namen schon mal benutzen kann),
//aber weiter unten erst ausschreiben, eigentlich nur für lesbarkeit damit die int main() zuerst im code steht
void printMenu();
int nummerEingabe();

int main()
{
	int menu_auswahl = 0;
	int liste_auswahl = 0;

	vector<CBenutzer*> benutzerVector;

	cout << "Benutzerverwaltung" << endl;

	while (true) {
		
		printMenu();

		menu_auswahl=nummerEingabe();

		switch (menu_auswahl)
		{
		case 1: //1: Benutzer anlegen
			/*benutzerVector besteht aus adressen auf CBenutzer,
			und "new CBenutzer legt ein neues CBenutzer Objekt im Speicher an,
			und gibt die Adresse auf diesen speicherplatz an die push_back() methode, die es im vector speichert*/
			benutzerVector.push_back(new CBenutzer()); 
			benutzerVector.back()->benutzerEingeben(); // ruft auf dem letztem Object im Vektor (also dem gerade neu angelegtem CBenutzer) die methode auf um alle variablen per Konsolen-Eingabe zu setzen
			break;

		case 2: //Benutzerliste anzeigen
			if (benutzerVector.size() < 1) {
				cout << endl << "Noch keine Benutzer angelegt.";
				break;
			}
			cout << endl << "Benutzer:" << endl;
			for (int i = 0; i < benutzerVector.size(); i++) //geht alle CBenutzer aus dem benutzerVector durch und lässt sie sich selber ausdrucken
			{
				cout << i << ")";
				benutzerVector.at(i)->printString();
				cout << endl;
			}
			cout << endl;
			break;

		case 0: //programm ende
			return 0; //int main() gibt null aus, das ist praktisch was das ganze programm nach dem aufrufen wieder ans betriebssystem zurück gibt(sieht man in console, program exited with status '0'), und wird damit beendet
		default:
			continue;
		}
	}

	return 0;
}

void printMenu()
{
	cout << endl << endl;
	cout << "Hauptmenu:" << endl;
	cout << "----------------" << endl;
	cout << "1: Benutzer anlegen" << endl;
	cout << "2: Benutzerliste anzeigen" << endl;
	cout << endl << "0: Programm beenden" << endl;
	cout << endl << "Bitte Zahl eingeben:" << endl;
};

int nummerEingabe() {
	int eingabe = 0;
	cin >> eingabe;
	//cin hat unerwartetes verhalten wenn es zahlen einliesst: es hinterlässt ein 'Enter', und beim nächsten benutzen von cin findet es das 'Enter' und denkt es wurde auf der Tastatur gedrückt und überspringt das Einlesen
	//mit cin.get() liesst man das zurückgebliebene 'Enter' wieder raus, und cin verhält sich wieder normal 
	//leider kenn ich da keinen leichter erklärbaren weg
	cin.get(); 
	cout << "Auswahl: " << eingabe << endl;
	return eingabe;
}
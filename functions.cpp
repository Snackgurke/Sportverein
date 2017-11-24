/*
 |----------------------------------------------|
 |           Sportverein-Verwaltung             |
 |              functions.cpp                   |
 |                                              |
 |            Created on 24.11.17               |
 |----------------------------------------------|
*/
#include "functions.hpp"
using namespace std;
/*-------------------------------------------------*/
//Zeigt das Menu mit den Auswahl möglichkeiten
unsigned short show_menu(void){
    unsigned short i,ausw;
    
    //Auswahl möglichkeiten d. Menus
    string eintrag[] = {
        "Beenden",              //case 0
        "Mitglied hinzufügen",  //case 1
        "Mitglied entfernen",   //case 2
        "BlaBlaBla",            //case 3
    };
    //Anz. der Einträge ermitteln
    unsigned short num = sizeof(eintrag) / sizeof(eintrag[0]);
    //Ausgabe eines Menus
    cout << setfill('-');
    cout << setw(40) << "Menu Auswahl";
    cout << setw(29) << "-" << endl;
    cout << endl;
    cout << setfill(' ');
    for (i=0; i<num; i++){
        cout << setw(2) << "[" << i << "] " << eintrag[i] << endl;
    }
    cout << endl;
    cout << setfill('-');
    cout << setw(69) << "-" << endl;
    cout << endl;
    //Einlesen einer Auswahlmöglichkeit
    cout << "Ihre Auswahl:" << endl;
    cin >> ausw;
    
    return ausw;
}


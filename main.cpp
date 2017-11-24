/*
 |----------------------------------------------|
 |           Sportverein-Verwaltung             |
 |                  main.cpp                    |
 |                                              |
 |            Created on 24.11.17               |
 |----------------------------------------------|
*/
#include "functions.hpp"
using namespace std;

int main(){
    unsigned short auswahl=1;
    //Menu Zeigen
    //while(auswahl == 0){
    auswahl = show_menu();
    //Nach der Auswahl die entsp. Funktion aufrufen
        switch(auswahl){
            case 0: //Programm beenden
                cout << "\n Programm regulaer beendet!\n";
                return 0;
                break;
            case 1: //Mitglied Hinzufügen
                cout << "comming soon!\n";
                break;
            case 2: //Mitglied entfernen
                cout << "comming soon!\n";
                break;
            case 3: //BlablaBla
                cout << "comming soon!\n";
                break;
            default:
                cout << "\n *** falsche Eingabe" <<endl;
                break;
            break;  
    //    }
    }
    
    
return 0;
}

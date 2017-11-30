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
    /******************Benutzer ausw.**************/
    string user= login();
    
    
    /******************Menu Zeigen**************/
    unsigned short auswahl=1;
    while(auswahl != 0){
        cout<< "Bitte warten..."<<endl;
        system("sleep 3");
        system("clear");
    auswahl = show_menu();
    //Nach der Auswahl die entsp. Funktion aufrufen
        switch(auswahl){
            case 0: //Programm beenden
                system("clear");
                cout << "\n Bis zum nächsten mal.. " << user << endl; ;
                return 1;
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
            default: //Falscher Wert eingegeben
                cout << "\n *** falsche Eingabe" <<endl;
                break;
        }
    }
return 0;
}

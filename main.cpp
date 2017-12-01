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
    unsigned short auswahl=1,mi,vo;
    while(auswahl != 0){
        cout<< "Lade das Menu..."<<endl;
        system("clear");
    auswahl = show_menu();
    //Nach der Auswahl die entsp. Funktion aufrufen
        switch(auswahl){
            case 0: //Programm beenden
                system("clear");
                cout << "\n Bis zum nächsten mal.. " << user << endl << endl;
                return 1;
                break;
            case 1: //Mitglied verwalten
                cout << "Mitglieder Verwalten...!\n";
                system("clear");
                mi = show_mitgl_menu();
                case_mitgl(mi);
                break;
            case 2: //Vorstand verwalten
                cout << "Vorstand Verwalten...!\n";
                system("clear");
                vo = show_vorst_menu();
                case_vorst(vo);
                break;
            case 3: //Sonstiges Verwalten
                cout << "comming soon!\n";
                system("sleep 2");
                break;
            default: //Falscher Wert eingegeben
                cout << "\n *** falsche Eingabe" <<endl;
                break;
        }
    }
return 0;
}

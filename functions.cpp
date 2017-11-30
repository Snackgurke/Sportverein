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
        "Beenden",                  //case 0
        "Mitglieder verwalten",     //case 1
        "Vorstand verwalten",       //case 2
        "Sontiges ",                //case 3
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

/*-------------------------------------------------*/
//fragt einen Benutzer ab
unsigned short benutzer(void){
    system("clear");
    string user,pw;
    
    cout << setfill('-');
    cout << setw(40) << "Willkommen!";
    cout << setw(29) << "-" << endl;
    cout << endl;
    cout << "Bitte Loggen sie sich ein:" << endl;
    cout << "User: ";
    cin >> user;
    cout << "Passwort: ";
    cin >> pw;

    
    //admin-login
    if (user == "admin" && pw == "admin"){
        return 0;
    }
    //user-login
    if (user == "marian" && pw == "profi"){
        return 1;
    }
    //user-login
    
    if (user == "jonas" && pw == "lauch"){
        return 2;
    }
    //user-login
    if (user == "kai" && pw == "god"){
        return 3;
    }
    //falscher User
    if (user != "admin" || user != "marian" || user != "jonas" || user != "kai"){
        return 4;
    }

}

/*-------------------------------------------------*/
//loggt einen Benutzer ein
string login(void){
    string user;
    unsigned short log,i=0;
    
    log = benutzer();
    //Nach 3 versuchen beenden
    while (i < 3 && log == 4){
        cout << "\n *** Diesen User gibt es nicht!" <<endl;
        i++;
        cout << "verbleibende Versuche: " << i << "/3"<<endl;
        system("sleep 2");
        log = benutzer();
    }
    
    switch(log){
        case 0: //admin
            cout << "\nEs wird versucht sich einzugeloggen...\n";
            system ("sleep 2");
            user = "admin";
            break;
        case 1: //marian
            cout << "\nEs wird versucht sich einzugeloggen...\n";
            system ("sleep 2");
            user = "marian";
            break;
        case 2: //jonas
            cout << "\nEs wird versucht sich einzugeloggen...\n";
            system ("sleep 2");
            user = "jonas";
            break;
        case 3: //kai
            cout << "\nEs wird versucht sich einzugeloggen...\n";
            system ("sleep 2");
            user = "kai";
            break;
        default: //Falscher User eingegeben
            cout << "*** Das wird dem Admin gemeldet!\n" <<endl << "Programm wird beendet...\n\n";
            exit(0);
            break;
    }
    cout << "\nWillkommen " << user <<endl;
    return user;
}


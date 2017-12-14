#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <string.h>
#include "mitglied.h"
#include "functions.hpp"
#include "fileio.hpp"

using namespace std;


int getmembers(mitglied *members[]){
    /*  Füllt das "members" - Array mit dynamisch allozierten pointern auf die
        Mitglieder und liefert die belegte länge zurück.
        Diese muss bei später angelegten neuen Mitgliedern erhöht werden um auch
        alle wieder freizugeben. */


    int n   = sizeof(members)/sizeof(mitglied*);
    int len = 0;

    char in[512];
    const char * DELIM=";";

    unsigned short ID;

    name name_m;
    string vorname, nachname, titel;

    datum birth, entry;
    unsigned short  tag, monat, jahr;

    adresse place;
    string strasse, nummer, zusatz, ort;
    unsigned short PLZ;

    string telefon, email, sportarten;
    unsigned short punkte;

    ifstream memberfile("members.dat");

    if(memberfile.fail()){          // Pruefen auf fehler beim öffnen
        cout<<"*** Fehler: Datei \"members.dat\" nicht vorhanden oder kein"
              "lesezugriff !"<<endl;
              return -1;
    }

    memberfile.getline(in, sizeof(in));       //Headline ueberlesen

    while( !(memberfile.eof()) && len<=n){
        memberfile.getline(in, sizeof(in));                //Datensatz einlesen

        ID          =atoi(strtok(in, DELIM));   //Datensatz Aufspalten
        vorname     =strtok(NULL, DELIM);
        nachname    =strtok(NULL, DELIM);
        titel       =strtok(NULL, DELIM);
        name_m.set_name(vorname, nachname, titel);
        tag         =atoi(strtok(NULL, DELIM));
        monat       =atoi(strtok(NULL, DELIM));
        jahr        =atoi(strtok(NULL, DELIM));
        birth.set_datum(tag, monat, jahr);
        tag         =atoi(strtok(NULL, DELIM));
        monat       =atoi(strtok(NULL, DELIM));
        jahr        =atoi(strtok(NULL, DELIM));
        entry.set_datum(tag, monat, jahr);
        strasse     =strtok(NULL, DELIM);
        nummer      =strtok(NULL, DELIM);
        zusatz      =strtok(NULL, DELIM);
        PLZ         =atoi(strtok(NULL, DELIM));
        ort         =strtok(NULL, DELIM);
        place.set_adresse(strasse, nummer, zusatz, PLZ, ort);
        telefon     =strtok(NULL, DELIM);
        email       =strtok(NULL, DELIM);
        punkte      =atoi(strtok(NULL, DELIM));
        sportarten  =strtok(NULL, DELIM);

        mitglied *ptr=new mitglied(ID, name_m, birth, entry, place, telefon, email, punkte, sportarten);

        members[len]=ptr;
        len++;
    }
    memberfile.close();
    return len;
}

void writemembers(mitglied *members[], int len){
    /*  Schreibt den Array inhalt zurück auf die Datei und löscht die dynamisch
        allozierten pointer. */

    writeback(members, len);
    for(int i=0; i<len; i++){
        delete_member(members[i]);
    }
}

int writeback(mitglied *members[], int len){

    ofstream output("members.dat", ios::out | ios::app);

    if(output.fail()){
        cout<<"*** Öffnung der Datei \"members.dat\"zum schreiben nicht"
              " möglich!"<<endl;
              return 1;
    }

    output << "ID;Vorname;Nachname;Titel;Geb.Tag;Geb.Monat;Geb.Jahr;Eint.Tag;"
              "Eint.Monat;Eint.Jahr;Straße;Haus-Nr;Zusatz;PLZ;Ort;Tel.-Nr.;"
              "E-Mail;Punkte;Sportart\n"; //Headline

    for(int i=0; i<len ; i++){
        output << members[i]->output_one_line();
    }

    output.close();

    cout << len << " Zeilen auf Datei geschrieben."<< endl;

    return 0;
}

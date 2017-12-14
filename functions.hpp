/*
 |----------------------------------------------|
 |           Sportverein-Verwaltung             |
 |              functions.hpp                   |
 |                                              |
 |            Created on 24.11.17               |
 |----------------------------------------------|
*/

#ifndef functions_hpp
#define functions_hpp
/* ------------- Header Dateien -----------------*/
#include <iostream>
#include <string>
#include <iomanip>
#include "mitglied.h"
#include "fileio.hpp"
using namespace std;
/* ----------------------- Eigene Funktionen -------------------------*/
mitglied *mitglieder[10]={NULL};
int len;
/* ------------ Benutzer Funktionen --------------*/
//Benutzer auswahl
unsigned short benutzer(void);

//Benuter einloggen
string login(void);
/* ----------------- Menu Funktionen --------------*/
//Menu anzeigen
unsigned short show_menu(void);

//Mitglieder Verwalten Menu
unsigned short show_mitgl_menu(void);

//Vorstand Verwalten Menu
unsigned short show_vorst_menu(void);

/* ------------ Case Funktionen --------------*/
//Case Auswahl für Mitglieder <- Hier Mitglieder funktionen einfügen
void case_mitgl(unsigned short auswahl);

//Case Auswahl für Vorstand <- Hier Vorstands funktionen einfügen
void case_vorst(unsigned short auswahl);

//Marians Funktionen
void delete_member(mitglied *member);

void show_all_members(mitglied *mitglieder[], int len);


#endif /* functions_hpp */

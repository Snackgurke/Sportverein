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
using namespace std;
/* ----------------------- Eigene Funktionen -------------------------*/
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



#endif /* functions_hpp */

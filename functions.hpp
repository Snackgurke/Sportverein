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
/* ------------- Eigene Funktionen --------------*/
//Benutzer auswahl
unsigned short benutzer(void);

//Benuter einloggen
string login(void);

//Menu anzeigen
unsigned short show_menu(void);



#endif /* functions_hpp */

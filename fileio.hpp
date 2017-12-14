#ifndef FILEIO_HPP
#define FILEIO_HPP

/*Funktionsaufruf zum einlesen aller bestehender Mitglieder aus Datei*/
int getmebers(mitglied *members[]);

/*Funktionsaufruf zum zurückschreiben der vollstaendig bearbeiteten
  Mitgliederdaten am Programmende (delete)*/
void writemembers(mitglied *members[], int len);

/*Funktionsaufruf zum zwischenspeichern der bearbeiteten Mitgliederdaten */
int writeback(mitglied *members[], int len);


#endif // FILEIO_HPP

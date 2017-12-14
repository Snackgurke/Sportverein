#ifndef MITGLIED_H
#define MITGLIED_H
#include <iostream>
using namespace std;

class name{
    private:
        string vorname;
        string nachname;
        string titel;
    public:
        name();
        void set_name(string,string,string);
        void print_name();
        string out_name();
};

class datum{
    private:
        unsigned short tag;
        unsigned short monat;
        unsigned short jahr;
    public:
        datum();
        void set_datum(unsigned short,unsigned short,unsigned short);
        void print_datum();
        string out_datum();
};

class adresse{
    private:
        string strasse;
        string nummer;
        string zusatz;
        unsigned short postleitzahl;
        string ort;
    public:
        adresse();
        void set_adresse(string,string,string,unsigned short,string);
        void print_adresse();
        string out_adresse();
};


class mitglied{
    public:
        //konstruktor
        mitglied(unsigned int,name,datum,datum,adresse,string,string,unsigned short,string);
        //destruktor
        virtual ~mitglied();
        //Methoten
        void set_telefon(string);
        void set_mail(string);
        void add2();
        void add5();
        void add10();
        void set_sportart(string);
        int print_nummer();
        void print_name();
        void print_geburtstag();
        void print_eintritt();
        void print_adresse();
        void print_email();
        void print_telefon();
        void print_mitglied();
        void addn(unsigned int);
        string output_one_line();
    private:
        //Attribute
        unsigned int nummer;
        name name_m;
        datum geburtstag;
        datum eintritt;
        adresse adresse_m;
        string telefon;
        string email;
        unsigned short punkte = 0;
        string sportarten;
        unsigned short beitrag  = 50;
        void refresh_beitrang();
        //Methoten
};




#endif // MITGLIED_H

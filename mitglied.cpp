#include "mitglied.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


mitglied::mitglied(unsigned int nummer_k,name k_name,datum k_geburtstag,datum k_eintritt,adresse k_adresse,string k_telefon,string k_email, unsigned short k_punkte, string k_sportarten){
    
    nummer=nummer_k;
    name_m=k_name;
    geburtstag=k_geburtstag;
    eintritt=k_eintritt;
    adresse_m=k_adresse;
    telefon=k_telefon;
    email=k_email;
    punkte=k_punkte;
    sportarten=k_sportarten;
    refresh_beitrang();
}

mitglied::~mitglied(){
    //dtor
}

void mitglied::set_telefon(string neu){
    neu=telefon;
}

void mitglied::set_mail(string neu){
    neu=email;
}

void mitglied::add2(){
    punkte+=2;
    refresh_beitrang();
}

void mitglied::add5(){
    punkte+=5;
    refresh_beitrang();
}

void mitglied::add10(){
    punkte+=10;
    refresh_beitrang();
}

void mitglied::set_sportart(string s_sportart){
    sportarten=s_sportart;
}

int mitglied::print_nummer(){
    return nummer;
}

void mitglied::print_name(){
    name_m.print_name();
}

void mitglied::print_geburtstag(){
    geburtstag.print_datum();
}

void mitglied::print_eintritt(){
    eintritt.print_datum();
}

void mitglied::print_adresse(){
    adresse_m.print_adresse();
}

void mitglied::print_email(){
    cout<<email<<endl;
}

void mitglied::print_telefon(){
    cout<<telefon<<endl;
}

void mitglied::print_mitglied(){
    int nummer;
    nummer = print_nummer();
    cout<<nummer<<endl;
    print_name();
    print_geburtstag();
    print_eintritt();
    print_adresse();
    print_email();
    print_telefon();
}

void mitglied::refresh_beitrang(){
    if(punkte>=50)beitrag=45;
    if(punkte>=100)beitrag=40;
    if(punkte>=200)beitrag=30;
    if(punkte>=300)beitrag=20;
}

void mitglied::addn(unsigned int n){
    punkte+=n;
    refresh_beitrang();
}

string mitglied::output_one_line(){
    string out;
    char speicher[5];
    char speicher1[6];
    out = std::to_string(nummer)+";"+name_m.out_name()+";"+geburtstag.out_datum()+";"+eintritt.out_datum()+";"+adresse_m.out_adresse()+";"+telefon+";"+email+";"+ std::to_string(punkte)+";"+sportarten;
}/*******************/

name::name(){};

void name::set_name(string s_vorname,string s_nachname,string s_titel){
    vorname=s_vorname;
    nachname=s_nachname;
    titel=s_titel;
}

void name::print_name(){
    cout<<titel<<" "<<vorname<<" "<<nachname<<endl;
}

string name::out_name(){
    string out;
    out = titel+";"+vorname+";"+nachname;
    return out;

}

datum::datum(){};

void datum::set_datum(unsigned short s_tag,unsigned short s_monat,unsigned short s_jahr){
    tag=s_tag;
    monat=s_monat;
    jahr=s_jahr;
}

void datum::print_datum(){
    cout<<tag<<"."<<monat<<"."<<jahr<<endl;
}

string datum::out_datum(){
    string out;
    char speicher[3];
    char speicher2[3];
    char speicher3[5];
    out = to_string(tag)+";"+std::to_string(monat)+";"+to_string(jahr);
    return out;
}/*******************/

adresse::adresse(){};

void adresse::set_adresse(string s_strasse,string s_nummer,string s_zusatz,unsigned short s_post,string s_ort){
    strasse=s_strasse;
    nummer=s_nummer;
    zusatz=s_zusatz;
    postleitzahl=s_post;
    ort=s_ort;
}

void adresse::print_adresse(){
    cout<<strasse<<" "<<nummer<<zusatz<<" "<<postleitzahl<<" "<<ort<<endl;
}

string adresse::out_adresse(){
    string out;
    char speicher[6];
    out = strasse+";"+nummer+";"+zusatz+";"+std::to_string(postleitzahl)+";"+ort;
}/*******************/

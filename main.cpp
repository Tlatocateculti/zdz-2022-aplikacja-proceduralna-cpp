#include <iostream>

using namespace std;

//apliakcje do magaznowania
//osoby: imie, nazwisko, adres, kontakt  /*NIEMA ZMIENNA - IDENTYFIKATOR OSOBY */
//towary: nazwa, producent, kodtowaru
//magazyn: nazwa, adres, pojemnosc, pracownicy /*NIEMA ZMIENNA - IDENTYFIKATOR MAGAZYNU */

/* OSOBY */

bool dodaj_osobe(string*, string*, string*, string*, string*, string*, string*, string*, string*);
string pobierz_osobe(string*, string*, string*, string*, string*, string*, string*, string*, string*);
bool usun_osobe(/*??*/);
string pokaz_osoby();

/* MAGAZYNY */

bool dodaj_magazyn();
string pobierz_magazyn(/*??*/);
bool usun_magazyn(/*??*/);
string pokaz_magazyny();

/* ADRES */

bool dodaj_adres();
string pokaz_adresy();
string uzyj_adres(/*??*/);
bool usun_adres(/*??*/);

/* TOWARY */

bool dodaj_towar();
string pokaz_towar(/*??*/);
string lista_towarow(/*??*/);
bool usun_towar(/*??*/);

/* NIEPRZYPISANE */
bool dodaj_towar_magazyn(/*??*/);
bool usun_towar_magazyn(/*??*/);
string pokaz_towar_magazyn(/*??*/);

int main()
{
    string *imie,        //osoba
           *nazwisko,    //osoba
           nazwa_towar, //towar
           producent, //towar
           nazwa_magazyn, //magazyn
           *ulica,       //adres
           *miasto,      //adres
           *kod_pocztowy,//adres
           *prefiks_ulica,//osoba, magazyn
           *numer_domu, //osoba, magazyn
           *numer_lokal,//osoba, magazyn
           *email, //osoba, magazyn
           *telefon; //osoba, magazyn
     long long kod_towar, //towar
               ilosc_towaru_magazyn, //towar na magazynie
               pracownicy_magazyn; //magazyn
     double pojemnosc; //magazyn
    imie = new string[5000];

    dodaj_osobe(imie++, nazwisko, kod_pocztowy, miasto, ulica, numer_domu, numer_lokal, email, telefon);
    dodaj_osobe(imie, nazwisko, kod_pocztowy, miasto, ulica, numer_domu, numer_lokal, email, telefon);
    pobierz_osobe(imie, nazwisko, kod_pocztowy, miasto, ulica, numer_domu, numer_lokal, email, telefon);
    pobierz_osobe(--imie, nazwisko, kod_pocztowy, miasto, ulica, numer_domu, numer_lokal, email, telefon);
    return 0;
}

bool dodaj_osobe(string *imie, string *nazwisko, string *kod_pocztowy, string *miasto, string *ulica, string *numer_domu, string *numer_lokal, string *email, string *telefon) {
    cout << "Podaj imię: ";
    cin >> *imie;
   /* cout << "Podaj nazwisko: ";
    cin >> *nazwisko;
    cout << "Podaj kod pocztowy: ";
    cin >> *kod_pocztowy;
    cout << "Podaj miasto: ";
    cin >> *miasto;
    cout << "Podaj ulicę: ";
    cin >> *ulica;
    cout << "Podaj numer domu/posesji: ";
    cin >> *numer_domu;
    cout << "Podaj numer lokalu/mieszkania: ";
    cin >> *numer_lokal;
    cout << "Podaj adres e-mail: ";
    cin >> *email;
    cout << "Podaj telefon: ";
    cin >> *telefon;*/
    return true;
}

string pobierz_osobe(string *imie,
                     string *nazwisko,
                     string *kod_pocztowy,
                     string *miasto,
                     string *ulica,
                     string *numer_domu,
                     string *numer_lokal,
                     string *email,
                     string *telefon)
{
    //znaki specjalne w ciągach znakowych:
    // \" - wyświetla cudzysłów
    // \n - przechodzi z tekstem do nowej linii (SZYBSZE I EFEKTYWNIEJSZE NIŻ endl)
    // \r - powrót migającego kursora (wskaźnik obecnie edytowanej pozycji znaku)
    // \t - tabulacja (różna długość, w C++ 5 spacji)
    // \0 - znak końca ciągu znakowego (null)
    // \\ - wyświetla backslash (znak specjalny zaczynący znak specjalny)
    cout << "Imię i nazwisko:\t\t" << *imie /*<< " " << *nazwisko*/ << "\n";
    /*cout << "Adres:\t\t\t\t" << *kod_pocztowy << " " << *miasto << ", " << *ulica << " " << *numer_domu << " lok. " << *numer_lokal << "\n";
    cout << "Telefon kontaktowy:\t\t" << *email << "\n";
    cout << "Adres e-mail\t\t\t" << *telefon << "\n";*/
    return "";
}

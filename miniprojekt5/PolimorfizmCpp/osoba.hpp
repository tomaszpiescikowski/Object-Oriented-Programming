/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef OSOBA_HPP_
#define OSOBA_HPP_
#include "adres.hpp"
#include <iostream>
#include <string>

using namespace std;

class Osoba {
    private:
        string * imie;
        string * nazwisko;
        Adres * adres;    //adres jako osobna klasa
        int * rok, * miesiac, * dzien; //data urodzenia
    public:
        Osoba();    //konstruktor domyslny
        virtual ~Osoba();   //destruktor - virtual obowiazkowo, gdy tworzymy virtualną funkcję
        Osoba(const Osoba & obiekt);    //kopiujacy
        Osoba(Osoba && obiekt); //przenoszacy
        Osoba(string napis);    //konwertujacy
        void ustawImieINazwisko(string imie, string nazwisko);
        void ustawDateUrodzenia(int dzien, int miesiac, int rok);
        void ustawMiejsceZamieszkania(string kraj, string miejscowosc, string ulica, string numer);

        void odczytajImieINazwisko();
        void odczytajDateUrodzenia();
        void odczytajMiejsceZamieszkania();
        virtual void przedstaw() = 0;
        /* dopisek =0 za funkcją oznacza że jest teraz metodą
        czysto virtualną. Klasa która posiada chodziaż jedną metodę
        czysto virtualną jest z kolei klasą abstrakcyjną. Klasa taka jest
        klasą do dziedziczenia, nie ma implementacji metody oznaczonej jako
        czysto virtualna, zatem klasy pochodne muszą ją mieć. 
        
        Od teraz nie mozna tworzyć obiektów klasy Osoba w main, jest
        to zabronione dla klas abstrakcyjnych, bo nie mają implementacji
        niektórych/wszystkich metod */

};

#endif
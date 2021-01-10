/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "adres.hpp"
#include <iostream>
#include <string>

using namespace std;

Adres::Adres():     //konstruktor domyślny
    kraj(nullptr),
    miejscowosc(nullptr),
    ulica(nullptr),
    numer(nullptr)
{}

Adres::~Adres() {   //destruktor
    if(kraj != nullptr) delete kraj;
    if(miejscowosc != nullptr) delete miejscowosc;
    if(ulica != nullptr) delete ulica;
    if(numer != nullptr) delete numer;
}

Adres::Adres(const Adres & obiekt) {   //konstruktor kopiujący
    if(obiekt.kraj != nullptr) {
        //if(this->kraj != nullptr) delete this->kraj;
        this->kraj = new string(*obiekt.kraj);
    }
    else {
        //if(this->kraj != nullptr) delete this->kraj;
        this->kraj = nullptr;
    }

    if(obiekt.miejscowosc != nullptr) {
        //if(this->miejscowosc != nullptr) delete this->miejscowosc;
        this->miejscowosc = new string(*obiekt.miejscowosc);
    }
    else {
        //if(this->miejscowosc != nullptr) delete this->miejscowosc;
        this->miejscowosc = nullptr;
    }

    if(obiekt.ulica != nullptr) {
        //if(this->ulica != nullptr) delete this->ulica;
        this->ulica = new string(*obiekt.ulica);
    }
    else {
        //if(this->ulica != nullptr) delete this->ulica;
        this->ulica = nullptr;
    }

    if(obiekt.numer != nullptr) {
        //if(this->numer != nullptr) delete this->numer;
        this->numer = new string(*obiekt.numer);
    }
    else {
        //if(this->numer != nullptr) delete this->numer;
        this->numer = nullptr;
    }
}
Adres::Adres(Adres && obiekt) {     //konstruktor przenoszacy
    if(obiekt.kraj != nullptr) {
        //if(this->kraj != nullptr) delete this->kraj; 
        this->kraj = move(obiekt.kraj);
        obiekt.kraj = nullptr;
    }
    else {
        //if(this->kraj != nullptr) delete this->kraj;
        this->kraj = nullptr;
    }

    if(obiekt.miejscowosc != nullptr) {
        //if(this->miejscowosc != nullptr) delete this->miejscowosc; 
        this->miejscowosc = move(obiekt.miejscowosc);
        obiekt.miejscowosc = nullptr;
    }
    else {
        //if(this->miejscowosc != nullptr) delete this->miejscowosc;
        this->miejscowosc = nullptr;
    }

    if(obiekt.ulica != nullptr) {
        //if(this->ulica != nullptr) delete this->ulica; 
        this->ulica = move(obiekt.ulica);
        obiekt.ulica = nullptr;
    }
    else {
        //if(this->ulica != nullptr) delete this->ulica;
        this->ulica = nullptr;
    }

    if(obiekt.numer != nullptr) {
        //if(this->numer != nullptr) delete this->numer; 
        this->numer = move(obiekt.numer);
        obiekt.numer = nullptr;
    }
    else {
        //if(this->numer != nullptr) delete this->numer;
        this->numer = nullptr;
    }
}
Adres::Adres(string napis) {    //konstruktor konwertujacy
    this->kraj = new string(napis);
    this->miejscowosc = new string(napis);
    this->ulica = new string(napis);
    this->numer = new string(napis);
}


Adres::Adres(string kraj, string miejscowosc, string ulica, string numer) { //konstruktor z parametrami
    this->kraj = new string(kraj);
    this->miejscowosc = new string(miejscowosc);
    this->ulica = new string(ulica);
    this->numer = new string(numer);
}

void Adres::ustawAdres(string kraj, string miejscowosc, string ulica, string numer) {
    if (kraj == "" && miejscowosc == "" && ulica == "" && numer == "") cout << "Niekompletne dane adresowe." << endl;
    else {
        if(this->kraj != nullptr) {delete this->kraj; this->kraj = new string(kraj);}
        else this->kraj = new string(kraj);

        if(this->miejscowosc != nullptr) {delete this->miejscowosc; this->miejscowosc = new string(miejscowosc);}
        else this->miejscowosc = new string(miejscowosc);

        if(this->ulica != nullptr) {delete this->ulica; this->ulica = new string(ulica);}
        else this->ulica = new string(ulica);

        if(this->numer != nullptr) {delete this->numer; this->numer = new string(numer);}
        else this->numer = new string(numer);
    }
}

void Adres::odczytajAdres() {
    if (this->kraj == nullptr || this->miejscowosc == nullptr || this->ulica == nullptr || this->numer == nullptr)cout << "Nie ustawiono wszystkich danych adresowych." << endl;
    else cout << "Adres: " << *kraj << ", " << *miejscowosc << ", " << *ulica << " " << *numer << endl;
     
}

/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "stoper.hpp"
#include <iostream>
#include <ctime>
using namespace std;


Stoper::Stoper(): 
    czas(0),
    poczatek(0),
    koniec(0)
{
    //cout << "Konstruktor stopera" << endl;
}

void Stoper::start() {
    poczatek = clock();
}

void Stoper::stop() {
    koniec = clock();
    czas += int(koniec - poczatek) / CLOCKS_PER_SEC;
}

void Stoper::reset() {
    poczatek = 0;
    koniec = 0;
    czas = 0;
}

void Stoper::sumarycznie() {
    cout << "Sumaryczna ilosc czasu: " << czas << endl;
}
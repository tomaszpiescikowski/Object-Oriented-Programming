/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef PRACOWNIK_HPP_
#define PRACOWNIK_HPP_
#include "osoba.hpp"
#include <vector>
#include <string>
using namespace std;

class Pracownik: public Osoba {
    private:
        vector<string> listaPrzedmiotow;
    public:
        Pracownik();
        void ustawProwadzonyPrzedmiot(string przedmiot);
        void usunProwadzonyPrzedmiot(string przedmiot);
        void sprawdzCzyProwadziPrzedmiot(string przedmiot);
        void przedstaw();

};

#endif

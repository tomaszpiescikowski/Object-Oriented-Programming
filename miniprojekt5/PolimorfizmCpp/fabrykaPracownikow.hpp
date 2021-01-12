/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef FABRYKAPRACOWNIKOW_HPP_
#define FABRYKAPRACOWNIKOW_HPP_
#include "pracownik.hpp"
#include "fabrykaOsob.hpp"

class FabrykaPracownikow: public FabrykaOsob {
        Pracownik * wsk;
    public:
        FabrykaPracownikow();
        ~FabrykaPracownikow();
        Pracownik * utworz();
};

#endif
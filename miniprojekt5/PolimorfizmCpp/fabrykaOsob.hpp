/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef FABRYKAOSOB_HPP_
#define FABRYKAOSOB_HPP_
#include "osoba.hpp"

class FabrykaOsob {
        
    public:
        FabrykaOsob();
        virtual ~FabrykaOsob();
        virtual Osoba * utworz() = 0;
};

#endif
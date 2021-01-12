/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef STOPER_HPP_
#define STOPER_HPP_
#include <iostream>
#include <ctime>

class Stoper {
        clock_t poczatek, koniec;
        int czas;
    public:
        Stoper();
        void start();
        void stop();
        void reset();
        void sumarycznie();
};

#endif
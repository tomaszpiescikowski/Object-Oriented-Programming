/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef LOGGER_HPP_
#define LOGGER_HPP_
#include <string>
#include <iostream>
using namespace std;

class Logger {
        static bool debug;
    public:
        Logger(bool temp=debug);
        void log(string napis);
};

#endif
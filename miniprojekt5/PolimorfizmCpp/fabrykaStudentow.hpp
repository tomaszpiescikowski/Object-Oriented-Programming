/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef FABRYKASTUDENTOW_HPP_
#define FABRYKASTUDENTOW_HPP_
#include "student.hpp"
#include "osoba.hpp"
#include "fabrykaOsob.hpp"

class FabrykaStudentow: public FabrykaOsob {
        Student * osobaWsk3;
    public:
        FabrykaStudentow();
        ~FabrykaStudentow();
        Student * utworz();
};

#endif
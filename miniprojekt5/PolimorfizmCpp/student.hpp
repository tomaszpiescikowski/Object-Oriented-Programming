/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef STUDENT_HPP_
#define STUDENT_HPP_
#include "osoba.hpp"

class Student: public Osoba {
    private:
        double * listaOcen;
    public:
        Student();  //konstruktor domyślny
        ~Student(); //konstruktor kopiujący
        Student(const Student & obiekt); //konstruktor kopiujący
        Student(Student && obiekt); //konstruktor przenoszący
        Student(string napis);  //konstruktor konwertujący
        void ustawOcene(int przedmiot, double ocena);
        void odczytajOcene(int przedmiot);
        void odczytajWszystkieOceny();
        void przedstaw();
};

#endif
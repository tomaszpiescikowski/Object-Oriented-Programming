/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef SAMOCHOD_HPP_
#define SAMOCHOD_HPP_
#include <string>
using namespace std;

class Samochod {
    private:
        float pojemnoscBaku;
        float poziomPaliwa;
        unsigned int liczbaKilometrow;
        string model;
    public:
        Samochod();
        Samochod(string model, float pojemnoscBaku);
        void wyswietlDane();
        void dodajPrzebieg(unsigned int liczbaKilometrow);
        float odczytajPojemnoscBaku() const;    //funkcja obiecuje ze nic nie zmieni w obiekcie

        operator bool () const;
        bool operator!() const;

        friend ostream & operator<<(ostream &os, const Samochod & samochod);
        /* funkcja ta bedzie korzystac z prywatnych pól klasy samochód, dlatego musi być zaprzyjaźniona */

        bool operator<(const Samochod &samochod) const;
        /* const za funkcją obiecuje że obiekt na ktorym wywoływana jest metoda nie bedzie edytowany */

        Samochod operator++(int number);//postinkrementacja
        Samochod & operator++();//preinkrementacja

        Samochod & operator,(const Samochod &car);

        Samochod & operator|=(const Samochod &car);
};


#endif
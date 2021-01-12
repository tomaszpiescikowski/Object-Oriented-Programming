<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef ADRES_HPP_
#define ADRES_HPP_
#include <iostream>
#include <string>

using namespace std;

class Adres {
    private:
        string * kraj;
        string * miejscowosc;
        string * ulica;
        string * numer;
    public:
        Adres();
        ~Adres();
        Adres(const Adres & obiekt);
        Adres(Adres && obiekt);
        Adres(string napis);
        Adres(string kraj, string miejscowosc, string ulica, string numer);
        void ustawAdres(string kraj, string miejscowosc, string ulica, string numer);
        void odczytajAdres();

};

=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef ADRES_HPP_
#define ADRES_HPP_
#include <iostream>
#include <string>

using namespace std;

class Adres {
    private:
        string * kraj;
        string * miejscowosc;
        string * ulica;
        string * numer;
    public:
        Adres();
        ~Adres();
        Adres(const Adres & obiekt);
        Adres(Adres && obiekt);
        Adres(string napis);
        Adres(string kraj, string miejscowosc, string ulica, string numer);
        void ustawAdres(string kraj, string miejscowosc, string ulica, string numer);
        void odczytajAdres();

};

>>>>>>> dodany miniprojekt7 i java
#endif
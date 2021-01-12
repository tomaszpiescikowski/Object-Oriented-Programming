<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/

#include "radaNadzorcza.hpp"
#include <iostream>

using namespace std;


int main() {

    RadaNadzorcza rada(12, 30245.0, 2020, 29, 12);
    //int czlonkowie,double budzet, int poczatkowyRok, int poczatkowyMiesiac, int poczatkowyDzien
    
    rada.wyswietl();
    cout << endl;

    rada.dodajBudzet(1200.30);
    rada.odczytajBudzet();
    cout << endl;

    rada.dodajCzlonkow(23);
    rada.odczytajCzlonkow();
    cout << endl;

    rada.dodajUchwaly(4);
    rada.odczytajUchwaly();
    rada.usrednijUchwaly();
    rada.dodajUchwaly(2);
    cout << endl;

    rada.wyswietl();
    cout << endl;

    rada.usunBudzet(500.20);
    rada.usunCzlonkow(5);
    rada.odczytajDate();
    rada.wyswietl();
    cout << endl;

    rada.planujDate(2021, 10, 12);
    rada.wyswietl();
    cout << endl;
    
    rada.dodajBudzet(22110.0);
    rada.dodajCzlonkow(12);
    rada.dodajUchwaly(45);
    rada.odczytajUchwaly();
    rada.usunBudzet(500.0);
    rada.usrednijUchwaly();
    cout << endl;




    
    return 0;
=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/

#include "radaNadzorcza.hpp"
#include <iostream>

using namespace std;


int main() {

    RadaNadzorcza rada(12, 30245.0, 2020, 29, 12);
    //int czlonkowie,double budzet, int poczatkowyRok, int poczatkowyMiesiac, int poczatkowyDzien
    
    rada.wyswietl();
    cout << endl;

    rada.dodajBudzet(1200.30);
    rada.odczytajBudzet();
    cout << endl;

    rada.dodajCzlonkow(23);
    rada.odczytajCzlonkow();
    cout << endl;

    rada.dodajUchwaly(4);
    rada.odczytajUchwaly();
    rada.usrednijUchwaly();
    rada.dodajUchwaly(2);
    cout << endl;

    rada.wyswietl();
    cout << endl;

    rada.usunBudzet(500.20);
    rada.usunCzlonkow(5);
    rada.odczytajDate();
    rada.wyswietl();
    cout << endl;

    rada.planujDate(2021, 10, 12);
    rada.wyswietl();
    cout << endl;
    
    rada.dodajBudzet(22110.0);
    rada.dodajCzlonkow(12);
    rada.dodajUchwaly(45);
    rada.odczytajUchwaly();
    rada.usunBudzet(500.0);
    rada.usrednijUchwaly();
    cout << endl;




    
    return 0;
>>>>>>> dodany miniprojekt7 i java
}
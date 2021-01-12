<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/

#include "radaNadzorcza.hpp"
#include "logger.hpp"
#include "stoper.hpp"
#include <iostream>

using namespace std;
void foo(RadaNadzorcza obiekt);
void bar(const RadaNadzorcza & obiekt);
void baz(RadaNadzorcza & obiekt);
void qux(RadaNadzorcza && obiekt);

int main() {
    //int czlonkowie,double budzet, int poczatkowyRok, int poczatkowyMiesiac, int poczatkowyDzien

    // RadaNadzorcza rada;
    //konstruktor domyślny

    // RadaNadzorcza skopiowany1(rada);
    // RadaNadzorcza skopiowany2 = rada;
    //konstruktor kopiujący 
    //drugi jest z przeciążeniem =
    
    // RadaNadzorcza przenoszony1(move(RadaNadzorcza(12, 3500.0, 2010, 12, 30)));
    // RadaNadzorcza przenoszony2 = move(przenoszony1);
    //konstruktor przenoszący
    //drugi jest z przeciążeniem =

    // rada.wyswietl();
    // cout << endl;

    // rada.dodajBudzet(1200.30);
    // rada.odczytajBudzet();
    // cout << endl;

    // rada.dodajCzlonkow(23);
    // rada.odczytajCzlonkow();
    // cout << endl;

    // rada.dodajUchwaly(4);
    // rada.odczytajUchwaly();
    // rada.usrednijUchwaly();
    // rada.dodajUchwaly(2);
    // cout << endl;

    // rada.wyswietl();
    // cout << endl;

    // rada.usunBudzet(500.20);
    // rada.usunCzlonkow(5);
    // rada.odczytajDate();
    // rada.wyswietl();
    // cout << endl;

    // rada.planujDate(2021, 10, 12);
    // rada.wyswietl();
    // cout << endl;
    
    // rada.dodajBudzet(22110.0);
    // rada.dodajCzlonkow(12);
    // rada.dodajUchwaly(45);
    // rada.odczytajUchwaly();
    // rada.usunBudzet(500.0);
    // rada.usrednijUchwaly();
    // cout << endl;

    // RadaNadzorcza test1;
    // test1.dodajBudzet(2000.21);
    // test1.dodajCzlonkow(12);
    // test1.dodajUchwaly(89);
    // test1.planujDate(2021, 1, 3);
    // test1.dodajBudzet(23030.21);
    // test1.dodajCzlonkow(2);
    // test1.dodajUchwaly(9);
    
    // foo(test1);

    // RadaNadzorcza hello(move(test1));
    // hello.wyswietl();

    // foo(12);

    // bar(11);
    /* bar rowniez uzywa konstruktora konwertujacego, jednak z tym obiektem nic nie zrobimy bo const */
    // bar(RadaNadzorcza(12, 3500.0, 2010, 12, 30));
    //bar(test1);
    
    /*Ponizej blad, bo wartość początkowa odwołania do wartości niebędącej stałą musi być l-wartością*/
    ////baz(11);
    /* do baz mozemy przekazac tylko utworzony wczesniej obiekt, l-wartosc */
    ////baz(RadaNadzorcza(12, 3500.0, 2010, 12, 30));
    //baz(test1);

    //qux(11);
    /* qux rowniez uzywa konstruktora konwertujacego, z obiektem mozna cos robic w przeciwienstwie to bar*/
    //qux(RadaNadzorcza(12, 3500.0, 2010, 12, 30));
    /*Nie mozna mu przekazac do utworzonego wczesniej obiektu bo odwołanie do r-wartości nie może być powiązane z l-wartością*/
    ////qux(test1);

    // Logger czas1;
    // czas1.log("Testowy napis.");

    // RadaNadzorcza czas2;
    // czas2.log("Hello world");
    /*Tak, z poziomu main moge wywolac metode log, ktora odziedziczona jest przez klase
    pochodna Radanadzorcza z klasy bazowej Logger, trzeba odziedziczyc ja publicznie */

    
    // Logger(false);
    // RadaNadzorcza test3;
    // test3.dodajBudzet(2000.21);
    // test3.dodajCzlonkow(12);
    // test3.dodajUchwaly(89);
    // test3.planujDate(2021, 1, 3);
    // test3.dodajBudzet(23030.21);
    // test3.dodajCzlonkow(2);
    // test3.dodajUchwaly(9);

    /* Po wielu probach udalo mi sie osiagnac ustawianie debugowania poprzez
    konstruktor loggera za pomoca zmiennej statycznej, ktora domyslnie jest rowna false,
    ale przy wywolaniu kolnych konstruktorow Loggera mozna je zmieniac */

    // Logger(true);
    // RadaNadzorcza test4;
    // test4.dodajBudzet(2000.21);
    // test4.dodajCzlonkow(12);
    // test4.dodajUchwaly(89);
    // test4.planujDate(2021, 1, 3);
    // test4.dodajBudzet(23030.21);
    // test4.dodajCzlonkow(2);
    // test4.dodajUchwaly(9);
    
    // RadaNadzorcza stoper;
    // for(int i=0; i<100000; i++) {
    //     stoper.dodajBudzet(2.21);
    //     stoper.dodajCzlonkow(1);
    //     stoper.dodajUchwaly(1);
    //     stoper.planujDate(2021, 1, 3);
    //     stoper.dodajBudzet(2.21);
    //     stoper.dodajCzlonkow(2);
    //     stoper.dodajUchwaly(2);
        
    // }
    // stoper.sumarycznie();

    return 0;
}




=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/

#include "radaNadzorcza.hpp"
#include "logger.hpp"
#include "stoper.hpp"
#include <iostream>

using namespace std;
void foo(RadaNadzorcza obiekt);
void bar(const RadaNadzorcza & obiekt);
void baz(RadaNadzorcza & obiekt);
void qux(RadaNadzorcza && obiekt);

int main() {
    //int czlonkowie,double budzet, int poczatkowyRok, int poczatkowyMiesiac, int poczatkowyDzien

    // RadaNadzorcza rada;
    //konstruktor domyślny

    // RadaNadzorcza skopiowany1(rada);
    // RadaNadzorcza skopiowany2 = rada;
    //konstruktor kopiujący 
    //drugi jest z przeciążeniem =
    
    // RadaNadzorcza przenoszony1(move(RadaNadzorcza(12, 3500.0, 2010, 12, 30)));
    // RadaNadzorcza przenoszony2 = move(przenoszony1);
    //konstruktor przenoszący
    //drugi jest z przeciążeniem =

    // rada.wyswietl();
    // cout << endl;

    // rada.dodajBudzet(1200.30);
    // rada.odczytajBudzet();
    // cout << endl;

    // rada.dodajCzlonkow(23);
    // rada.odczytajCzlonkow();
    // cout << endl;

    // rada.dodajUchwaly(4);
    // rada.odczytajUchwaly();
    // rada.usrednijUchwaly();
    // rada.dodajUchwaly(2);
    // cout << endl;

    // rada.wyswietl();
    // cout << endl;

    // rada.usunBudzet(500.20);
    // rada.usunCzlonkow(5);
    // rada.odczytajDate();
    // rada.wyswietl();
    // cout << endl;

    // rada.planujDate(2021, 10, 12);
    // rada.wyswietl();
    // cout << endl;
    
    // rada.dodajBudzet(22110.0);
    // rada.dodajCzlonkow(12);
    // rada.dodajUchwaly(45);
    // rada.odczytajUchwaly();
    // rada.usunBudzet(500.0);
    // rada.usrednijUchwaly();
    // cout << endl;

    // RadaNadzorcza test1;
    // test1.dodajBudzet(2000.21);
    // test1.dodajCzlonkow(12);
    // test1.dodajUchwaly(89);
    // test1.planujDate(2021, 1, 3);
    // test1.dodajBudzet(23030.21);
    // test1.dodajCzlonkow(2);
    // test1.dodajUchwaly(9);
    
    // foo(test1);

    // RadaNadzorcza hello(move(test1));
    // hello.wyswietl();

    // foo(12);

    // bar(11);
    /* bar rowniez uzywa konstruktora konwertujacego, jednak z tym obiektem nic nie zrobimy bo const */
    // bar(RadaNadzorcza(12, 3500.0, 2010, 12, 30));
    //bar(test1);
    
    /*Ponizej blad, bo wartość początkowa odwołania do wartości niebędącej stałą musi być l-wartością*/
    ////baz(11);
    /* do baz mozemy przekazac tylko utworzony wczesniej obiekt, l-wartosc */
    ////baz(RadaNadzorcza(12, 3500.0, 2010, 12, 30));
    //baz(test1);

    //qux(11);
    /* qux rowniez uzywa konstruktora konwertujacego, z obiektem mozna cos robic w przeciwienstwie to bar*/
    //qux(RadaNadzorcza(12, 3500.0, 2010, 12, 30));
    /*Nie mozna mu przekazac do utworzonego wczesniej obiektu bo odwołanie do r-wartości nie może być powiązane z l-wartością*/
    ////qux(test1);

    // Logger czas1;
    // czas1.log("Testowy napis.");

    // RadaNadzorcza czas2;
    // czas2.log("Hello world");
    /*Tak, z poziomu main moge wywolac metode log, ktora odziedziczona jest przez klase
    pochodna Radanadzorcza z klasy bazowej Logger, trzeba odziedziczyc ja publicznie */

    
    // Logger(false);
    // RadaNadzorcza test3;
    // test3.dodajBudzet(2000.21);
    // test3.dodajCzlonkow(12);
    // test3.dodajUchwaly(89);
    // test3.planujDate(2021, 1, 3);
    // test3.dodajBudzet(23030.21);
    // test3.dodajCzlonkow(2);
    // test3.dodajUchwaly(9);

    /* Po wielu probach udalo mi sie osiagnac ustawianie debugowania poprzez
    konstruktor loggera za pomoca zmiennej statycznej, ktora domyslnie jest rowna false,
    ale przy wywolaniu kolnych konstruktorow Loggera mozna je zmieniac */

    // Logger(true);
    // RadaNadzorcza test4;
    // test4.dodajBudzet(2000.21);
    // test4.dodajCzlonkow(12);
    // test4.dodajUchwaly(89);
    // test4.planujDate(2021, 1, 3);
    // test4.dodajBudzet(23030.21);
    // test4.dodajCzlonkow(2);
    // test4.dodajUchwaly(9);
    
    // RadaNadzorcza stoper;
    // for(int i=0; i<100000; i++) {
    //     stoper.dodajBudzet(2.21);
    //     stoper.dodajCzlonkow(1);
    //     stoper.dodajUchwaly(1);
    //     stoper.planujDate(2021, 1, 3);
    //     stoper.dodajBudzet(2.21);
    //     stoper.dodajCzlonkow(2);
    //     stoper.dodajUchwaly(2);
        
    // }
    // stoper.sumarycznie();

    return 0;
}




>>>>>>> dodany miniprojekt7 i java

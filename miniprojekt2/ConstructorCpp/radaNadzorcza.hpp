<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/

#ifndef RADANADZORCZA_HPP_
#define RADANADZORCZA_HPP_
#include "logger.hpp"
#include "stoper.hpp"
using namespace std;

bool sprawdzDate(int rok, int miesiac, int dzien);  //sprawdza czy data jest mozliwa

class RadaNadzorcza : public Logger, public Stoper {
  
  private:
    int * liczbaCzlonkow;

    int * liczbaUchwalAktualna;
    int * liczbaUchwalZeszloroczna;
    int * liczbaUchwalCalkowita;
    double * liczbaUchwalSrednia;

    double * aktualnyBudzet;
    
    int * rok;
    int * miesiac;
    int * dzien;
    int * liczbaLat;

  public:
    RadaNadzorcza();  //konstruktor domyślny oraz lista inicjalizacyjna, wszystko na nullptr
    ~RadaNadzorcza(); //destruktor w którym "sprzątamy" zaalokowaną pamięć
    RadaNadzorcza(    //komstruktor z parametrami, w razie potrzeby
      int czlonkowie,
      double budzet,
      int poczatkowyRok,
      int poczatkowyMiesiac,
      int poczatkowyDzien
    );
    RadaNadzorcza(int liczba); //konstruktor konwertujacy na podstawie typu int na obiekt 

    RadaNadzorcza(const RadaNadzorcza & obiekt); //konstruktor kopiujący
    RadaNadzorcza & operator=(const RadaNadzorcza & obiekt);  //przeciążenie operatora "=" dla konstruktora kopiującego
    
    RadaNadzorcza(RadaNadzorcza && obiekt); //konstruktor przenoszący
    RadaNadzorcza & operator=(RadaNadzorcza && obiekt); //przeciążenie operatora "=" dla konstruktora przenoszącego

    friend void foo(RadaNadzorcza obiekt);
    friend void bar(const RadaNadzorcza & obiekt);
    friend void baz(RadaNadzorcza & obiekt);

    void dodajCzlonkow(int liczba);   //określenia liczby członków powołanych przez walne zgromadzenie
    void usunCzlonkow(int liczba);    //określenia liczby członków odwołanych przez walne zgromadzenie (musi zostac >0)
    void odczytajCzlonkow();  //odczytania aktualnej liczby członków rady nadzorczej

    void dodajUchwaly(int liczba);
    void odczytajUchwaly();    //określenia liczby uchwał wydanych w poprzednim roku
    void usrednijUchwaly(); ///odczytania średniej liczby uchwał ze wszystkich lat działania rady

    void dodajBudzet(double liczba); //określenia wpływu do budżetu
    void usunBudzet(double liczba);  //określenia wydatków z budżetu
    void odczytajBudzet();  //odczytania aktualnego stanu budżetu

    void planujDate(int rok, int miesiac, int dzien); //określenia daty planowanego zgromadzenia rady
    void odczytajDate(); //odczytania daty ostatniego zgromadzenia

    void wyswietl();
}; 


=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/

#ifndef RADANADZORCZA_HPP_
#define RADANADZORCZA_HPP_
#include "logger.hpp"
#include "stoper.hpp"
using namespace std;

bool sprawdzDate(int rok, int miesiac, int dzien);  //sprawdza czy data jest mozliwa

class RadaNadzorcza : public Logger, public Stoper {
  
  private:
    int * liczbaCzlonkow;

    int * liczbaUchwalAktualna;
    int * liczbaUchwalZeszloroczna;
    int * liczbaUchwalCalkowita;
    double * liczbaUchwalSrednia;

    double * aktualnyBudzet;
    
    int * rok;
    int * miesiac;
    int * dzien;
    int * liczbaLat;

  public:
    RadaNadzorcza();  //konstruktor domyślny oraz lista inicjalizacyjna, wszystko na nullptr
    ~RadaNadzorcza(); //destruktor w którym "sprzątamy" zaalokowaną pamięć
    RadaNadzorcza(    //komstruktor z parametrami, w razie potrzeby
      int czlonkowie,
      double budzet,
      int poczatkowyRok,
      int poczatkowyMiesiac,
      int poczatkowyDzien
    );
    RadaNadzorcza(int liczba); //konstruktor konwertujacy na podstawie typu int na obiekt 

    RadaNadzorcza(const RadaNadzorcza & obiekt); //konstruktor kopiujący
    RadaNadzorcza & operator=(const RadaNadzorcza & obiekt);  //przeciążenie operatora "=" dla konstruktora kopiującego
    
    RadaNadzorcza(RadaNadzorcza && obiekt); //konstruktor przenoszący
    RadaNadzorcza & operator=(RadaNadzorcza && obiekt); //przeciążenie operatora "=" dla konstruktora przenoszącego

    friend void foo(RadaNadzorcza obiekt);
    friend void bar(const RadaNadzorcza & obiekt);
    friend void baz(RadaNadzorcza & obiekt);

    void dodajCzlonkow(int liczba);   //określenia liczby członków powołanych przez walne zgromadzenie
    void usunCzlonkow(int liczba);    //określenia liczby członków odwołanych przez walne zgromadzenie (musi zostac >0)
    void odczytajCzlonkow();  //odczytania aktualnej liczby członków rady nadzorczej

    void dodajUchwaly(int liczba);
    void odczytajUchwaly();    //określenia liczby uchwał wydanych w poprzednim roku
    void usrednijUchwaly(); ///odczytania średniej liczby uchwał ze wszystkich lat działania rady

    void dodajBudzet(double liczba); //określenia wpływu do budżetu
    void usunBudzet(double liczba);  //określenia wydatków z budżetu
    void odczytajBudzet();  //odczytania aktualnego stanu budżetu

    void planujDate(int rok, int miesiac, int dzien); //określenia daty planowanego zgromadzenia rady
    void odczytajDate(); //odczytania daty ostatniego zgromadzenia

    void wyswietl();
}; 


>>>>>>> dodany miniprojekt7 i java
#endif
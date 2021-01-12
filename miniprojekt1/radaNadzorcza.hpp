<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef RADANADZORCZA_HPP_
#define RADANADZORCZA_HPP_

using namespace std;

bool sprawdzDate(int rok, int miesiac, int dzien);

class RadaNadzorcza {
  
  private:
    int liczbaCzlonkow;

    int liczbaUchwalAktualna;
    int liczbaUchwalZeszloroczna;
    int liczbaUchwalCalkowita;
    int liczbaUchwalSrednia;

    double aktualnyBudzet;
    
    int rok, miesiac, dzien;
    int liczbaLat;

  public:
    RadaNadzorcza(
      int czlonkowie,
      double budzet,
      int poczatkowyRok,
      int poczatkowyMiesiac,
      int poczatkowyDzien
    );

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

using namespace std;

bool sprawdzDate(int rok, int miesiac, int dzien);

class RadaNadzorcza {
  
  private:
    int liczbaCzlonkow;

    int liczbaUchwalAktualna;
    int liczbaUchwalZeszloroczna;
    int liczbaUchwalCalkowita;
    int liczbaUchwalSrednia;

    double aktualnyBudzet;
    
    int rok, miesiac, dzien;
    int liczbaLat;

  public:
    RadaNadzorcza(
      int czlonkowie,
      double budzet,
      int poczatkowyRok,
      int poczatkowyMiesiac,
      int poczatkowyDzien
    );

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
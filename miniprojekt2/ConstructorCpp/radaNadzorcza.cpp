/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "radaNadzorcza.hpp"
#include <iostream>

using namespace std;

void foo(RadaNadzorcza obiekt);
void bar(const RadaNadzorcza & obiekt);
void baz(RadaNadzorcza & obiekt);
void qux(RadaNadzorcza && obiekt);

RadaNadzorcza::RadaNadzorcza(): //8
    liczbaCzlonkow(nullptr),
    liczbaUchwalAktualna(nullptr),
    liczbaUchwalZeszloroczna(nullptr),
    liczbaUchwalCalkowita(nullptr),
    liczbaUchwalSrednia(nullptr),
    aktualnyBudzet(nullptr),
    rok(nullptr),
    miesiac(nullptr),
    dzien(nullptr),
    liczbaLat(nullptr)
    {
        cout << "Konstruktor domyślny" << endl; 
    }

RadaNadzorcza::~RadaNadzorcza() {   //9
    cout << "Destruktor zadzial" << endl;
    if(liczbaCzlonkow != nullptr) delete liczbaCzlonkow;
    if(liczbaUchwalAktualna != nullptr) delete liczbaUchwalAktualna;
    if(liczbaUchwalZeszloroczna != nullptr) delete liczbaUchwalZeszloroczna;
    if(liczbaUchwalSrednia != nullptr) delete liczbaUchwalSrednia;
    if(liczbaUchwalCalkowita != nullptr) delete liczbaUchwalCalkowita;
    if(aktualnyBudzet != nullptr) delete aktualnyBudzet;
    if(rok != nullptr) delete rok;
    if(miesiac != nullptr) delete miesiac;
    if(dzien != nullptr) delete dzien;
    if(liczbaLat != nullptr) delete liczbaLat;
}

RadaNadzorcza::RadaNadzorcza(const RadaNadzorcza & obiekt) { //10
    cout << "Konstruktor kopiujacy" << endl; 
    if(obiekt.liczbaCzlonkow != nullptr) this->liczbaCzlonkow = new int(*obiekt.liczbaCzlonkow);
    else this->liczbaCzlonkow = nullptr;

    if(obiekt.liczbaUchwalAktualna != nullptr) this->liczbaUchwalAktualna = new int(*obiekt.liczbaUchwalAktualna);
    else this->liczbaUchwalAktualna = nullptr;

    if(obiekt.liczbaUchwalZeszloroczna != nullptr) this->liczbaUchwalZeszloroczna = new int(*obiekt.liczbaUchwalZeszloroczna);
    else this->liczbaUchwalZeszloroczna = nullptr;

    if(obiekt.liczbaUchwalCalkowita != nullptr) this->liczbaUchwalCalkowita = new int(*obiekt.liczbaUchwalCalkowita);
    else this->liczbaUchwalCalkowita = nullptr;

    if(obiekt.liczbaUchwalSrednia != nullptr) this->liczbaUchwalSrednia = new double(*obiekt.liczbaUchwalSrednia);
    else this->liczbaUchwalSrednia = nullptr;

    if(obiekt.aktualnyBudzet != nullptr) this->aktualnyBudzet = new double(*obiekt.aktualnyBudzet);
    else this->aktualnyBudzet = nullptr;

    if(obiekt.rok != nullptr) this->rok = new int(*obiekt.rok);
    else this->rok = nullptr;

    if(obiekt.miesiac != nullptr) this->miesiac = new int(*obiekt.miesiac);                                                 //02.01.2021 dodalem wszedzie "this->", wcześniej działało
    else this->miesiac = nullptr;

    if(obiekt.dzien != nullptr) this->dzien = new int(*obiekt.dzien);
    else this->dzien = nullptr;

    if(obiekt.liczbaLat != nullptr) this->liczbaLat = new int(*obiekt.liczbaLat);
    else this->liczbaLat = nullptr;
}

RadaNadzorcza& RadaNadzorcza::operator=(const RadaNadzorcza & obiekt) { //10 dla operatora =
    cout << "Konstruktor kopujacy" << endl; 
    if(this == &obiekt) return *this;
    if(obiekt.liczbaCzlonkow != nullptr) this->liczbaCzlonkow = new int(*obiekt.liczbaCzlonkow);
    else this->liczbaCzlonkow = nullptr;

    if(obiekt.liczbaUchwalAktualna != nullptr) this->liczbaUchwalAktualna = new int(*obiekt.liczbaUchwalAktualna);
    else this->liczbaUchwalAktualna = nullptr;

    if(obiekt.liczbaUchwalZeszloroczna != nullptr) this->liczbaUchwalZeszloroczna = new int(*obiekt.liczbaUchwalZeszloroczna);
    else this->liczbaUchwalZeszloroczna = nullptr;

    if(obiekt.liczbaUchwalCalkowita != nullptr) this->liczbaUchwalCalkowita = new int(*obiekt.liczbaUchwalCalkowita);
    else this->liczbaUchwalCalkowita = nullptr;

    if(obiekt.liczbaUchwalSrednia != nullptr) this->liczbaUchwalSrednia = new double(*obiekt.liczbaUchwalSrednia);
    else this->liczbaUchwalSrednia = nullptr;

    if(obiekt.aktualnyBudzet != nullptr) this->aktualnyBudzet = new double(*obiekt.aktualnyBudzet);
    else this->aktualnyBudzet = nullptr;

    if(obiekt.rok != nullptr) this->rok = new int(*obiekt.rok);
    else this->rok = nullptr;

    if(obiekt.miesiac != nullptr) this->miesiac = new int(*obiekt.miesiac);
    else this->miesiac = nullptr;

    if(obiekt.dzien != nullptr) this->dzien = new int(*obiekt.dzien);
    else this->dzien = nullptr;

    if(obiekt.liczbaLat != nullptr) this->liczbaLat = new int(*obiekt.liczbaLat);
    else this->liczbaLat = nullptr;

    return *this;
}

RadaNadzorcza::RadaNadzorcza(RadaNadzorcza && obiekt) { //11
    cout << "Konstruktor przenoszacy" << endl;     
    if(obiekt.liczbaCzlonkow != nullptr) this->liczbaCzlonkow = std::move(obiekt.liczbaCzlonkow);
    else this->liczbaCzlonkow = nullptr;

    if(obiekt.liczbaUchwalAktualna != nullptr) this->liczbaUchwalAktualna = std::move(obiekt.liczbaUchwalAktualna);
    else this->liczbaUchwalAktualna = nullptr;

    if(obiekt.liczbaUchwalZeszloroczna != nullptr) this->liczbaUchwalZeszloroczna = std::move(obiekt.liczbaUchwalZeszloroczna);
    else this->liczbaUchwalZeszloroczna = nullptr;

    if(obiekt.liczbaUchwalCalkowita != nullptr) this->liczbaUchwalCalkowita = std::move(obiekt.liczbaUchwalCalkowita);
    else this->liczbaUchwalCalkowita = nullptr;

    if(obiekt.liczbaUchwalSrednia != nullptr) this->liczbaUchwalSrednia = std::move(obiekt.liczbaUchwalSrednia);
    else this->liczbaUchwalSrednia = nullptr;

    if(obiekt.aktualnyBudzet != nullptr) this->aktualnyBudzet = std::move(obiekt.aktualnyBudzet);
    else this->aktualnyBudzet = nullptr;

    if(obiekt.rok != nullptr) this->rok = std::move(obiekt.rok);
    else this->rok = nullptr;

    if(obiekt.miesiac != nullptr) this->miesiac = std::move(obiekt.miesiac);
    else this->miesiac = nullptr;

    if(obiekt.dzien != nullptr) this->dzien = std::move(obiekt.dzien);
    else this->dzien = nullptr;

    if(obiekt.liczbaLat != nullptr) this->liczbaLat = std::move(obiekt.liczbaLat);
    else this->liczbaLat = nullptr;
}

RadaNadzorcza & RadaNadzorcza::operator=(RadaNadzorcza && obiekt) { //11 dla operatora =
    cout << "Konstruktor przenoszacy" << endl;     
    if(this == &obiekt) return *this;
    if(obiekt.liczbaCzlonkow != nullptr) this->liczbaCzlonkow = std::move(obiekt.liczbaCzlonkow);
    else this->liczbaCzlonkow = nullptr;

    if(obiekt.liczbaUchwalAktualna != nullptr) this->liczbaUchwalAktualna = std::move(obiekt.liczbaUchwalAktualna);
    else this->liczbaUchwalAktualna = nullptr;

    if(obiekt.liczbaUchwalZeszloroczna != nullptr) this->liczbaUchwalZeszloroczna = std::move(obiekt.liczbaUchwalZeszloroczna);
    else this->liczbaUchwalZeszloroczna = nullptr;

    if(obiekt.liczbaUchwalCalkowita != nullptr) this->liczbaUchwalCalkowita = std::move(obiekt.liczbaUchwalCalkowita);
    else this->liczbaUchwalCalkowita = nullptr;

    if(obiekt.liczbaUchwalSrednia != nullptr) this->liczbaUchwalSrednia = std::move(obiekt.liczbaUchwalSrednia);
    else this->liczbaUchwalSrednia = nullptr;

    if(obiekt.aktualnyBudzet != nullptr) this->aktualnyBudzet = std::move(obiekt.aktualnyBudzet);
    else this->aktualnyBudzet = nullptr;

    if(obiekt.rok != nullptr) this->rok = std::move(obiekt.rok);
    else this->rok = nullptr;

    if(obiekt.miesiac != nullptr) this->miesiac = std::move(obiekt.miesiac);
    else this->miesiac = nullptr;

    if(obiekt.dzien != nullptr) this->dzien = std::move(obiekt.dzien);
    else this->dzien = nullptr;

    if(obiekt.liczbaLat != nullptr) this->liczbaLat = std::move(obiekt.liczbaLat);
    else this->liczbaLat = nullptr;

    return *this;
}

RadaNadzorcza::RadaNadzorcza(int liczba): //12
    liczbaUchwalSrednia(new double(0.0)),
    liczbaUchwalZeszloroczna(new int(0)),
    liczbaLat(new int(0)),
    liczbaUchwalCalkowita(new int(0)),
    liczbaUchwalAktualna(new int(0))
{
    cout << "Konstruktor konwertujacy" << endl;     
    liczbaCzlonkow = new int(liczba*10);
    aktualnyBudzet = new double(liczba*2000.0);
    rok = new int(2021);
    miesiac = new int(1);
    dzien = new int(1);
}



RadaNadzorcza::RadaNadzorcza(int czlonkowie,double budzet, int poczatkowyRok, int poczatkowyMiesiac, int poczatkowyDzien): 
    liczbaUchwalSrednia(new double(0.0)),
    liczbaUchwalZeszloroczna(new int(0)),
    liczbaLat(new int(0)),
    liczbaUchwalCalkowita(new int(0)),
    liczbaUchwalAktualna(new int(0))
{
    cout << "Konstruktor z parametrami" << endl;     
    liczbaCzlonkow = new int(czlonkowie);
    aktualnyBudzet = new double(budzet);
    rok = new int(poczatkowyRok);
    miesiac = new int(poczatkowyMiesiac);
    dzien = new int(poczatkowyDzien);
}
      
void RadaNadzorcza::dodajCzlonkow(int liczba) {
    start();
    this->start();
    this->log("dodajCzlonkow");
    if(liczbaCzlonkow == nullptr) liczbaCzlonkow = new int(0);
    *liczbaCzlonkow += liczba;
    stop();
}

void RadaNadzorcza::usunCzlonkow(int liczba) {
    start();
    this->log("usunCzlonkow");
    if(liczbaCzlonkow == nullptr) liczbaCzlonkow = new int(0);
    if(*liczbaCzlonkow >= liczba) *liczbaCzlonkow -= liczba;
    else cout << "Liczba czlonkow nie moze byc ujemna." << endl;
    stop();
}
  
void RadaNadzorcza::odczytajCzlonkow() {
    start();
    this->log("odczytajCzlonkow");
    if(liczbaCzlonkow == nullptr) liczbaCzlonkow = new int(0);
    cout << "Aktualna liczba czlonkow to: " << *liczbaCzlonkow << endl;
    stop();
}
 

void RadaNadzorcza::odczytajUchwaly() {
    start();
    this->log("odczytajUchwaly");
    if(liczbaUchwalZeszloroczna == nullptr) liczbaUchwalZeszloroczna = new int(0);
    cout << "Liczba uchwal z poprzedniego roku to: " << *liczbaUchwalZeszloroczna << endl;
    stop();
}

void RadaNadzorcza::usrednijUchwaly() {
    start();
    this->log("usrednijUchwaly");
    if(liczbaUchwalSrednia == nullptr) liczbaUchwalSrednia = new double(0.0);
    if(liczbaUchwalCalkowita == nullptr) liczbaUchwalCalkowita = new int(0);
    if(liczbaLat == nullptr) liczbaLat = new int(0);
    *liczbaUchwalSrednia = *liczbaUchwalCalkowita / (*liczbaLat + 1); 
    cout << "Srednia liczba uchwal ze wszystkich lat to: " << *liczbaUchwalSrednia << endl; 
    stop();
}

void RadaNadzorcza::dodajUchwaly(int liczba) {
    start();
    this->log("dodajUchwaly");
    if(liczbaUchwalCalkowita == nullptr) liczbaUchwalCalkowita = new int(0);
    if(liczbaUchwalAktualna == nullptr) liczbaUchwalAktualna = new int(0);
    *liczbaUchwalAktualna += liczba;
    *liczbaUchwalCalkowita += liczba;
    stop();
}

void RadaNadzorcza::dodajBudzet(double liczba) {
    start();
    this->log("dodajBudzet");
    if(aktualnyBudzet == nullptr) aktualnyBudzet = new double(0.0);
    *aktualnyBudzet += liczba;
    stop();
}

void RadaNadzorcza::usunBudzet(double liczba) {
    start();
    this->log("usunBudzet");
    if(aktualnyBudzet == nullptr) aktualnyBudzet = new double(0.0);
    if(*aktualnyBudzet >=liczba) *aktualnyBudzet -= liczba;
    else cout << "Budzet nie moze byc ujemny." << endl;
    stop();
}

void RadaNadzorcza::odczytajBudzet() {
    start();
    this->log("odczytajBudzet");
    if(aktualnyBudzet == nullptr) aktualnyBudzet = new double(0.0);
    cout << "Aktualny budzet wynosi: $" << *aktualnyBudzet << endl;
    stop();
}

void RadaNadzorcza::planujDate(int xrok, int xmiesiac, int xdzien){
    start();
    this->log("planujDate");

    if (sprawdzDate(xrok, xmiesiac, xdzien))
    {
        if(rok == nullptr) rok = new int(0);
        if(miesiac == nullptr) miesiac = new int(0);
        if(dzien == nullptr) dzien = new int(0);

        if (xrok > *rok){

            if(liczbaLat == nullptr) liczbaLat = new int(0);
            if(liczbaUchwalZeszloroczna == nullptr) liczbaUchwalZeszloroczna = new int(0);
            if(liczbaUchwalAktualna == nullptr) liczbaUchwalAktualna = new int(0);

            *liczbaLat += 1;
            *liczbaUchwalZeszloroczna = *liczbaUchwalAktualna;
            *liczbaUchwalAktualna = 0;       
        }
        *rok = xrok;
        *miesiac = xmiesiac;
        *dzien = xdzien;
    }
    else cout << "Wpisana data jest niepoprawna" << endl;
    stop();
}

void RadaNadzorcza::odczytajDate() {
    start();
    this->log("odczytajDate");
    if(rok == nullptr) rok = new int(0);
    if(miesiac == nullptr) miesiac = new int(0);
    if(dzien == nullptr) dzien = new int(0);
    cout << "Data ostatniego zgromadzenia to: " << *rok << "-" << *miesiac << "-" << *dzien << endl;
    stop();
}

void RadaNadzorcza::wyswietl() {
    start();
    this->log("wyswietl");
    cout << "Rada Nadzorcza:" << endl;
    odczytajCzlonkow();
    if(liczbaUchwalAktualna == nullptr) liczbaUchwalAktualna = new int(0);
    cout << "Liczba uchwal tegorocznych: " << *liczbaUchwalAktualna << endl;
    odczytajUchwaly();
    if(liczbaUchwalCalkowita == nullptr) liczbaUchwalCalkowita = new int(0);
    cout << "Liczba uchwal ze wszystkich lat: " << *liczbaUchwalCalkowita << endl;
    usrednijUchwaly();
    odczytajBudzet();
    odczytajDate();
    stop();
}

bool sprawdzDate(int rok, int miesiac, int dzien) {

        if(miesiac == 1 || miesiac == 3 || miesiac == 5 || miesiac == 1 || miesiac == 7 || miesiac == 8 || miesiac == 10 || miesiac == 12){
            for(int d=1; d<=31; ++d){
                if (dzien == d && rok>=0) return true;
                else continue;
                }   return false;
        }
        
        else if(miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11){
            for(int d=1; d<=30; ++d){
                if (dzien == d && rok>=0) return true;
                else continue;
                }   return false;
        }
        
        else if(miesiac == 2){

            if(rok % 2 == 0){  
                for(int d=1; d<=29; ++d){
                    if (dzien == d && rok>=0) return true;
                    else continue;
                    }   return false;
            }

            if(rok % 2 != 0){ 
                for(int d=1; d<=28; ++d){
                    if (dzien == d && rok>=0) return true;
                    else continue;
                    }   return false;
            }
        }
        
        return false;   
}


void foo(RadaNadzorcza obiekt) { 
    cout << "Testowy obiekt przekonwertowany z int:" << endl;
    obiekt.wyswietl();
    
}

void bar(const RadaNadzorcza & obiekt) {
    cout << "Testowa funkcja bar" << endl; 
}

void baz(RadaNadzorcza & obiekt) {
    cout << "Testowa funkcja baz" << endl; 
    obiekt.wyswietl();
}

void qux(RadaNadzorcza && obiekt){
    cout << "Testowa funkcja qux" << endl; 
    obiekt.dodajCzlonkow(1000);
    obiekt.wyswietl();
}

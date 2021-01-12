/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "radaNadzorcza.hpp"
#include <iostream>

using namespace std;

RadaNadzorcza::RadaNadzorcza(int czlonkowie,double budzet, int poczatkowyRok, int poczatkowyMiesiac, int poczatkowyDzien): 
    liczbaUchwalSrednia(0), liczbaUchwalZeszloroczna(0), liczbaLat(0), liczbaUchwalCalkowita(0), liczbaUchwalAktualna(0)
{
    liczbaCzlonkow = czlonkowie;
    aktualnyBudzet = budzet;
    rok = poczatkowyRok;
    miesiac = poczatkowyMiesiac;
    dzien = poczatkowyDzien;
}
      
void RadaNadzorcza::dodajCzlonkow(int liczba) {
    liczbaCzlonkow += liczba;
}

void RadaNadzorcza::usunCzlonkow(int liczba) {
    if(liczbaCzlonkow >= liczba) liczbaCzlonkow -= liczba;
    else cout << "Liczba czlonkow nie moze byc ujemna." << endl;
}
  
void RadaNadzorcza::odczytajCzlonkow() {
    cout << "Aktualna liczba czlonkow to: " << liczbaCzlonkow << endl;
}
 

void RadaNadzorcza::odczytajUchwaly() {
    cout << "Liczba uchwal z poprzedniego roku to: " << liczbaUchwalZeszloroczna << endl;
}

void RadaNadzorcza::usrednijUchwaly() {
    liczbaUchwalSrednia = liczbaUchwalCalkowita / (liczbaLat + 1); 
    cout << "Srednia liczba uchwal ze wszystkich lat to: " << liczbaUchwalSrednia << endl; 
}

void RadaNadzorcza::dodajUchwaly(int liczba) {
    liczbaUchwalAktualna += liczba;
    liczbaUchwalCalkowita += liczba;
}

void RadaNadzorcza::dodajBudzet(double liczba) {
    aktualnyBudzet += liczba;
}

void RadaNadzorcza::usunBudzet(double liczba) {
    if(aktualnyBudzet >=liczba) aktualnyBudzet -= liczba;
    else cout << "Budzet nie moze byc ujemny." << endl;
}

void RadaNadzorcza::odczytajBudzet() {
    cout << "Aktualny budzet wynosi: $" << aktualnyBudzet << endl;
}

void RadaNadzorcza::planujDate(int xrok, int xmiesiac, int xdzien){
    
     if (sprawdzDate(xrok, xmiesiac, xdzien))
     {
          if (xrok > rok){
               liczbaLat += 1;
               liczbaUchwalZeszloroczna = liczbaUchwalAktualna;
               liczbaUchwalAktualna = 0;       
          }
          rok = xrok;
          miesiac = xmiesiac;
          dzien = xdzien;
     }
     else cout << "Wpisana data jest niepoprawna" << endl;
}

void RadaNadzorcza::odczytajDate() {
    cout << "Data ostatniego zgromadzenia to: " << rok << "-" << miesiac << "-" << dzien << endl;
}

void RadaNadzorcza::wyswietl() {
    cout << "Rada Nadzorcza:" << endl;
    odczytajCzlonkow();
    cout << "Liczba uchwal tegorocznych: " << liczbaUchwalAktualna << endl;
    odczytajUchwaly();
    cout << "Liczba uchwal ze wszystkich lat: " << liczbaUchwalCalkowita << endl;
    usrednijUchwaly();
    odczytajBudzet();
    odczytajDate();
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
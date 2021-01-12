<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "pracownik.hpp"
#include "fabrykaPracownikow.hpp"
#include <iostream>
using namespace std;

FabrykaPracownikow::FabrykaPracownikow():
    wsk(new Pracownik)     
{}

FabrykaPracownikow::~FabrykaPracownikow() {
    delete wsk;
}

Pracownik * FabrykaPracownikow::utworz() {
    delete wsk;
    Pracownik * wsk = new Pracownik();
    wsk->ustawDateUrodzenia(6,12,1930);
    wsk->ustawImieINazwisko("Teofil", "Barkowski");
    wsk->ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Jasielska", "122s/41");  
    wsk->ustawProwadzonyPrzedmiot("Geografia");
    wsk->ustawProwadzonyPrzedmiot("Przyroda");
    wsk->ustawProwadzonyPrzedmiot("Biologia");
    return wsk;

=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "pracownik.hpp"
#include "fabrykaPracownikow.hpp"
#include <iostream>
using namespace std;

FabrykaPracownikow::FabrykaPracownikow():
    wsk(new Pracownik)     
{}

FabrykaPracownikow::~FabrykaPracownikow() {
    delete wsk;
}

Pracownik * FabrykaPracownikow::utworz() {
    delete wsk;
    Pracownik * wsk = new Pracownik();
    wsk->ustawDateUrodzenia(6,12,1930);
    wsk->ustawImieINazwisko("Teofil", "Barkowski");
    wsk->ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Jasielska", "122s/41");  
    wsk->ustawProwadzonyPrzedmiot("Geografia");
    wsk->ustawProwadzonyPrzedmiot("Przyroda");
    wsk->ustawProwadzonyPrzedmiot("Biologia");
    return wsk;

>>>>>>> dodany miniprojekt7 i java
}
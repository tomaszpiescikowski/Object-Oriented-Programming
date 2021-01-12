<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "samochod.hpp"
#include <iostream>
#include <string>
using namespace std;

Samochod::Samochod() {
    pojemnoscBaku = 0.0;
    poziomPaliwa = 0.0;
    liczbaKilometrow = 0.0;
    model = "";
}

Samochod::Samochod(string model, float pojemnoscBaku) {
    this->model = model;
    this->pojemnoscBaku = pojemnoscBaku;
    poziomPaliwa = 0.0;
    liczbaKilometrow = 0.0;
}

void Samochod::wyswietlDane() {
    cout << "Model: " << model << endl;
    cout << "Przebieg: " << liczbaKilometrow << endl;
    cout << "Poziom paliwa: " << poziomPaliwa << endl;
    cout << "Pojemnosc baku: " << pojemnoscBaku << endl;
    cout << endl;
}

void Samochod::dodajPrzebieg(unsigned int liczbaKilometrow) {
    this->liczbaKilometrow += liczbaKilometrow;
}

Samochod::operator bool () const {
    if(model != "" && pojemnoscBaku > 0.0) return true;
    else return false;
}

bool Samochod::operator!() const {
    if(model != "" && pojemnoscBaku > 0.0) return true;
    else return false;
}
ostream & operator<<(ostream &os, const Samochod & samochod) {
    os << samochod.model << " " << samochod.poziomPaliwa << endl;
    return os;
}

bool Samochod::operator<(const Samochod &samochod) const {
    return this->model < samochod.model;
}
float Samochod::odczytajPojemnoscBaku() const{
    return pojemnoscBaku; 
}

Samochod Samochod::operator++(int) { //postinkrementacja
    Samochod kopia = (*this);
    liczbaKilometrow += 1000;
    poziomPaliwa += 2;
    return kopia;
}

Samochod & Samochod::operator++() { //preinkrementacja
    liczbaKilometrow += 1000;
    poziomPaliwa += 2;
    return *this;
}

Samochod & Samochod::operator,(const Samochod &car) {
    this->model = car.model;
    return *this;
}

 Samochod & Samochod::operator|=(const Samochod &car) {
    this->liczbaKilometrow = car.liczbaKilometrow;
    this->pojemnoscBaku = car.pojemnoscBaku;
    this->poziomPaliwa = car.poziomPaliwa;
    return *this;
=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "samochod.hpp"
#include <iostream>
#include <string>
using namespace std;

Samochod::Samochod() {
    pojemnoscBaku = 0.0;
    poziomPaliwa = 0.0;
    liczbaKilometrow = 0.0;
    model = "";
}

Samochod::Samochod(string model, float pojemnoscBaku) {
    this->model = model;
    this->pojemnoscBaku = pojemnoscBaku;
    poziomPaliwa = 0.0;
    liczbaKilometrow = 0.0;
}

void Samochod::wyswietlDane() {
    cout << "Model: " << model << endl;
    cout << "Przebieg: " << liczbaKilometrow << endl;
    cout << "Poziom paliwa: " << poziomPaliwa << endl;
    cout << "Pojemnosc baku: " << pojemnoscBaku << endl;
    cout << endl;
}

void Samochod::dodajPrzebieg(unsigned int liczbaKilometrow) {
    this->liczbaKilometrow += liczbaKilometrow;
}

Samochod::operator bool () const {
    if(model != "" && pojemnoscBaku > 0.0) return true;
    else return false;
}

bool Samochod::operator!() const {
    if(model != "" && pojemnoscBaku > 0.0) return true;
    else return false;
}
ostream & operator<<(ostream &os, const Samochod & samochod) {
    os << samochod.model << " " << samochod.poziomPaliwa << endl;
    return os;
}

bool Samochod::operator<(const Samochod &samochod) const {
    return this->model < samochod.model;
}
float Samochod::odczytajPojemnoscBaku() const{
    return pojemnoscBaku; 
}

Samochod Samochod::operator++(int) { //postinkrementacja
    Samochod kopia = (*this);
    liczbaKilometrow += 1000;
    poziomPaliwa += 2;
    return kopia;
}

Samochod & Samochod::operator++() { //preinkrementacja
    liczbaKilometrow += 1000;
    poziomPaliwa += 2;
    return *this;
}

Samochod & Samochod::operator,(const Samochod &car) {
    this->model = car.model;
    return *this;
}

 Samochod & Samochod::operator|=(const Samochod &car) {
    this->liczbaKilometrow = car.liczbaKilometrow;
    this->pojemnoscBaku = car.pojemnoscBaku;
    this->poziomPaliwa = car.poziomPaliwa;
    return *this;
>>>>>>> dodany miniprojekt7 i java
 }
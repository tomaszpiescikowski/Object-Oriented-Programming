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
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

struct cmp {
    bool operator() (const Samochod &a, const Samochod &b) const {
        return a.odczytajPojemnoscBaku() < b.odczytajPojemnoscBaku();
    }
};

int main() {

    Samochod auto1("Audi", 12345);
    Samochod auto2("Peuegot", 23);
    Samochod auto3("Mercedes", 130345);
    Samochod test;

    if(auto1) {
        cout << "Operator bool() auto1: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator bool() auto1: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

      if(auto2) {
        cout << "Operator bool() auto2: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator bool() auto2: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

    if(test) {
        cout << "Operator bool() test: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator bool() test: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }
    
    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////
    if(!auto1) {
        cout << "Operator ! auto1: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator ! auto1: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

    if(!auto2) {
        cout << "Operator ! auto2: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator ! auto2: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

    if(!test) {
        cout << "Operator ! test: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator ! test: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////
    
    cout << "std::cout wypisuje model samochodu oraz poziom paliwa: " << endl;
    cout << auto1;
    cout << auto2;
    cout << auto3;

    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////
    
    vector<Samochod> lista;
    lista.push_back(auto1);
    lista.push_back(auto2);
    lista.push_back(auto3);

    sort(lista.begin(), lista.end());
    cout << "Uporzadkowanie alfabetyczne: " << endl;
    for (auto it = lista.begin(); it != lista.end(); ++it)
    {
        cout << *it;
    }
    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////

    set <Samochod, cmp> s;
    s.insert(auto1);
    s.insert(auto2);
    s.insert(auto3);

    cout << "Od najmniejszej pojemnosci baku: " << endl;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it;
    }

    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////

    Samochod nowe1("Scoda", 55);
    nowe1.wyswietlDane();
    cout << endl;
    nowe1++;
    nowe1.wyswietlDane();

    
    Samochod nowe2("Ferrari", 84);
    Samochod nowe3("Bentley", 55);

    nowe2, nowe3;
    cout << endl;   
    nowe2.wyswietlDane();
    nowe3.wyswietlDane();

    Samochod nowe4("Maseratti", 76);
    Samochod nowe5("BMW", 45);
    nowe5.dodajPrzebieg(13421);

    nowe4 |= nowe5;

    nowe5.wyswietlDane();
    nowe4.wyswietlDane();




    return 0;
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
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

struct cmp {
    bool operator() (const Samochod &a, const Samochod &b) const {
        return a.odczytajPojemnoscBaku() < b.odczytajPojemnoscBaku();
    }
};

int main() {

    Samochod auto1("Audi", 12345);
    Samochod auto2("Peuegot", 23);
    Samochod auto3("Mercedes", 130345);
    Samochod test;

    if(auto1) {
        cout << "Operator bool() auto1: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator bool() auto1: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

      if(auto2) {
        cout << "Operator bool() auto2: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator bool() auto2: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

    if(test) {
        cout << "Operator bool() test: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator bool() test: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }
    
    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////
    if(!auto1) {
        cout << "Operator ! auto1: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator ! auto1: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

    if(!auto2) {
        cout << "Operator ! auto2: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator ! auto2: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

    if(!test) {
        cout << "Operator ! test: " << endl;
        cout << "Model nie jest pustym stringiem a pojemność baku jest większa od 0" << endl;
    }
    else {
        cout << "Operator ! test: " << endl;
        cout << "Model jest pustym stringiem lub pojemność baku jest mniejsza od 0" << endl;
    }

    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////
    
    cout << "std::cout wypisuje model samochodu oraz poziom paliwa: " << endl;
    cout << auto1;
    cout << auto2;
    cout << auto3;

    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////
    
    vector<Samochod> lista;
    lista.push_back(auto1);
    lista.push_back(auto2);
    lista.push_back(auto3);

    sort(lista.begin(), lista.end());
    cout << "Uporzadkowanie alfabetyczne: " << endl;
    for (auto it = lista.begin(); it != lista.end(); ++it)
    {
        cout << *it;
    }
    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////

    set <Samochod, cmp> s;
    s.insert(auto1);
    s.insert(auto2);
    s.insert(auto3);

    cout << "Od najmniejszej pojemnosci baku: " << endl;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it;
    }

    ////////////////////////////////////////////////////////////////////////////////////////
                cout << endl << endl;
    ////////////////////////////////////////////////////////////////////////////////////////

    Samochod nowe1("Scoda", 55);
    nowe1.wyswietlDane();
    cout << endl;
    nowe1++;
    nowe1.wyswietlDane();

    
    Samochod nowe2("Ferrari", 84);
    Samochod nowe3("Bentley", 55);

    nowe2, nowe3;
    cout << endl;   
    nowe2.wyswietlDane();
    nowe3.wyswietlDane();

    Samochod nowe4("Maseratti", 76);
    Samochod nowe5("BMW", 45);
    nowe5.dodajPrzebieg(13421);

    nowe4 |= nowe5;

    nowe5.wyswietlDane();
    nowe4.wyswietlDane();




    return 0;
>>>>>>> dodany miniprojekt7 i java
}
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "pracownik.hpp"
#include "osoba.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Pracownik::Pracownik() {
    listaPrzedmiotow = {};  //uznałem że nie ma sensu wprowadzać tu zamieszania z nullptr
}

void Pracownik::ustawProwadzonyPrzedmiot(string przedmiot) {
    listaPrzedmiotow.push_back(przedmiot);
}

void Pracownik::usunProwadzonyPrzedmiot(string przedmiot) {
    int index = -1;
    for(int i=0; i<listaPrzedmiotow.size(); i++) {
        if(listaPrzedmiotow[i] == przedmiot) {
            index = i;
            break;
        }
    }
    if(index == -1) cout << "Nie ma takiego przedmiotu do usuniecia" << endl << endl;
    else listaPrzedmiotow.erase(listaPrzedmiotow.begin()+index);
}

void Pracownik::sprawdzCzyProwadziPrzedmiot(string przedmiot) {
    int index = -1;
    for(int i=0; i<listaPrzedmiotow.size(); i++) {
        if(listaPrzedmiotow[i] == przedmiot) {
            index = i;
            break;
        }
    }
    if(index == -1) cout << "Nie prowadzi takiego przedmiotu: " << przedmiot << endl;
    else cout << "Prowadzi przedmiot: " << przedmiot << endl;
}

void Pracownik::przedstaw() {
    cout << endl;
    //Osoba::przedstaw();
    odczytajImieINazwisko();
    odczytajDateUrodzenia();
    odczytajMiejsceZamieszkania();
    cout << "Prowadzone przedmioty: ";
    for(int i=0; i<listaPrzedmiotow.size(); i++) {
        cout << listaPrzedmiotow[i] << " ";
    }
    cout << endl;
}


<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "student.hpp"
#include "osoba.hpp"
#include <iostream>
#include <string>

using namespace std;

enum przedmiot { matematyka, fizyka, informatyka, wf, logika };

Student::Student():
    listaOcen(nullptr)
{}

Student::~Student() {
    if(listaOcen != nullptr) delete [] listaOcen;
}

Student::Student(const Student & obiekt): Osoba::Osoba(obiekt) { //konstruktor kopiujący
    if(obiekt.listaOcen != nullptr) {
        if(this->listaOcen != nullptr) delete [] this->listaOcen;
        this->listaOcen = new double[5];
        for (int i = 0; i < 5; i++) this->listaOcen[i] = obiekt.listaOcen[i];        
    }
    else if(this->listaOcen != nullptr) {
        delete [] this->listaOcen;
        this->listaOcen = nullptr;
    }
}
   
Student::Student(Student && obiekt): Osoba::Osoba(move(obiekt)) { //konstruktor przenoszący
    if(obiekt.listaOcen != nullptr) {
        this->listaOcen = move(obiekt.listaOcen); 
        obiekt.listaOcen = nullptr;       
    }
    else this->listaOcen = nullptr;
}

Student::Student(string napis){  //konstruktor konwertujący
    //to samo co dla osoby
}

void Student::ustawOcene(int przedmiot, double ocena) {
    if( ocena >= 1 && ocena <= 5 ) {
        if(listaOcen != nullptr) listaOcen[przedmiot] = ocena;
        else {
            listaOcen = new double[5];
            listaOcen[przedmiot] = ocena;
        }
    }
    else cout << "Niepoprawna ocena. Wprowadz ocene z zakresu 1-5" << endl << endl;   
}
void Student::odczytajOcene(int przedmiot) {
    if(listaOcen != nullptr){
        if (przedmiot == matematyka) cout << "Ocena z matematyki to: " << listaOcen[przedmiot] << endl;
        else if (przedmiot == fizyka) cout << "Ocena z fizyki to: " << listaOcen[przedmiot] << endl;
        else if (przedmiot == informatyka) cout << "Ocena z informatyki to: " << listaOcen[przedmiot] << endl;
        else if (przedmiot == wf) cout << "Ocena z wf to: " << listaOcen[przedmiot] << endl;
        else if (przedmiot == logika) cout << "Ocena z logiki to: " << listaOcen[przedmiot] << endl;
    }
    else cout << "Nie wpisano jeszcze zadnej oceny." << endl;
}
void Student::odczytajWszystkieOceny() {
    if(listaOcen != nullptr){
        cout << "Lista ocen:" << endl;
        cout << "Ocena z matematyki to: " << listaOcen[matematyka] << endl;
        cout << "Ocena z fizyki to: " << listaOcen[fizyka] << endl;
        cout << "Ocena z informatyki to: " << listaOcen[informatyka] << endl;
        cout << "Ocena z wf to: " << listaOcen[wf] << endl;
        cout << "Ocena z logiki to: " << listaOcen[logika] << endl;
    }
    else cout << "Nie wpisano jeszcze zadnej oceny." << endl;
}

void Student::przedstaw() {
    cout << endl;
    odczytajImieINazwisko();
    odczytajDateUrodzenia();
    odczytajMiejsceZamieszkania();
    //Osoba::przedstaw();
    odczytajWszystkieOceny();
    cout << endl;
=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "student.hpp"
#include "osoba.hpp"
#include <iostream>
#include <string>

using namespace std;

enum przedmiot { matematyka, fizyka, informatyka, wf, logika };

Student::Student():
    listaOcen(nullptr)
{}

Student::~Student() {
    if(listaOcen != nullptr) delete [] listaOcen;
}

Student::Student(const Student & obiekt): Osoba::Osoba(obiekt) { //konstruktor kopiujący
    if(obiekt.listaOcen != nullptr) {
        if(this->listaOcen != nullptr) delete [] this->listaOcen;
        this->listaOcen = new double[5];
        for (int i = 0; i < 5; i++) this->listaOcen[i] = obiekt.listaOcen[i];        
    }
    else if(this->listaOcen != nullptr) {
        delete [] this->listaOcen;
        this->listaOcen = nullptr;
    }
}
   
Student::Student(Student && obiekt): Osoba::Osoba(move(obiekt)) { //konstruktor przenoszący
    if(obiekt.listaOcen != nullptr) {
        this->listaOcen = move(obiekt.listaOcen); 
        obiekt.listaOcen = nullptr;       
    }
    else this->listaOcen = nullptr;
}

Student::Student(string napis){  //konstruktor konwertujący
    //to samo co dla osoby
}

void Student::ustawOcene(int przedmiot, double ocena) {
    if( ocena >= 1 && ocena <= 5 ) {
        if(listaOcen != nullptr) listaOcen[przedmiot] = ocena;
        else {
            listaOcen = new double[5];
            listaOcen[przedmiot] = ocena;
        }
    }
    else cout << "Niepoprawna ocena. Wprowadz ocene z zakresu 1-5" << endl << endl;   
}
void Student::odczytajOcene(int przedmiot) {
    if(listaOcen != nullptr){
        if (przedmiot == matematyka) cout << "Ocena z matematyki to: " << listaOcen[przedmiot] << endl;
        else if (przedmiot == fizyka) cout << "Ocena z fizyki to: " << listaOcen[przedmiot] << endl;
        else if (przedmiot == informatyka) cout << "Ocena z informatyki to: " << listaOcen[przedmiot] << endl;
        else if (przedmiot == wf) cout << "Ocena z wf to: " << listaOcen[przedmiot] << endl;
        else if (przedmiot == logika) cout << "Ocena z logiki to: " << listaOcen[przedmiot] << endl;
    }
    else cout << "Nie wpisano jeszcze zadnej oceny." << endl;
}
void Student::odczytajWszystkieOceny() {
    if(listaOcen != nullptr){
        cout << "Lista ocen:" << endl;
        cout << "Ocena z matematyki to: " << listaOcen[matematyka] << endl;
        cout << "Ocena z fizyki to: " << listaOcen[fizyka] << endl;
        cout << "Ocena z informatyki to: " << listaOcen[informatyka] << endl;
        cout << "Ocena z wf to: " << listaOcen[wf] << endl;
        cout << "Ocena z logiki to: " << listaOcen[logika] << endl;
    }
    else cout << "Nie wpisano jeszcze zadnej oceny." << endl;
}

void Student::przedstaw() {
    cout << endl;
    odczytajImieINazwisko();
    odczytajDateUrodzenia();
    odczytajMiejsceZamieszkania();
    //Osoba::przedstaw();
    odczytajWszystkieOceny();
    cout << endl;
>>>>>>> dodany miniprojekt7 i java
}
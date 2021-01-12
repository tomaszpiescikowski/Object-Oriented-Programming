<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "student.hpp"
#include "fabrykaStudentow.hpp"
#include "fabrykaOsob.hpp"
#include <iostream>
using namespace std;

enum przedmiot { matematyka, fizyka, informatyka, wf, logika };

FabrykaStudentow::FabrykaStudentow():
    osobaWsk3(new Student)
{}

FabrykaStudentow::~FabrykaStudentow() {
    delete osobaWsk3;
}

Student * FabrykaStudentow::utworz() {
    delete osobaWsk3;
    osobaWsk3 = new Student();
    osobaWsk3->ustawDateUrodzenia(16,1,2000);
    osobaWsk3->ustawImieINazwisko("Jan", "Kowalski");
    osobaWsk3->ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Kwiatowa", "12a/4");
    osobaWsk3->ustawOcene(matematyka, 4.5);
    osobaWsk3->ustawOcene(fizyka, 2.5);
    osobaWsk3->ustawOcene(informatyka, 4.0);
    osobaWsk3->ustawOcene(wf, 5.0);
    osobaWsk3->ustawOcene(logika, 3.0);
    return osobaWsk3;
=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "student.hpp"
#include "fabrykaStudentow.hpp"
#include "fabrykaOsob.hpp"
#include <iostream>
using namespace std;

enum przedmiot { matematyka, fizyka, informatyka, wf, logika };

FabrykaStudentow::FabrykaStudentow():
    osobaWsk3(new Student)
{}

FabrykaStudentow::~FabrykaStudentow() {
    delete osobaWsk3;
}

Student * FabrykaStudentow::utworz() {
    delete osobaWsk3;
    osobaWsk3 = new Student();
    osobaWsk3->ustawDateUrodzenia(16,1,2000);
    osobaWsk3->ustawImieINazwisko("Jan", "Kowalski");
    osobaWsk3->ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Kwiatowa", "12a/4");
    osobaWsk3->ustawOcene(matematyka, 4.5);
    osobaWsk3->ustawOcene(fizyka, 2.5);
    osobaWsk3->ustawOcene(informatyka, 4.0);
    osobaWsk3->ustawOcene(wf, 5.0);
    osobaWsk3->ustawOcene(logika, 3.0);
    return osobaWsk3;
>>>>>>> dodany miniprojekt7 i java
}
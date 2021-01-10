/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include <string>
#include <iostream>
using namespace std;

class StackException: public exception {
    public:
        StackException() {}
        virtual const char * what() const noexcept override {
            return "Bledna operacja na stosie!";
        }
};

/* noexcept użyte po to, aby funkcja nie wydala "thow". */

class StackFullException: public StackException {
    int element = 0;
    int maxStackSize = 0;
    string message;
  public:
    StackFullException() {}
    StackFullException(string p, int e, int s) {
     
    }
    virtual const char * what() const noexcept override {
        return "Stos przepełniony. Nie można dodać elementu";
    }
};

class StackEmptyException: public StackException {
    string message;
  public:
    StackEmptyException() {}
    StackEmptyException(string p) {

    }
    virtual const char * what() const noexcept override {
        return "Stos pusty. Nie można zdjąć elementu.";
    }
};


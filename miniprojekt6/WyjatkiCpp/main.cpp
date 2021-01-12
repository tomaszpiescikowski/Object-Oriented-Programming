/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "stack.hpp"
#include "wyjatki.hpp"

void foo(Stack &s) {
    try {
        int i = 0;
        while (true) s.push(i++);
    } catch(StackException e) {
        cout << e.what() << endl;
    }
}
void bar(Stack &s) {
    try {
        int i = 0;
        while (true) s.push(i++);
    } catch(StackException &e) {
        cout << e.what() << endl;
    }
}


int main() {

    // Stack stos1;
    // foo(stos1);

    // Stack stos2;
    // bar(stos2);

    /* Funkcja bar łapie referencje do klasy StackExceprion
    a funkcja foo tworzy nowy obiekt. Funkcja foo pokazuje error
    z klasy bazowej, a funkcja bar z właściwej klasy pochodnej.
    Mając referencje, funkcja może się odnieść klas bazowych i 
    zadecydowac o returnie funkcji what() */

    // Stack stos(10); //stos o rozmiarze 15
    // try
    // {
    //     for(int i=1; i<=5; i++) 
    //     stos.push(i);
    //     for(int i=1; i<=10; i++) 
    //     stos.pop();
    // }   
    // catch(StackFullException full)
    // {
    //     cout << full.what() << endl;
    // }
    // catch(StackEmptyException empty)
    // {
    //     cout << empty.what() << endl;
    // }

    return 0;
}
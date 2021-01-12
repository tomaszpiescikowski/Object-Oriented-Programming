<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "stack.hpp"
#include "wyjatki.hpp"
#include <iostream>
using namespace std;

Stack::Stack() {    //konstruktor domyślny
    maxStackSize = 10;    //domyślny rozmiar stosu to 10    
    dfs = {};   //pusty vector
    top = -1;    //brak elementów na szczycie stosu
}

Stack::Stack(int rozmiar) { 
    dfs = {};
    top = -1;
    maxStackSize = rozmiar; //konstruktor z parametrem ustalającym wielkość stosu
}

void Stack::push(int newItem) {     //"wsadź" liczbę na stos
    if(++top < maxStackSize) {
        dfs.push_back(newItem);
        cout << "Na stos wstawiono element[" << top << "] o wartości: " << newItem << endl;
    }
    else { //wyjątek pełnego stosu
        top--;
        StackFullException full;
        throw full;
    }
}

int Stack::pop() {  //"zdejmij" liczbę ze stosu
    if(top >= 0 ) {
        int temp;
        temp = dfs.back();
        dfs.pop_back();
        cout << "Ze stosu zdjęto element[" << top-- << "] o wartości:" << temp << endl;
        return temp;
    }
    else {  //wyjątek pustego stosu
        top++;
        StackEmptyException empty;
        throw empty;
    }
}
=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "stack.hpp"
#include "wyjatki.hpp"
#include <iostream>
using namespace std;

Stack::Stack() {    //konstruktor domyślny
    maxStackSize = 10;    //domyślny rozmiar stosu to 10    
    dfs = {};   //pusty vector
    top = -1;    //brak elementów na szczycie stosu
}

Stack::Stack(int rozmiar) { 
    dfs = {};
    top = -1;
    maxStackSize = rozmiar; //konstruktor z parametrem ustalającym wielkość stosu
}

void Stack::push(int newItem) {     //"wsadź" liczbę na stos
    if(++top < maxStackSize) {
        dfs.push_back(newItem);
        cout << "Na stos wstawiono element[" << top << "] o wartości: " << newItem << endl;
    }
    else { //wyjątek pełnego stosu
        top--;
        StackFullException full;
        throw full;
    }
}

int Stack::pop() {  //"zdejmij" liczbę ze stosu
    if(top >= 0 ) {
        int temp;
        temp = dfs.back();
        dfs.pop_back();
        cout << "Ze stosu zdjęto element[" << top-- << "] o wartości:" << temp << endl;
        return temp;
    }
    else {  //wyjątek pustego stosu
        top++;
        StackEmptyException empty;
        throw empty;
    }
}
>>>>>>> dodany miniprojekt7 i java

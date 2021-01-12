<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef STACK_HPP_
#define STACK_HPP
#include <vector>
using namespace std;

class Stack {
    private:
        int maxStackSize;
        vector<int> dfs;
        int top;
    public:
        Stack();
        Stack(int max);
        void push(int newItem);
        int pop();
};

=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef STACK_HPP_
#define STACK_HPP
#include <vector>
using namespace std;

class Stack {
    private:
        int maxStackSize;
        vector<int> dfs;
        int top;
    public:
        Stack();
        Stack(int max);
        void push(int newItem);
        int pop();
};

>>>>>>> dodany miniprojekt7 i java
#endif
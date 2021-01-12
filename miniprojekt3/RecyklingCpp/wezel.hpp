<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef WEZEL_HPP_
#define WEZEL_HPP_
#include <iostream>
#include <memory>
using namespace std;

class Wezel {
    public:
        //shared_ptr<Wezel> next;   
        weak_ptr<Wezel> next;       //rozwiazanie problemu nieusuwanych obiektow
        ~Wezel();
};

=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#ifndef WEZEL_HPP_
#define WEZEL_HPP_
#include <iostream>
#include <memory>
using namespace std;

class Wezel {
    public:
        //shared_ptr<Wezel> next;   
        weak_ptr<Wezel> next;       //rozwiazanie problemu nieusuwanych obiektow
        ~Wezel();
};

>>>>>>> dodany miniprojekt7 i java
#endif
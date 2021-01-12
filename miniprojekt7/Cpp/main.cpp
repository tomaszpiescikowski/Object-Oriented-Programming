/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class X {
    T x;
  public:
    X() {}
    X(T _x) { this->x = _x; }
    T getX() const { return x; }
    friend ostream & operator<<(ostream & os, X const & x) {
        os << x.x;
        return os;
    }  
};

template <typename T>
bool operator>( X<T> const & a, X<T> const & b) {
    return a.getX() > b.getX();
}

template <>
bool operator>( X<string> const & a, X<string> const & b) {
    return a.getX().size() > b.getX().size();
}

template<typename T>
    T maximum(T const & a, T const & b) {
        return a > b ? a : b;
    }

template <typename T, typename C = X<T> >
class Y {
    T zmienna;
    C klasaX;
};

template<typename T>
class A {
    typename T::id i;
  public:
    void f() { i.g(); }
};

class B {
  public:
    class id {
      public:
        void g() {}
    };
};

auto maxLambda = [](auto a, auto b) { return a > b ? a : b; };

int main() {

    // cout << maximum(6, 7) << endl;
    // cout << maximum(6.3, 7.3) << endl;
    //cout << maximum(6.5, 7) << endl;
    // cout << maximum<double>(4, 5) << endl;
    // cout << maximum<double>(4.1, 5.7) << endl;
    // cout << maximum<int>(4.6, 3) << endl;
    // cout << maximum<double>(4.6, 3) << endl;
    // cout << maximum<bool>(4.6, 3) << endl;
    //cout << maximum<string>(4.6, 3) << endl;
    

    /* Niektóre wywołania powodują błąd kompilacji ze względu na ich błędny typ.
    Jeśli nie podamy typu template'a to argumenty funkcji maximum() powinny być
    tego samego typu, ze względu na budowę naszego szablonu. Jeśli podamy
    w ostrych nawiasach typ przekazywanych do szablonu danych, to parametry 
    zostana przekonwertowane na ten typ jak i również wynik, bo tak zostało
    ustalone w moim szablonie. Podanie stringa do szablonu z parametrami typu
    liczbowego to błąd konwersji. */

    
    cout << maximum(X<int>(4), X<int>(3)) << endl;
    cout << maximum(X<double>(41.31), X<double>(311.2)) << endl;

    cout << maximum(X<string>("aaa"), X<string>("bb")) << endl;

    Y<int> y;
    Y<int, double> y2;

    A<B> ab;
    ab.f();

    bool b = maxLambda(3, 3.14);
    auto c = maxLambda(3, 3.14);

    cout << b << endl << c << endl;

    return 0;
}
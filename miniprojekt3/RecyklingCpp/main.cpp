<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include <memory>
#include "wezel.hpp"
#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

    for (int i = 0; i < 10; i++)
    {   
        unique_ptr<Wezel> uniq(new Wezel());
        //cout << &uniq << endl;
    }
    /* Unikalny wkaźnik na obiekt, który nie może zostać skopiowany. Pamięć oraz wskaźnik zostają zwolnione na końcu nawiasu klamrowego */

            cout << endl << endl << endl;

    for (int i = 0; i < 10; i++)
    {
        shared_ptr<Wezel> w1 = make_shared<Wezel>();
        //cout << &w1 << endl;
    }
    /* Wskaźnik pamięci współdzielonej tworzy obiekt, a pamięć zostaje zwolniona kiedy licznik referencji do niej będzie równy 0 */

    /* Uruchomienie kodu z shared_ptr zamiast unique_ptr w przypadku
    powyższej pętli nic takiego nie zmieniło, ponieważ nie ma tu żadnego kopiowania
    ani przepisywania, a obydwa wskazniki koncza życie po wyjściu
    z nawiasow klamrowych co wypisuje destruktor na standardowym wyjściu.
    Mala różnica polega na tym, ze shared_ptr ma 2 razy 
    wiekszy rozmiar od unique_ptr, ponieważ musi on oprocz pamieci na obiekt
    zaalokowac blok kontrolny, składający się na:
        -licznik referencji, czyli licznik wskaźników wskazujących na współdzielony obszar
        -metodę custom deleter, która służy do ustawienia czynności podczas usuwania obszaru    
    Ponizej wypisuję różnicę w zajmowanej pamięci: */

                cout << endl << endl << endl;

    unique_ptr<Wezel> rozmiar_uniq(new Wezel());
    shared_ptr<Wezel> rozmiar_shared = make_shared<Wezel>();

    cout << "Size of Unique_ptr: " << sizeof(rozmiar_uniq) << endl;
    cout << "Size od Shared_ptr: " << sizeof(rozmiar_shared) << endl;

                cout << endl << endl << endl;

    for (int i = 0; i < 10; i++)
    {
        shared_ptr<Wezel> w1 = make_shared<Wezel> ();//2 obszary w1 i w2
        shared_ptr<Wezel> w2 = make_shared<Wezel> ();
        w1->next = w2;
        w2->next = w1;
        
        cout << "W1 expired: " << w1->next.expired() << endl;
        cout << "W2 expired: " << w2->next.expired() << endl;

        cout << "W1 count: " << w1->next.use_count() << endl;
        cout << "W2 count: " << w2->next.use_count() << endl;
        
    }
    /* Powyższy program nie zwalnia pamięci tak jak należy, brak wywołań destruktora,
    który zasygnalizowałby to na standardowym wyjściu.
    
    Problem rozwiązałem poprzez zmianę wskaźnika w klasie na weak_ptr. Charakteryzuje się on tym,
    że posiada informacje o przekazanej do niego referencji, którą może przekazać dalej, ale
    sam nie może jej użyć. Co ważniejsze, nie zwiększa on licznika referencji w bloku kontrolnym
    wskaźnika pamięci współdzielonej. Dzięki temu, w powyższej pętli po osiągnięciu zamykającego
    nawiasu klamrowego, licznik referencji w bloku kontrolnym osiągnie 0 po usunięciu w1 i w2, a 
    za tym idzie zwolnienie pamięci, w tym przypadku naszego obiektu. Przed rozwiązaniem problemu, 
    licznik ten wynosił 1 ponieważ w utworzonych obiektach znajdował się wskaźnik shared_ptr, który
    zwiększał licznik referencji w bloku kontrolnym. Przez to bloki pamięci nie były usuwane ze sterty,
    a pętla przechodziła do kolejnych iteracji.

    Dodałem również komunikaty na standardowe wyjście używając metod dostępnych w weak_ptr.
     */

    return 0;
=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include <memory>
#include "wezel.hpp"
#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

    for (int i = 0; i < 10; i++)
    {   
        unique_ptr<Wezel> uniq(new Wezel());
        //cout << &uniq << endl;
    }
    /* Unikalny wkaźnik na obiekt, który nie może zostać skopiowany. Pamięć oraz wskaźnik zostają zwolnione na końcu nawiasu klamrowego */

            cout << endl << endl << endl;

    for (int i = 0; i < 10; i++)
    {
        shared_ptr<Wezel> w1 = make_shared<Wezel>();
        //cout << &w1 << endl;
    }
    /* Wskaźnik pamięci współdzielonej tworzy obiekt, a pamięć zostaje zwolniona kiedy licznik referencji do niej będzie równy 0 */

    /* Uruchomienie kodu z shared_ptr zamiast unique_ptr w przypadku
    powyższej pętli nic takiego nie zmieniło, ponieważ nie ma tu żadnego kopiowania
    ani przepisywania, a obydwa wskazniki koncza życie po wyjściu
    z nawiasow klamrowych co wypisuje destruktor na standardowym wyjściu.
    Mala różnica polega na tym, ze shared_ptr ma 2 razy 
    wiekszy rozmiar od unique_ptr, ponieważ musi on oprocz pamieci na obiekt
    zaalokowac blok kontrolny, składający się na:
        -licznik referencji, czyli licznik wskaźników wskazujących na współdzielony obszar
        -metodę custom deleter, która służy do ustawienia czynności podczas usuwania obszaru    
    Ponizej wypisuję różnicę w zajmowanej pamięci: */

                cout << endl << endl << endl;

    unique_ptr<Wezel> rozmiar_uniq(new Wezel());
    shared_ptr<Wezel> rozmiar_shared = make_shared<Wezel>();

    cout << "Size of Unique_ptr: " << sizeof(rozmiar_uniq) << endl;
    cout << "Size od Shared_ptr: " << sizeof(rozmiar_shared) << endl;

                cout << endl << endl << endl;

    for (int i = 0; i < 10; i++)
    {
        shared_ptr<Wezel> w1 = make_shared<Wezel> ();//2 obszary w1 i w2
        shared_ptr<Wezel> w2 = make_shared<Wezel> ();
        w1->next = w2;
        w2->next = w1;
        
        cout << "W1 expired: " << w1->next.expired() << endl;
        cout << "W2 expired: " << w2->next.expired() << endl;

        cout << "W1 count: " << w1->next.use_count() << endl;
        cout << "W2 count: " << w2->next.use_count() << endl;
        
    }
    /* Powyższy program nie zwalnia pamięci tak jak należy, brak wywołań destruktora,
    który zasygnalizowałby to na standardowym wyjściu.
    
    Problem rozwiązałem poprzez zmianę wskaźnika w klasie na weak_ptr. Charakteryzuje się on tym,
    że posiada informacje o przekazanej do niego referencji, którą może przekazać dalej, ale
    sam nie może jej użyć. Co ważniejsze, nie zwiększa on licznika referencji w bloku kontrolnym
    wskaźnika pamięci współdzielonej. Dzięki temu, w powyższej pętli po osiągnięciu zamykającego
    nawiasu klamrowego, licznik referencji w bloku kontrolnym osiągnie 0 po usunięciu w1 i w2, a 
    za tym idzie zwolnienie pamięci, w tym przypadku naszego obiektu. Przed rozwiązaniem problemu, 
    licznik ten wynosił 1 ponieważ w utworzonych obiektach znajdował się wskaźnik shared_ptr, który
    zwiększał licznik referencji w bloku kontrolnym. Przez to bloki pamięci nie były usuwane ze sterty,
    a pętla przechodziła do kolejnych iteracji.

    Dodałem również komunikaty na standardowe wyjście używając metod dostępnych w weak_ptr.
     */

    return 0;
>>>>>>> dodany miniprojekt7 i java
}
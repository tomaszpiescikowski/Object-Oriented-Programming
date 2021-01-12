<<<<<<< HEAD
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "osoba.hpp"
#include "student.hpp"
#include "pracownik.hpp"
#include "fabrykaOsob.hpp"
#include "fabrykaStudentow.hpp"
#include "fabrykaPracownikow.hpp"
#include <iostream>
#include <string>
#include <memory>
#include <map>
using namespace std;

void przedstawOsobeWsk(Osoba *osoba);
void przedstawOsobeRef(Osoba &osoba);

int main() {

    enum przedmiot { matematyka, fizyka, informatyka, wf, logika };

    // Osoba osoba;
    // osoba.ustawDateUrodzenia(4,5,1998);
    // osoba.ustawImieINazwisko("Barbara", "Barbińska");
    // osoba.ustawMiejsceZamieszkania("Polska", "Katowice", "os. Malinowe", "5b/78");
    // osoba.odczytajDateUrodzenia();
    // osoba.odczytajImieINazwisko();
    // osoba.odczytajMiejsceZamieszkania();
     
    // Student student;
    // student.ustawDateUrodzenia(16,1,2000);
    // student.ustawImieINazwisko("Jan", "Kowalski");
    // student.ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Kwiatowa", "12a/4");
    // student.ustawOcene(matematyka, 4.5);
    // student.ustawOcene(fizyka, 2.5);
    // student.ustawOcene(informatyka, 4.0);
    // student.ustawOcene(wf, 5.0);
    // student.ustawOcene(logika, 3.0);
    // student.przedstaw();
    
    // Pracownik pracownik;
    // pracownik.ustawDateUrodzenia(6,12,1930);
    // pracownik.ustawImieINazwisko("Teofil", "Barkowski");
    // pracownik.ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Jasielska", "122s/41");  
    // pracownik.ustawProwadzonyPrzedmiot("Geografia");
    // pracownik.ustawProwadzonyPrzedmiot("Przyroda");
    // pracownik.ustawProwadzonyPrzedmiot("Biologia");
    // pracownik.przedstaw();
    // pracownik.sprawdzCzyProwadziPrzedmiot("Geografia");
    // pracownik.sprawdzCzyProwadziPrzedmiot("Wf");
    // pracownik.usunProwadzonyPrzedmiot("Wf");
    // pracownik.usunProwadzonyPrzedmiot("Geografia");
    // pracownik.sprawdzCzyProwadziPrzedmiot("Geografia");
    // pracownik.przedstaw();

    // Osoba * osobaWsk1 = new Osoba();
    // osobaWsk1->ustawDateUrodzenia(14,2,1928);
    // osobaWsk1->ustawImieINazwisko("Katarzyna", "Paździoch");
    // osobaWsk1->ustawMiejsceZamieszkania("Polska", "Wałcz", "os. Bukowe", "51d/8");
    // przedstawOsobeWsk(osobaWsk1);
    // przedstawOsobeRef(*osobaWsk1);

    // Pracownik * osobaWsk2 = new Pracownik();
    // osobaWsk2->ustawDateUrodzenia(6,12,1930);
    // osobaWsk2->ustawImieINazwisko("Teofil", "Barkowski");
    // osobaWsk2->ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Jasielska", "122s/41");  
    // osobaWsk2->ustawProwadzonyPrzedmiot("Geografia");
    // osobaWsk2->ustawProwadzonyPrzedmiot("Przyroda");
    // osobaWsk2->ustawProwadzonyPrzedmiot("Biologia");
    // przedstawOsobeWsk(osobaWsk2);
    // przedstawOsobeRef(*osobaWsk2);

    // Student * osobaWsk3 = new Student();
    // osobaWsk3->ustawDateUrodzenia(16,1,2000);
    // osobaWsk3->ustawImieINazwisko("Jan", "Kowalski");
    // osobaWsk3->ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Kwiatowa", "12a/4");
    // osobaWsk3->ustawOcene(matematyka, 4.5);
    // osobaWsk3->ustawOcene(fizyka, 2.5);
    // osobaWsk3->ustawOcene(informatyka, 4.0);
    // osobaWsk3->ustawOcene(wf, 5.0);
    // osobaWsk3->ustawOcene(logika, 3.0);
    // przedstawOsobeWsk(osobaWsk3);
    // przedstawOsobeRef(*osobaWsk3);

    // /* Powyższe funkcje odnoszą się tylko do klasy osoba, ponieważ wskaźnik
    // wskazuje na typ statyczny klasy osoba, zatem wprowadzenie jako
    // argument klasy pochodnej nie spowoduje wywolania funkcji przedstaw() dla
    // podanej klasy, a tylko dla jej bazowej - Osoby */

    // /* Wprowadzenie  metod virtual do klasy bazowej spowoduje, że wskaźnik
    // będzie wskazywał na klase o typie dynamicznym, co za tym idzie wskaże 
    // klasę pochodną o którą rzeczywiście nam chodzi*/

    // delete osobaWsk1;
    // delete osobaWsk2;
    // delete osobaWsk3;

    // Pracownik * p1 = new Pracownik;
    // Osoba * o1 = static_cast<Osoba *>(p1);
    // Osoba * o2 = static_cast<Pracownik *>(o1);
    // /* tej linijki nie jestem pewien */

    // /* Powyższe rzutowania są poprawne. Użyto tu "c++'owego castingu", który
    // ma ułatwić programiście znalezienie w programie miejsc, w których następuje
    // konwersja typów danych. Castingi te mają również pewne dodatkowe zalety.
    // W przypadku powyższego castingu nie uzyjemy ich, kompilator podkreslilby go
    // w przypadku gdy konwersja bylaby bezsensowna, ale u mnie wszystko dziala,
    // a w trybie debugowania mozna zauwazyc ze wskaznikom zostalo poprawnie 
    // przydzielone miejsce w pamieci  */

    // Osoba * o3 = new Osoba;
    // Pracownik *p2 = static_cast<Pracownik *>(o3); 

    // /* W przypadku powyzszego kodu, wskaźnik p2 nie przejął poprawnie adresu p2, 
    // ale nie poinformuje o tym w żadnej sposób, tak jak w klasycznej konwescji C */

    // Pracownik * p3 = new Pracownik;
    // Osoba * o4 = dynamic_cast<Osoba *>(p3);
    // //Pracownik * p4 = dynamic_cast<Osoba *>(o4);
    // /* proba zapisania Osoby we wskaźniku o typie Pracownik */

    // /* Ostatnie rzutowanie powyższego kodu jest niepoprawne. Wiemy to dzięki
    // nowemu sposobowi oznaczania konwersji danych, które to podkreśla nam składnie.
    // Można przekonwertować klasę pochodną do bazowej, kompilator utnie dodatkowe dane
    // z pochodnej, ale w drugą stronę to już nie zadziała  */ 

    // Osoba * o5 = new Osoba;
    // Pracownik * p5 = dynamic_cast<Pracownik *>(o5);
    // if(p5 == nullptr) cout << "Blad rzutowania" << endl;
    // else cout << "Rzutowanie poprawne" << endl;

    // /* W powyższym przykładzie widać, że dynamic_cast ma dodatkową zalete
    // przypisania nullptr do wskaźników przy nieudanej konwersji, dzięki 
    // czemu możemy zweryfikować poprawność przypisania */

    
    // Student janek;
    // janek.ustawDateUrodzenia(4,1,2000);
    // janek.ustawImieINazwisko("Jan", "Kowalski");
    // janek.ustawMiejsceZamieszkania("Polska", "Kozieglowy", "os. Lesne", "1a");
    // janek.ustawOcene(0, 2.0);
    // janek.ustawOcene(1, 5.0);
    // janek.ustawOcene(2, 2.0);
    // janek.ustawOcene(3, 3.5);
    // janek.ustawOcene(4, 4.5);
    // janek.przedstaw();

    /* Konstruktor przenoszacy */

    // Student maciek(move(janek));
    // maciek.przedstaw();
    // janek.przedstaw();

    // Student janek;
    // janek.ustawDateUrodzenia(4,1,2000);
    // janek.ustawImieINazwisko("Jan", "Kowalski");
    // janek.ustawMiejsceZamieszkania("Polska", "Kozieglowy", "os. Lesne", "1a");
    // janek.ustawOcene(0, 2.0);
    // janek.ustawOcene(1, 5.0);
    // janek.ustawOcene(2, 2.0);
    // janek.ustawOcene(3, 3.5);
    // janek.ustawOcene(4, 4.5);
    // janek.przedstaw();

    /* Konstruktor przenoszacy */

    // Student maciek(janek);
    // maciek.przedstaw();
    // janek.przedstaw();

    /* Duże problemy spowodowane z konstruktorami. Prawdopodobnie przekombinowalem z ich implementacja,
     a w duzej ilosci kodu ciezko bylo znalesc blad. Po wielu próbach doszedłem do wniosku że prawdopodobnie
     próbuje usunąc niezainicjalizowane wskaźniki. Wystąpił tu błąd rozumowania jeśli chodzi o różnice między
     niezainicjalizowanymi wskaźnikami, a nullptr. Ostatecznie wróciłem do uproszczonej wersji implementacji.
     Ze względu na ogromną ilość czasu poświęconą na tworzeniu ich, odpuszczam implementacje dla Pracownika.
    */

    // Osoba * tab[2];
    // tab[0] = new Student();
    // tab[1] = new Pracownik();

    // tab[0]->przedstaw();
    // tab[1]->przedstaw();

    // delete tab[0];
    // delete tab[1];

    /* Przykład użycia metody virtualnej */

    
    // FabrykaOsob * tab[2];
    // tab[0] = new FabrykaStudentow;
    // tab[1] = new FabrykaPracownikow;

    // tab[0]->utworz()->przedstaw();
    // tab[1]->utworz()->przedstaw();

    // map<string, FabrykaOsob*> m;
    // m["pracownik"] = new FabrykaPracownikow();
    // m["student"] = new FabrykaStudentow();

    // vector<Osoba *> tablicaOsob;
    // string currentCommand;

    // int counter = 0;
    // do
    // {
    //     cout << "Co zrobic?" << endl;
    //     cout << "'student' - tworzy nowego studenta" << endl;
    //     cout << "'pracownik' - tworzy nowego pracownika" << endl;
    //     cout << "Wpisanie czegokolwiek innego konczy program" << endl;
    //     cout << "Wybor: "; cin >> currentCommand; fflush(stdin); fflush(stdout);
    //     if(currentCommand == "pracownik" || currentCommand == "student") {
    //     tablicaOsob.push_back(m[currentCommand]->utworz());
    //     counter++;
    //     }
    // } while (currentCommand == "pracownik" || currentCommand == "student");

    // for (int i = 0; i < counter; i++)
    // {
    //     tablicaOsob[i]->przedstaw();
    // }

    return 0;
=======
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "osoba.hpp"
#include "student.hpp"
#include "pracownik.hpp"
#include "fabrykaOsob.hpp"
#include "fabrykaStudentow.hpp"
#include "fabrykaPracownikow.hpp"
#include <iostream>
#include <string>
#include <memory>
#include <map>
using namespace std;

void przedstawOsobeWsk(Osoba *osoba);
void przedstawOsobeRef(Osoba &osoba);

int main() {

    enum przedmiot { matematyka, fizyka, informatyka, wf, logika };

    // Osoba osoba;
    // osoba.ustawDateUrodzenia(4,5,1998);
    // osoba.ustawImieINazwisko("Barbara", "Barbińska");
    // osoba.ustawMiejsceZamieszkania("Polska", "Katowice", "os. Malinowe", "5b/78");
    // osoba.odczytajDateUrodzenia();
    // osoba.odczytajImieINazwisko();
    // osoba.odczytajMiejsceZamieszkania();
     
    // Student student;
    // student.ustawDateUrodzenia(16,1,2000);
    // student.ustawImieINazwisko("Jan", "Kowalski");
    // student.ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Kwiatowa", "12a/4");
    // student.ustawOcene(matematyka, 4.5);
    // student.ustawOcene(fizyka, 2.5);
    // student.ustawOcene(informatyka, 4.0);
    // student.ustawOcene(wf, 5.0);
    // student.ustawOcene(logika, 3.0);
    // student.przedstaw();
    
    // Pracownik pracownik;
    // pracownik.ustawDateUrodzenia(6,12,1930);
    // pracownik.ustawImieINazwisko("Teofil", "Barkowski");
    // pracownik.ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Jasielska", "122s/41");  
    // pracownik.ustawProwadzonyPrzedmiot("Geografia");
    // pracownik.ustawProwadzonyPrzedmiot("Przyroda");
    // pracownik.ustawProwadzonyPrzedmiot("Biologia");
    // pracownik.przedstaw();
    // pracownik.sprawdzCzyProwadziPrzedmiot("Geografia");
    // pracownik.sprawdzCzyProwadziPrzedmiot("Wf");
    // pracownik.usunProwadzonyPrzedmiot("Wf");
    // pracownik.usunProwadzonyPrzedmiot("Geografia");
    // pracownik.sprawdzCzyProwadziPrzedmiot("Geografia");
    // pracownik.przedstaw();

    // Osoba * osobaWsk1 = new Osoba();
    // osobaWsk1->ustawDateUrodzenia(14,2,1928);
    // osobaWsk1->ustawImieINazwisko("Katarzyna", "Paździoch");
    // osobaWsk1->ustawMiejsceZamieszkania("Polska", "Wałcz", "os. Bukowe", "51d/8");
    // przedstawOsobeWsk(osobaWsk1);
    // przedstawOsobeRef(*osobaWsk1);

    // Pracownik * osobaWsk2 = new Pracownik();
    // osobaWsk2->ustawDateUrodzenia(6,12,1930);
    // osobaWsk2->ustawImieINazwisko("Teofil", "Barkowski");
    // osobaWsk2->ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Jasielska", "122s/41");  
    // osobaWsk2->ustawProwadzonyPrzedmiot("Geografia");
    // osobaWsk2->ustawProwadzonyPrzedmiot("Przyroda");
    // osobaWsk2->ustawProwadzonyPrzedmiot("Biologia");
    // przedstawOsobeWsk(osobaWsk2);
    // przedstawOsobeRef(*osobaWsk2);

    // Student * osobaWsk3 = new Student();
    // osobaWsk3->ustawDateUrodzenia(16,1,2000);
    // osobaWsk3->ustawImieINazwisko("Jan", "Kowalski");
    // osobaWsk3->ustawMiejsceZamieszkania("Polska", "Poznan", "ul. Kwiatowa", "12a/4");
    // osobaWsk3->ustawOcene(matematyka, 4.5);
    // osobaWsk3->ustawOcene(fizyka, 2.5);
    // osobaWsk3->ustawOcene(informatyka, 4.0);
    // osobaWsk3->ustawOcene(wf, 5.0);
    // osobaWsk3->ustawOcene(logika, 3.0);
    // przedstawOsobeWsk(osobaWsk3);
    // przedstawOsobeRef(*osobaWsk3);

    // /* Powyższe funkcje odnoszą się tylko do klasy osoba, ponieważ wskaźnik
    // wskazuje na typ statyczny klasy osoba, zatem wprowadzenie jako
    // argument klasy pochodnej nie spowoduje wywolania funkcji przedstaw() dla
    // podanej klasy, a tylko dla jej bazowej - Osoby */

    // /* Wprowadzenie  metod virtual do klasy bazowej spowoduje, że wskaźnik
    // będzie wskazywał na klase o typie dynamicznym, co za tym idzie wskaże 
    // klasę pochodną o którą rzeczywiście nam chodzi*/

    // delete osobaWsk1;
    // delete osobaWsk2;
    // delete osobaWsk3;

    // Pracownik * p1 = new Pracownik;
    // Osoba * o1 = static_cast<Osoba *>(p1);
    // Osoba * o2 = static_cast<Pracownik *>(o1);
    // /* tej linijki nie jestem pewien */

    // /* Powyższe rzutowania są poprawne. Użyto tu "c++'owego castingu", który
    // ma ułatwić programiście znalezienie w programie miejsc, w których następuje
    // konwersja typów danych. Castingi te mają również pewne dodatkowe zalety.
    // W przypadku powyższego castingu nie uzyjemy ich, kompilator podkreslilby go
    // w przypadku gdy konwersja bylaby bezsensowna, ale u mnie wszystko dziala,
    // a w trybie debugowania mozna zauwazyc ze wskaznikom zostalo poprawnie 
    // przydzielone miejsce w pamieci  */

    // Osoba * o3 = new Osoba;
    // Pracownik *p2 = static_cast<Pracownik *>(o3); 

    // /* W przypadku powyzszego kodu, wskaźnik p2 nie przejął poprawnie adresu p2, 
    // ale nie poinformuje o tym w żadnej sposób, tak jak w klasycznej konwescji C */

    // Pracownik * p3 = new Pracownik;
    // Osoba * o4 = dynamic_cast<Osoba *>(p3);
    // //Pracownik * p4 = dynamic_cast<Osoba *>(o4);
    // /* proba zapisania Osoby we wskaźniku o typie Pracownik */

    // /* Ostatnie rzutowanie powyższego kodu jest niepoprawne. Wiemy to dzięki
    // nowemu sposobowi oznaczania konwersji danych, które to podkreśla nam składnie.
    // Można przekonwertować klasę pochodną do bazowej, kompilator utnie dodatkowe dane
    // z pochodnej, ale w drugą stronę to już nie zadziała  */ 

    // Osoba * o5 = new Osoba;
    // Pracownik * p5 = dynamic_cast<Pracownik *>(o5);
    // if(p5 == nullptr) cout << "Blad rzutowania" << endl;
    // else cout << "Rzutowanie poprawne" << endl;

    // /* W powyższym przykładzie widać, że dynamic_cast ma dodatkową zalete
    // przypisania nullptr do wskaźników przy nieudanej konwersji, dzięki 
    // czemu możemy zweryfikować poprawność przypisania */

    
    // Student janek;
    // janek.ustawDateUrodzenia(4,1,2000);
    // janek.ustawImieINazwisko("Jan", "Kowalski");
    // janek.ustawMiejsceZamieszkania("Polska", "Kozieglowy", "os. Lesne", "1a");
    // janek.ustawOcene(0, 2.0);
    // janek.ustawOcene(1, 5.0);
    // janek.ustawOcene(2, 2.0);
    // janek.ustawOcene(3, 3.5);
    // janek.ustawOcene(4, 4.5);
    // janek.przedstaw();

    /* Konstruktor przenoszacy */

    // Student maciek(move(janek));
    // maciek.przedstaw();
    // janek.przedstaw();

    // Student janek;
    // janek.ustawDateUrodzenia(4,1,2000);
    // janek.ustawImieINazwisko("Jan", "Kowalski");
    // janek.ustawMiejsceZamieszkania("Polska", "Kozieglowy", "os. Lesne", "1a");
    // janek.ustawOcene(0, 2.0);
    // janek.ustawOcene(1, 5.0);
    // janek.ustawOcene(2, 2.0);
    // janek.ustawOcene(3, 3.5);
    // janek.ustawOcene(4, 4.5);
    // janek.przedstaw();

    /* Konstruktor przenoszacy */

    // Student maciek(janek);
    // maciek.przedstaw();
    // janek.przedstaw();

    /* Duże problemy spowodowane z konstruktorami. Prawdopodobnie przekombinowalem z ich implementacja,
     a w duzej ilosci kodu ciezko bylo znalesc blad. Po wielu próbach doszedłem do wniosku że prawdopodobnie
     próbuje usunąc niezainicjalizowane wskaźniki. Wystąpił tu błąd rozumowania jeśli chodzi o różnice między
     niezainicjalizowanymi wskaźnikami, a nullptr. Ostatecznie wróciłem do uproszczonej wersji implementacji.
     Ze względu na ogromną ilość czasu poświęconą na tworzeniu ich, odpuszczam implementacje dla Pracownika.
    */

    // Osoba * tab[2];
    // tab[0] = new Student();
    // tab[1] = new Pracownik();

    // tab[0]->przedstaw();
    // tab[1]->przedstaw();

    // delete tab[0];
    // delete tab[1];

    /* Przykład użycia metody virtualnej */

    
    // FabrykaOsob * tab[2];
    // tab[0] = new FabrykaStudentow;
    // tab[1] = new FabrykaPracownikow;

    // tab[0]->utworz()->przedstaw();
    // tab[1]->utworz()->przedstaw();

    // map<string, FabrykaOsob*> m;
    // m["pracownik"] = new FabrykaPracownikow();
    // m["student"] = new FabrykaStudentow();

    // vector<Osoba *> tablicaOsob;
    // string currentCommand;

    // int counter = 0;
    // do
    // {
    //     cout << "Co zrobic?" << endl;
    //     cout << "'student' - tworzy nowego studenta" << endl;
    //     cout << "'pracownik' - tworzy nowego pracownika" << endl;
    //     cout << "Wpisanie czegokolwiek innego konczy program" << endl;
    //     cout << "Wybor: "; cin >> currentCommand; fflush(stdin); fflush(stdout);
    //     if(currentCommand == "pracownik" || currentCommand == "student") {
    //     tablicaOsob.push_back(m[currentCommand]->utworz());
    //     counter++;
    //     }
    // } while (currentCommand == "pracownik" || currentCommand == "student");

    // for (int i = 0; i < counter; i++)
    // {
    //     tablicaOsob[i]->przedstaw();
    // }

    return 0;
>>>>>>> dodany miniprojekt7 i java
}
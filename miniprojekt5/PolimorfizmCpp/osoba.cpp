/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "osoba.hpp"
#include <iostream>
#include <string>

using namespace std;
bool sprawdzDate(int rok, int miesiac, int dzien);

Osoba::Osoba():     //konstruktor domyślny
    imie(nullptr),
    nazwisko(nullptr),
    adres(nullptr),
    rok(nullptr),
    miesiac(nullptr),
    dzien(nullptr)
{}

Osoba::~Osoba() {   //destruktor
    if(this->imie != nullptr) delete imie;
    if(this->nazwisko != nullptr) delete nazwisko;
    if(this->adres != nullptr) delete adres;
    if(this->rok != nullptr) delete rok;
    if(this->miesiac != nullptr) delete miesiac;
    if(this->dzien != nullptr) delete dzien;
}

Osoba::Osoba(const Osoba & obiekt) {    //konstruktor kopiujący
    if(obiekt.imie != nullptr) {
        if(this->imie != nullptr) delete this->imie;
        this->imie = new string(*obiekt.imie);
    }
    else {
        if(this->imie != nullptr) delete this->imie;
        this->imie = nullptr;
    }

    if(obiekt.nazwisko != nullptr) {
        //if(this->nazwisko != nullptr) delete this->nazwisko;
        this->nazwisko = new string(*obiekt.nazwisko);
    }
    else {
        //if(this->nazwisko != nullptr) delete this->nazwisko;
        this->nazwisko = nullptr;
    }

    if(obiekt.adres != nullptr) {
        //if(this->adres != nullptr) delete this->adres;
        this->adres = new Adres(*obiekt.adres);
    }
    else {
        //if(this->adres != nullptr) delete this->adres;
        this->adres = nullptr;
    }

    if(obiekt.rok != nullptr) {
        //if(this->rok != nullptr) delete this->rok;
        this->rok = new int(*obiekt.rok);
    }
    else {
        //if(this->rok != nullptr) delete this->rok;
        this->rok = nullptr;
    }

    if(obiekt.miesiac != nullptr) {
        //if(this->miesiac != nullptr) delete this->miesiac;
        this->miesiac = new int(*obiekt.miesiac);
    }
    else {
        //if(this->miesiac != nullptr) delete this->miesiac;
        this->miesiac = nullptr;
    }

    if(obiekt.dzien != nullptr) {
        //if(this->dzien != nullptr) delete this->dzien;
        this->dzien = new int(*obiekt.dzien);
    }
    else {
        //if(this->dzien != nullptr) delete this->dzien;
        this->dzien = nullptr;
    }  
}

Osoba::Osoba(Osoba && obiekt) {     //kontruktor przenoszący
    if(obiekt.imie != nullptr) {
        //if(this->imie != nullptr) delete this->imie; 
        this->imie = move(obiekt.imie);
        obiekt.imie = nullptr;
    }
    else {
        //if(this->imie != nullptr) delete this->imie;
        this->imie = nullptr;
    }
    
    if(obiekt.nazwisko != nullptr) {
        //if(this->nazwisko != nullptr) delete this->nazwisko; 
        this->nazwisko = move(obiekt.nazwisko);
        obiekt.nazwisko = nullptr;
    }
    else {
        //if(this->nazwisko != nullptr) delete this->nazwisko;
        this->nazwisko = nullptr;
    }

    if(obiekt.adres != nullptr) {
        //if(this->adres != nullptr) delete this->adres; 
        this->adres = move(obiekt.adres);
        obiekt.adres = nullptr;
         
    }
    else {
        //if(this->adres != nullptr) delete this->adres;
        this->adres = nullptr;
    }

    if(obiekt.rok != nullptr) {
        //if(this->rok != nullptr) delete this->rok; 
        this->rok = move(obiekt.rok);
        obiekt.rok = nullptr;
    }
    else {
        //if(this->rok != nullptr) delete this->rok;
        this->rok = nullptr;
    }

    if(obiekt.miesiac != nullptr) {
        //if(this->miesiac != nullptr) delete this->miesiac; 
        this->miesiac = move(obiekt.miesiac);
        obiekt.miesiac = nullptr;
    }
    else {
        //if(this->miesiac != nullptr) delete this->miesiac;
        this->miesiac = nullptr;
    }

    if(obiekt.dzien != nullptr) {
        //if(this->dzien != nullptr) delete this->dzien; 
        this->dzien = move(obiekt.dzien);
        obiekt.dzien = nullptr;
    }
    else {
        //if(this->dzien != nullptr) delete this->dzien;
        this->dzien = nullptr;
    }
}

Osoba::Osoba(string napis):     //konstruktor konwertujący
    imie(new string(napis)),
    nazwisko(new string("Kowalski")),
    adres(nullptr),
    rok(nullptr),
    miesiac(nullptr),
    dzien(nullptr)
{}

void Osoba::ustawImieINazwisko(string imie, string nazwisko) {
    if(this->imie != nullptr) {delete this->imie; this->imie = new string(imie); }
    else this->imie = new string(imie);
    
    if(this->nazwisko != nullptr) {delete this->nazwisko; this->nazwisko = new string(nazwisko); }
    else this->nazwisko = new string(nazwisko);
}
void Osoba::ustawDateUrodzenia(int dzien, int miesiac, int rok) {
    if (!(sprawdzDate(rok, miesiac, dzien))) cout << "Niepoprana data lub jej format" << endl;
    else {
        if(this->rok != nullptr) {delete this->rok; this->rok = new int(rok); }
        else this->rok = new int(rok);

        if(this->miesiac != nullptr) {delete this->miesiac; this->miesiac = new int(miesiac); }
        else this->miesiac = new int(miesiac);

        if(this->dzien != nullptr) {delete this->dzien; this->dzien = new int(dzien); }
        else this->dzien = new int(dzien);
    }
}  

void Osoba::ustawMiejsceZamieszkania(string kraj, string miejscowosc, string ulica, string numer) {
    if(this->adres == nullptr) adres = new Adres();
    adres->ustawAdres(kraj, miejscowosc, ulica, numer);
}

void Osoba::odczytajImieINazwisko() {
    if(this->imie == nullptr || this->nazwisko == nullptr) cout << "Niezainicjalizowano imienia i nazwiska" << endl; 
    else cout << "Imie i nazwisko: " << *imie << " " << *nazwisko << endl;
}
void Osoba::odczytajDateUrodzenia() {
    if(this->rok == nullptr || this->miesiac == nullptr || this->dzien == nullptr) cout << "Niezainicjalizowano daty urodzenia" << endl; 
    else cout << "Data urodzenia: " << *dzien << "-" << *miesiac << "-" << *rok << endl;
}
void Osoba::odczytajMiejsceZamieszkania() {
    if(this->adres == nullptr) cout << "Nie ustawiono miejsca zamieszkania" << endl;
    else adres->odczytajAdres();
}

bool sprawdzDate(int rok, int miesiac, int dzien) {

        if(miesiac == 1 || miesiac == 3 || miesiac == 5 || miesiac == 1 || miesiac == 7 || miesiac == 8 || miesiac == 10 || miesiac == 12){
            for(int d=1; d<=31; ++d){
                if (dzien == d && rok>=0) return true;
                else continue;
                }   return false;
        }
        
        else if(miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11){
            for(int d=1; d<=30; ++d){
                if (dzien == d && rok>=0) return true;
                else continue;
                }   return false;
        }
        
        else if(miesiac == 2){

            if(rok % 2 == 0){  
                for(int d=1; d<=29; ++d){
                    if (dzien == d && rok>=0) return true;
                    else continue;
                    }   return false;
            }

            if(rok % 2 != 0){ 
                for(int d=1; d<=28; ++d){
                    if (dzien == d && rok>=0) return true;
                    else continue;
                    }   return false;
            }
        }
        
        return false;   
}

void przedstawOsobeWsk(Osoba *osoba) {
    cout << endl << "Funkcja wskaźnik" << endl;
    osoba->przedstaw();
    cout << endl;
} 

void przedstawOsobeRef(Osoba &osoba) {
    cout << endl << "Funkcja referencja" << endl;
    osoba.przedstaw();
    cout << endl;
} 


// Osoba::Osoba(Osoba && obiekt) {     //kontruktor przenoszący
//     if(obiekt.imie != nullptr) {
//         if(this->imie != nullptr) delete this->imie; 
//         this->imie = move(obiekt.imie);
//     }
//     else {
//         if(this->imie != nullptr) delete this->imie;
//         this->imie = nullptr;
//     }
    
//     if(obiekt.nazwisko != nullptr) {
//         if(this->nazwisko != nullptr) delete this->nazwisko; 
//         this->nazwisko = move(obiekt.nazwisko);
//     }
//     else {
//         if(this->nazwisko != nullptr) delete this->nazwisko;
//         this->nazwisko = nullptr;
//     }

//     if(obiekt.adres != nullptr) {
//         if(this->adres != nullptr) delete this->adres; 
//         this->adres = move(obiekt.adres);
//     }
//     else {
//         if(this->adres != nullptr) delete this->adres;
//         this->adres = nullptr;
//     }

//     if(obiekt.rok != nullptr) {
//         if(this->rok != nullptr) delete this->rok; 
//         this->rok = move(obiekt.rok);
//     }
//     else {
//         if(this->rok != nullptr) delete this->rok;
//         this->rok = nullptr;
//     }

//     if(obiekt.miesiac != nullptr) {
//         if(this->miesiac != nullptr) delete this->miesiac; 
//         this->miesiac = move(obiekt.miesiac);
//     }
//     else {
//         if(this->miesiac != nullptr) delete this->miesiac;
//         this->miesiac = nullptr;
//     }

//     if(obiekt.dzien != nullptr) {
//         if(this->dzien != nullptr) delete this->dzien; 
//         this->dzien = move(obiekt.dzien);
//     }
//     else {
//         if(this->dzien != nullptr) delete this->dzien;
//         this->dzien = nullptr;
//     }
// }
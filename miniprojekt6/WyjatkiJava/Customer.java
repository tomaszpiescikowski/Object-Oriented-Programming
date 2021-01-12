/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
package PuT.miniprojekt6.WyjatkiJava;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;

class Customer {
    private String name;

    public Customer() {
        name = "";
    }
    public Customer(String s) {
        name = s;
    } 
    public String getName() {
        return name;
    }

    /* Dzięki wykorzystaniu adnotacji @Override kompilator otrzymuje od nas informację,
    że dana metoda będzie przysłaniać inną metodę. W przypadku, gdy żadna metoda do przysłonięcia
    nie zostanie odnaleziona (np. w interfejsie, w klasie rodzica) to kompilator zwróci nam błąd.
    Wykorzystując tą adnotację mamy pewność, że przysłonimy istniejącą metodę. Nie ma możliwości, 
    aby się pomylić w sygnaturze funkcji. */

    @Override
    public boolean equals(Object c) {
        if(this.name.equals(c)) return true;
        else return false;
    }

}
/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
package PuT.miniprojekt1.HelloJava.hello;

import java.util.Scanner;

public class World {
    public static void main(String [] args) {
        Scanner s = new Scanner(System.in);
        String fellow = "World";
        System.out.printf("Hello %s\n", fellow);
        while(!fellow.equals("exit")) {
            System.out.printf("Introduce yourself: ");
            fellow = s.nextLine();
            System.out.printf("Hello %s\n", fellow);
        }
        s.close();
    }
}
/* Program nie konczyl sie po wpisaniu exit. Nalezalo zmienic
warunek petli while na funkcje sprawdzajaca rownosc zmiennej z argumentem  typustring */
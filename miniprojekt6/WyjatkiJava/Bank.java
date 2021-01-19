/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
package PuT.miniprojekt6.WyjatkiJava;

import java.util.*;

import javax.security.auth.login.AccountNotFoundException;

public class Bank implements SearchAccounts, SearchCustomers {
    ArrayList<Customer> customers = new ArrayList<Customer>();
    ArrayList<Account> accounts = new ArrayList<Account>();

    @Override
    public Customer findByName(String name) throws CustomerNotFoundException {
        System.out.println("Szukanie kont po nazwe");
        int a = 11;
        int b = 6;
        System.out.println("Tesotwanie funkcji");
        System.out.println("findByName");
        return new Customer();
            
    }

    @Override
    public Account findByNumber(int num) throws AccountNotFoundException {
        System.out.println("Szukanie kont po liczbie");
        int a = 11;
        int b = 6;
        System.out.println("Tesotwanie funkcji");
        System.out.println("findBynumber");
        return new Account();
    }

    @Override
    public ArrayList<Account> findAllCustomerAccounts(Customer cust) throws AccountNotFoundException {
        System.out.println("Szukanie wszystkich customerow");
        System.out.println("Tesotwanie funkcji");
        System.out.println("findAllCustomerAccounts");
    }

    public static void main(String[] args) {
        System.out.println("Testowanie maina");
        System.out.println("wypisywanie argów");
        System.out.println("============");
        System.out.println( args[0] );
        System.out.println( args[1] );
        System.out.println( args[2] );
        System.out.println( args[3] );
        System.out.println( args[4] );

      }
}


/* Interfejsy pomagaja nam na pewnym poziomie abstrakcji ulozyc
program do wlasnych potrzeb, uporzadkowac go, nadac obowiozujace
funkcjonalnosci. Odpowiednik klasy wirtualnej, polimorfizm.  */

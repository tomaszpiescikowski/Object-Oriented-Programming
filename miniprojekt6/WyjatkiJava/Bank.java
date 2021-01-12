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
        
            
    }

    @Override
    public Account findByNumber(int num) throws AccountNotFoundException {
        

    }

    @Override
    public ArrayList<Account> findAllCustomerAccounts(Customer cust) throws AccountNotFoundException {
        


    }

    public static void main(String[] args) {
        

      }
}


/* Interfejsy pomagaja nam na pewnym poziomie abstrakcji ulozyc
program do wlasnych potrzeb, uporzadkowac go, nadac obowiozujace
funkcjonalnosci. Odpowiednik klasy wirtualnej, polimorfizm.  */

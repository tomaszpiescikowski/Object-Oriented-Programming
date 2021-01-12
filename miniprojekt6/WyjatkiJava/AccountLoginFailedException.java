/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
package PuT.miniprojekt6.WyjatkiJava;

import java.util.*;

import javax.security.auth.login.AccountNotFoundException;

public class AccountLoginFailedException {
    static final long serialVersionUID = 1L;
    private int password;
    private String login;

    AccountLoginFailedException() {}
    AccountLoginFailedException(String errorMsg, String s, int passwd) {
        //super(errorMsg);
        login = s;
        password = passwd;
    }

    int getPassword() {
        return password;
    }
    String getLogin() {
        return login;
    }
}

interface SearchCustomers {
    Customer findByName(String name) throws CustomerNotFoundException;
}

interface SearchAccounts {
    Account findByNumber(int number) throws AccountNotFoundException;
        
    ArrayList<Account> findAllCustomerAccounts(Customer cust) throws AccountNotFoundException;       
}
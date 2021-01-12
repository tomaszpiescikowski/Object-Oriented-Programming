/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
package PuT.miniprojekt6.WyjatkiJava;

public class Account {
    private int accountNumber;
    private Customer owner;
    private double balance;
    private int password;
    private String login;

    public Account() {
        accountNumber = 0;
        owner = new Customer();
        balance = 0.0;    
        password = 123;
        login = "abc";
    }
    public Account(int n, Customer c, int p, String l) {
        accountNumber = n;
        owner = c;
        balance = 0.0;    
        password = p;
        login = l;
    }
    public void login(String l, int passwd)
            throws AccountLoginFailedException {
        password = passwd;
        login = l;
    }
    public Customer getCustomer() {
        return owner;
    } 
    public int getNumber() {
        return accountNumber;
    }   
    public double getBalance() {
        return balance;
    }
    public double withdraw(double amount) {
        if(balance - amount > 0) balance -= amount;
        return balance;
    }
}

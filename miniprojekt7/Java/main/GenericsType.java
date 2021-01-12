/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
package PuT.miniprojekt7.Java.main;

import java.util.*;
import java.lang.*;
import java.io.*;

public class GenericsType<T> {
    private T t;

    public T get() {
        return this.t;
    }

    public void set(T t1) {
        this.t=t1;
    }
    public static void main(String args[]) {
        Checker<Integer> isOddAnonymous = new Checker<Integer>() {
            @Override
            public boolean check(Integer object) {
                return object % 2 != 0;
            }
        };
        Checker<Integer> isOddLambda = object -> object % 2 != 0;

        System.out.println(isOddAnonymous.check(123));
        System.out.println(isOddAnonymous.check(124));

        GenericsType<String> type = new GenericsType<>();
        type.set("PUT");
        System.out.println(type.get());
        GenericsType type1 = new GenericsType();
        type1.set("UAM");
        System.out.println(type1.get());
        type1.set(10);
        System.out.println(type1.get());
    }
}

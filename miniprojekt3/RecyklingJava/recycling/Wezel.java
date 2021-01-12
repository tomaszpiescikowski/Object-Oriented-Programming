/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
package PuT.miniprojekt3.RecyklingJava.recycling;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap; 

public class Wezel {
    private ArrayList<Wezel> polaczenia = new ArrayList<>();

    @Deprecated
    @Override
    protected void finalize() throws Throwable {
        System.out.println("Finalizowanie obiektu");
        super.finalize();
    }
    public void dodajPolaczenie(Wezel w) {
        polaczenia.add(w);
    }
    
    public static void main(String[] args) { 
        Scanner s = new Scanner(System.in);
        Wezel w1 = new Wezel();
        Wezel w2 = new Wezel();
        for(int i=0; i<=100000; i++) {
            //new Wezel();
            w1.dodajPolaczenie(w2);
            w2.dodajPolaczenie(w1);
        }
        
        HashMap<String, Integer> punkty = new HashMap<>(); 
  
        // dodawanie elementow
        punkty.put("p1", 10); //ich srednice
        punkty.put("p2", 30); 
        punkty.put("p3", 20); 
  
        System.out.println("Rozmiar HashMapy:- "+ punkty.size());      
        System.out.println(punkty); 
  
        if (punkty.containsKey("p1")) { 
            Integer a = punkty.get("p1"); 
            System.out.println("Wartosc dla klucza"+ " \"p1\" to: " + a); 
        
        TreeMap<Integer,String> map =new TreeMap<Integer,String>();    
        map.put(100,"p1");    
        map.put(102,"p2");    
        map.put(101,"p3");    
        map.put(103,"p4");    
        for(Map.Entry m:map.entrySet())  
        {  
            System.out.println(m.getKey()+" "+m.getValue());      
        }  
        map.remove(102);      
        System.out.println("po wywolaniu remove");  
        for(Map.Entry m:map.entrySet())  
        {  
            System.out.println(m.getKey()+" "+m.getValue());      
        }  

        s.nextLine();
        s.close();
    }
}
}
/*  
    Tablice mają swój typ na stałe i wymuszają go w runtime. 
    Generyki z kolei są zaimplementowane tak, że ich typy są wymazywane - to znaczy, 
    że wymuszają typy tylko podczas kompilacji, a w runtime już ich nie ma. 
    Java nie wspiera list natywnie, więc klasy jak ArrayList muszą być zbudowane na tablicach.
    Inne generyki jak np. HashMap są zbudowane na tablicach ze względu na wydajność. 
*/
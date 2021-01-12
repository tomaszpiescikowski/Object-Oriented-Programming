/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include <iostream>
#include <string>

int main() {

    std::string fellow = "world";
    std::cout << "Hello " << fellow << std::endl;
    while (fellow != "exit")
    {
        std::cout << "Introduce yourself: ";
        std::cout.flush();
        std::getline(std::cin, fellow);
        if( fellow != "exit" ) std::cout << "Hello " << fellow << std::endl;
    }
    
    return 0;
}

/* Debugowanie pokazuje wiele ciekawych apektow zwiazanych z danym programem.
Można w nim podglądać zmienne w czasie rzeczywistym, co ułatwia pracę
i wyszukiwanie błędów, szczególnie w przypadku większych programów  */
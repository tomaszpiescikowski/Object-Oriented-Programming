/*
    Wykonane przez: Tomasz Pieścikowski
    Numer indeksu: 145418

    Informatyka, I2.1, rok 2, programowanie obiektowe
    Prowadzący: Karol Krause
*/
#include "logger.hpp"
#include <stdlib.h> 
#include <time.h>

Logger::Logger(bool temp)
{
    debug = temp;
    //cout << "konstruktor loggera" << endl;
}

bool Logger::debug = false;

void Logger::log(string napis) {
    if(debug){
        time_t my_time = time(NULL); 
        printf("%s", ctime(&my_time)); 
        cout << napis << endl << endl;
    }
}
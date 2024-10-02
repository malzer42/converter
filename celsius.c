/**
 * File: celsius.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date creation (modification): 20240930 (20240930)
 * Description: Implementation of the celsius funtion
 */

#include "celsius.h"


void fahrenheit_to_celsius(double fahr);

void celsius(void)
{
    //system("clear");
    //system("date");
    puts("\t\t\t\t\t\t\t ________________________________________________________");
    puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
    puts("\t\t\t\t\t\t\t|*****          °F to °C                           *****|");
    puts("\t\t\t\t\t\t\t|*****       By P.A. Mulamba                       *****|");
    puts("\t\t\t\t\t\t\t|_______________________________________________________|");
    
    

    /* Section: input   */
    double fahrenheit_ = 0.0;
    bool answer = 0;

    do{
        printf("\n\t\t\t\t\t\t\tEnter the value of °F to convert to °C  :? ");
        scanf("%lf", &fahrenheit_);
        fahrenheit_to_celsius(fahrenheit_);
        printf("\n\n\t\t\t\t\t\t\tDo you want to continue (press 1 for yes or 0 for no) ? ");
        scanf("%d", &answer);

    } while(answer != 0);
}


void fahrenheit_to_celsius(double fahr)
{
    system("clear");
    system("date");
    puts("\t\t\t\t\t\t\t ________________________________________________________");
    puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
    puts("\t\t\t\t\t\t\t|*****          °F to °C                           *****|");
    puts("\t\t\t\t\t\t\t|*****     By P.A. Mulamba                         *****|");
    puts("\t\t\t\t\t\t\t|_______________________________________________________|");
    puts("\n\t\t\t\t\t\t\t\t ______________________________________");
    puts("\n\t\t\t\t\t\t\t\t|      °F          |      °C          |");
    puts("\t\t\t\t\t\t\t\t|__________________|__________________|");


    double celsius_ = 0;
    celsius_ = (5.0 / 9.0) * (fahr - CONVERSION_FACTOR);
    printf("\n\t\t\t\t\t\t\t\t     %4.6f °F = %4.6f °C              \n", fahr, celsius_);
    puts("\n\t\t\t\t\t\t\t\t---------------------------------------");
    puts("\t\t\t\t\t\t\t\t|      °F          |      °C          |");
    puts("\t\t\t\t\t\t\t\t|__________________|__________________|");
    //printf("\n\t\t\t\t\t\t\tEnter the value of °F to convert to °C (-1000 to quit)  :? ");
}
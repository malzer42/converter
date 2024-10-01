/**
 * File: celsius.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date creation (modification): 20240930 (20240930)
 * Description: Implementation of the celsius funtion
 */

#include "celsius.h"


void fahrenheit_to_celsius(double);

void celsius(void)
{
    system("clear");
    system("date");
    puts("\t\t\t\t\t\t\t ________________________________________________________");
    puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
    puts("\t\t\t\t\t\t\t|*****          °F to °C              *****|");
    puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
    puts("\t\t\t\t\t\t\t|_______________________________________________________|");

    /* Section: declaration and initialization */
    double fahrenheit_ = 0.0;

    /* Section: input   */
    printf("\n\t\t\t\t\t\t\t\tEnter the numeric value of °F to convert to °C (-1 to return) :? ");

    while (scanf("%lf", &fahrenheit_))
    {
        if(fahrenheit_ == -1)
            return;
        fahrenheit_to_celsius(fahrenheit_);
        
    }
    
}

void fahrenheit_to_celsius(double fahr)
{
    system("clear");
    system("date");
    puts("\t\t\t\t\t\t\t ________________________________________________________");
    puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
    puts("\t\t\t\t\t\t\t|*****          °F to °C              *****|");
    puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
    puts("\t\t\t\t\t\t\t|_______________________________________________________|");
    puts("\n\t\t\t\t\t\t\t\t ______________________________________");
    puts("\n\t\t\t\t\t\t\t\t|      °F        |     °C          |");
    puts("\t\t\t\t\t\t\t\t|__________________|__________________|");

    double celsius_ = 0;
    celsius_ = (5.0 / 9.0) * (fahr - CONVERSION_FACTOR);
    printf("\t\t\t\t\t\t\t\t|%18.2f °F = %18.2f °C|\n", fahr, celsius_);
    puts("\t\t\t\t\t\t\t\t---------------------------------------");
    puts("\t\t\t\t\t\t\t\t|      °F        |      °C         |");
    puts("\t\t\t\t\t\t\t\t|__________________|__________________|\n");
    printf("\n\t\t\t\t\t\t\t\tEnter the numeric value of °F to convert to °C (-1 to return) :? ");
}
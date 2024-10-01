/**
 * File: celsius.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date creation (modification): 20240930 (20240930)
 * Description: Implementation of the celsius funtion
 */

#include "fahrenheit.h"

void celsius_to_fahrenheit(double);

void fahrenheit(void)
{
    system("clear");
    system("date");
    puts("\t\t\t\t\t\t\t ________________________________________________________");
    puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
    puts("\t\t\t\t\t\t\t|*****          °C to °F              *****|");
    puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
    puts("\t\t\t\t\t\t\t|_______________________________________________________|");

    /* Section: declaration and initialization */
    double celsius_ = 0.0;

    /* Section: input   */
    printf("\n\t\t\t\t\t\t\t\tEnter the numeric value of °C to convert to °F (-1 to return) :? ");

    while (scanf("%lf", &celsius_))
    {
        if (celsius_ == -1)
            return;
        celsius_to_fahrenheit(celsius_);
    }
}

void celsius_to_fahrenheit(double cel)
{
    system("clear");
    system("date");
    puts("\t\t\t\t\t\t\t ________________________________________________________");
    puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
    puts("\t\t\t\t\t\t\t|*****          °C to °F              *****|");
    puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
    puts("\t\t\t\t\t\t\t|_______________________________________________________|");
    puts("\n\t\t\t\t\t\t\t\t ______________________________________");
    puts("\n\t\t\t\t\t\t\t\t|      °C        |     °F          |");
    puts("\t\t\t\t\t\t\t\t|__________________|__________________|");

    double fahrenheit_ = 0.0;
    fahrenheit_ = (9.0 / 5.0) * (cel) +  CONVERSION_FACTOR;
    printf("\t\t\t\t\t\t\t\t|%18.2f°C = %18.2f°F|\n", cel, fahrenheit_);
    puts("\t\t\t\t\t\t\t\t---------------------------------------");
    puts("\t\t\t\t\t\t\t\t|      °C        |      °F         |");
    puts("\t\t\t\t\t\t\t\t|__________________|__________________|\n");
    printf("\n\t\t\t\t\t\t\t\tEnter the numeric value of °C to convert to °F (-1 to return) :? ");
}
/**
 * File: celsius.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date creation (modification): 20240930 (20240930)
 * Description: Implementation of the celsius funtion
 */

#include "fahrenheit.h"

void celsius_to_fahrenheit(double cels);

void fahrenheit(void)
{
    //system("clear");
    //system("date");
    puts("\t\t\t\t\t\t\t ________________________________________________________");
    puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
    puts("\t\t\t\t\t\t\t|*****          °C to °F                           *****|");
    puts("\t\t\t\t\t\t\t|*****       By P.A. Mulamba                       *****|");
    puts("\t\t\t\t\t\t\t|_______________________________________________________|");

    /* Section: declaration and initialization */
    double celsius_ = 0.0;
    bool answer = 0;

    do{
        /* Section: input */
        printf("\n\t\t\t\t\t\t\tEnter the value of °C to convert to °F  :? ");
        scanf("%lf", &celsius_);
        celsius_to_fahrenheit(celsius_);
        printf("\n\n\t\t\t\t\t\t\tDo you want to continue (press 1 for yes or 0 for no) ? ");
        scanf("%d", &answer);
    } while (answer != 0);
}

void celsius_to_fahrenheit(double cel)
{
    system("clear");
    system("date");
    puts("\t\t\t\t\t\t\t ________________________________________________________");
    puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
    puts("\t\t\t\t\t\t\t|*****          °C to °F                           *****|");
    puts("\t\t\t\t\t\t\t|*****     By P.A. Mulamba                         *****|");
    puts("\t\t\t\t\t\t\t|_______________________________________________________|");
    puts("\n\t\t\t\t\t\t\t\t ______________________________________");
    puts("\n\t\t\t\t\t\t\t\t|      °C          |      °F          |");
    puts("\t\t\t\t\t\t\t\t|__________________|__________________|");

    double fahrenheit_ = 0.0;
    fahrenheit_ = (9.0 / 5.0) * (cel) +  CONVERSION_FACTOR;
    printf("\n\t\t\t\t\t\t\t\t     %4.6f °C = %4.6f °F              \n", cel, fahrenheit_);
    puts("\n\t\t\t\t\t\t\t\t---------------------------------------");
    puts("\t\t\t\t\t\t\t\t|      °C          |      °F          |");
    puts("\t\t\t\t\t\t\t\t|__________________|__________________|\n");
    //printf("\n\t\t\t\t\t\t\tEnter the value of °C to convert to °F (-1000 to quit) :? ");
}
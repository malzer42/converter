/**
 * File: menu.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date of creation (modification): 20240923 (20240923)
 * Description: Implementation of the function menu_temperature
 */

#include "menu_temperature.h"
#include "fahrenheit.h"
#include "celsius.h"

void menu_temperature(void)
{
    /* section : system call	*/
    system("clear");
    system("date");
    /* system("./textanimate");	 textanimate is implemented by David Mackay	*/

    /*section: welcome message	*/
    puts("\t\t\t\t\t\t\t ________________________________________________________");
    puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperature              *****|");
    puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
    puts("\t\t\t\t\t\t\t|_______________________________________________________|");
    puts("\n\t\t\t\t\t\t\t\t\t\t1. °C To °F");
    puts("\t\t\t\t\t\t\t\t\t\t2. °F To °C");
    printf("\n\t\t\t\t\t\t\t\t\tYour choice (-1 to quit): ? ");

    int choice = 0;
    scanf("%d", &choice);

    switch (choice)
    {
    case ONE:
        fahrenheit();
        menu_temperature();
        break;
    case TWO:
        celsius();
        menu_temperature();
        break;
    default:
        // system("./textanimate.exe");
        //system("speedtest");
        break;
    }
}

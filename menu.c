/**
 * File: menu.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date of creation (modification): 20240923 (20240923)
 * Description: Implementation of the function menu
 */

#include "menu.h"

void menu(void)
{	
	/* section : system call	*/
	system("clear");
	system("date");
	/* system("./textanimate");	 textanimate is implemented by David Mackay	*/
	
	/*section: welcome message	*/
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Area, Curreny, Length    *****|");
	puts("\t\t\t\t\t\t\t|*****          Temperature, Volume, Weight        *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	puts("\n\t\t\t\t\t\t\t\t\t\t1. Area");
	puts("\t\t\t\t\t\t\t\t\t\t2. Currency ");
	puts("\t\t\t\t\t\t\t\t\t\t3. Length");
	puts("\t\t\t\t\t\t\t\t\t\t4. Temperature");
	puts("\t\t\t\t\t\t\t\t\t\t5. Volume");
	puts("\t\t\t\t\t\t\t\t\t\t6. Weight");
	
	printf("\n\t\t\t\t\t\t\t\t\tYour choice (-1 to quit): ? ");

	int choice = 0;
	scanf("%d", &choice);

	switch( choice ){
		case AREA:
			area();
			menu();
			break;
		case CURRENCY:
			currency();
			menu();
			break;
		case LENGTH:
			length();
			menu();
			break;
		case TEMPERATURE:
			temperature();
			menu();
			break;
		case VOLUME:
			volume();
			menu();
			break;
		case WEIGHT:
			weight();
			menu();
			break;
		default:
			//system("./textanimate.exe");
			//system("speedtest");
			break;
	}
}

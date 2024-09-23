/*
*  C Implementation: menu
*
* Description: 
*
*
* Author: Pierre Abraham Mulamba,,, <pam@falcon>, (C) 2009
*
* Copyright: See COPYING file that comes with this distribution
*
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
	scanf("%d" , &choice);
	
	switch( choice ){
		case 1:
			area();
			menu();
			break;
		case 2:
			currency();
			menu();
			break;
		case 3:
			length();
			menu();
			break;
		case 4:
			temperature();
			menu();
			break;
		case 5:
			volume();
			menu();
			break;
		case 6:
			weight();
			menu();
			break;
		default:
			system("./textanimate.exe");
			break;
	}
}

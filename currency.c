/*
*  C Implementation: currency
*
* Description: Program to convert currencies ZAR, USD, GBP , EUR
*
*
* Author: Pierre Abraham Mulamba,,, <pam@falcon>, (C) 2009
*
* Copyright: See COPYING file that comes with this distribution
*
*/
#include "currency.h"

void conversion(float);

void currency(void)
{
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Currencies: ZAR, USD($)  *****|");
	puts("\t\t\t\t\t\t\t|*****                   GBP(#), EUR               *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	
	/*	section: declaration and initialization	*/
	float zar = 0.0;
	
	/*      section: input  */
	printf("\n\t\t\t\t\t\t\tEnter the Max amount of RANDS (-1 to return to menu) :? ");
        
	/*section: computation*/
	while( scanf("%f", &zar ) ){
		if(zar == -1) return;
		conversion(zar);       
	}
}
void conversion(float arg)
{       
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Currencies: ZAR, USD($)  *****|");
	puts("\t\t\t\t\t\t\t|*****                   GBP(#), EUR               *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	puts("\n\t\t\t\t\t\t ____________________________________________________________________________");
	puts("\n\t\t\t\t\t\t|      RANDS       |      USD         |      GBP         |      EUR         |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	
	const double ZAR2USD = 0.132;
	const double ZAR2GBP = 0.069;
	const double ZAR2EUR = 0.101;
	
	const int STEP = 20;
	int i = 0;
        
	while( i <= arg ){
		printf("\t\t\t\t\t\t|%d|%18.2f|%18.2f|%18.2f|\n", i , ZAR2USD * i , ZAR2GBP * i , ZAR2EUR * i);    
		i += STEP;
	}
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|");
	/*	puts("\n\t\t\t\t ____________________________________________________________________________");	*/
	puts("\t\t\t\t\t\t|      RANDS       |      USD         |      GBP         |      EUR         |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	printf("\t\t\t\t\t\t\tEnter the Max amount of RANDS (-1 to return to menu) :? ");   
}

/**
 * File: currency.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date of creation (modification): 20240923 (20240923)
 * Description: Implementation of the currency 
 */
#include "currency.h"

void conversion(float);

void currency(void)
{
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Currencies: CDF, USD($)  *****|");
	puts("\t\t\t\t\t\t\t|*****                   GBP(#), EUR               *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	
	/*	section: declaration and initialization	*/
	float cdf = 0.0;
	
	/*      section: input  */
	printf("\n\t\t\t\t\t\t\tEnter the Max amount of CDFS (-1 to return to menu) :? ");
        
	/*section: computation*/
	while( scanf("%f", &cdf ) ){
		if(cdf == -1) return;
		conversion(cdf);       
	}
}
void conversion(float arg)
{       
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Currencies: CDF, USD($)  *****|");
	puts("\t\t\t\t\t\t\t|*****                   GBP(#), EUR               *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	puts("\n\t\t\t\t\t\t ____________________________________________________________________________");
	puts("\n\t\t\t\t\t\t|       CDFS       |      USD         |      GBP         |      EUR         |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");

	const double CDF2USD = 0.00035;
	const double CDF2GBP = 0.00026;
	const double CDF2EUR = 0.00031;

	const float STEP = 1.0;
	float i = 0.0;
        
	while( i <= arg ){
		printf("\t\t\t\t\t\t|%18.2f|%18.2f|%18.2f|%18.2f|\n", i , CDF2USD * i , CDF2GBP * i , CDF2EUR * i);    
		i += STEP;
	}
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|");
	/*	puts("\n\t\t\t\t ____________________________________________________________________________");	*/
	puts("\t\t\t\t\t\t|       CDFS       |      USD         |      GBP         |      EUR         |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	printf("\t\t\t\t\t\t\tEnter the Max amount of RANDS (-1 to return to menu) :? ");   
}

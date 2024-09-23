/*
*  C Implementation: temperature
*
* Description: 
*
*
* Author: Pierre Abraham Mulamba,,, <pam@falcon>, (C) 2009
*
* Copyright: See COPYING file that comes with this distribution
*
*/

#include "temperature.h"

void conversion_temperature(float);

void temperature(void)
{
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
	puts("\t\t\t\t\t\t\t|*****          Fahrenheit to Celcius              *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	
	/*	section: declaration and initialization	*/
	float fahr = 0.0;
	
	/*      section: input  */
	printf("\n\t\t\t\t\t\t\t\tMax value of Fahr (-1 to return) :? ");
        
	/*section: computation*/
	while( scanf("%f", &fahr ) ){
		if(fahr == -1) return;
		conversion_temperature(fahr);       
	}
}
void conversion_temperature(float arg)
{       
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Temperatures:            *****|");
	puts("\t\t\t\t\t\t\t|*****          Fahrenheit to Celcius              *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	puts("\n\t\t\t\t\t\t\t\t ______________________________________");
	puts("\n\t\t\t\t\t\t\t\t|      FAHR        |     CEL          |");
	puts("\t\t\t\t\t\t\t\t|__________________|__________________|");
	
	//const float FAHR2CEL = -17.222222;
	
	const int STEP = 20;
	int i = 0.0;
        
	while( i <= arg ){
		printf("\t\t\t\t\t\t\t\t|%d|%18.2f|\n", i , (5.0/9.0)*(i -32.0) );
		puts("\t\t\t\t\t\t\t\t---------------------------------------");
		/*puts("\t\t\t\t\t\t _____________________________________");*/    
		i += STEP;
	}
	/*puts("\t\t\t\t\t\t|__________________|__________________|");*/
	/*	puts("\n\t\t\t\t __________________________________");	*/
	puts("\t\t\t\t\t\t\t\t|      FAHR        |      CEL         |");
	puts("\t\t\t\t\t\t\t\t|__________________|__________________|\n");
	printf("\t\t\t\t\t\t\t\tMax value of Fahr (-1 to return) :? ");   
}

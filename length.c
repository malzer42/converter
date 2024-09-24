/**
 * File: length.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date of creation (modification): 20240923 (20240923)
 * Description: Implementation of the length function
 */

#include "length.h"

void conversion_length(float);

void length(void)
{
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Lengths: METERS, FEETS   *****|");
	puts("\t\t\t\t\t\t\t|*****                   YARD , MILE               *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	
	
	/*	section: declaration and initialization	*/
	float mtr = 0.0;
	
	/*      section: input  */
	printf("\n\t\t\t\t\t\t\t\tEnter the Max of METERS (-1 to return to menu) :? ");
        
	/*section: computation*/
	while( scanf("%f", &mtr ) ){
		if(mtr == -1) return;
		conversion_length(mtr);       
	}
}
void conversion_length(float arg)
{       
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Lengths: METERS, FEETS   *****|");
	puts("\t\t\t\t\t\t\t|*****                   YARD , MILE               *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	puts("\n\t\t\t\t\t\t ____________________________________________________________________________");
	puts("\n\t\t\t\t\t\t|      METERS      |      FEETS       |      YARD        |      MILE        |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	
	
	const double MTR2FEET = 3.2808;
	const double MTR2YARD = 1.0936;
	const double MTR2MILE = 0.000621;
	
	const float STEP = 10.0;
	float i = 0.0;
        
	while( i <= arg ){
		printf("\t\t\t\t\t\t|%18.2f|%18.2f|%18.2f|%18.2f|\n", i , MTR2FEET * i , MTR2YARD * i , MTR2MILE * i);
		i += STEP;
	}
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|");
	/*	puts("\n\t\t\t\t ____________________________________________________________________________");	*/
	puts("\t\t\t\t\t\t|      METERS      |      FEETS       |      YARD        |      MILE        |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	printf("\t\t\t\t\t\t\t\tEnter the Max of METERS (-1 to return to menu) :? ");   
}

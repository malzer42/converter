/**
 * File: volume.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date of creation (modification): 20240923 (20240923)
 * Description: Implementation of the volume function
 */

#include "volume.h"

void conversion_volume(float);


void volume(void)
{
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Volumes: M^3, LITER, GAL *****|");
	puts("\t\t\t\t\t\t\t|*****                   GAL(US)                   *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	
	/*	section: declaration and initialization	*/
	float mcub = 0.0;
	
	/*      section: input  */
	printf("\n\t\t\t\t\t\t\t\tMax value of METER^3 (-1 to return to menu) :? ");
        
	/*section: computation*/
	while( scanf("%f", &mcub ) ){
		if(mcub == -1) return;
		conversion_volume(mcub);       
	}
}
void conversion_volume(float arg)
{       
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Volumes: M^3, LITER, GAL *****|");
	puts("\t\t\t\t\t\t\t|*****                   GAL(US)                   *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	puts("\n\t\t\t\t\t\t ____________________________________________________________________________");
	puts("\n\t\t\t\t\t\t|      M^3         |      LITER       |      GAL         |      GAL(US)     |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	
	const float MCUB2LIT = 1000.0;
	const double MCUB2GAL = 219.969;
	const double MCUB2GALUS = 264.17;
	
	const float STEP = 1.0;
	float i = 0.0;
        
	while( i <= arg ){
		printf("\t\t\t\t\t\t|%18.2f|%18.2f|%18.2f|%18.2f|\n", i , MCUB2LIT * i , MCUB2GAL * i , MCUB2GALUS * i);    
		i += STEP;
	}
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|");
	/*	puts("\n\t\t\t\t ____________________________________________________________________________");	*/
	puts("\t\t\t\t\t\t|      M^3         |      LITER       |      GAL         |      GAL(US)     |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	printf("\t\t\t\t\t\t\t\tMax value of METER^3 (-1 to return to menu) :? ");   
}

/**
 * File: area.c
 * Programmer(s): Pierre Abraham Mulamba
 * Date of creation (modification): 2009 (20240923)
 * Description: Implementation of the function area
 */

/* outline: program to convert area 

while(there is a value to convert)
	if(value is equal to -1) return 
	convert the value
print the converted values
*/

#include "area.h"

void conversion_area(float);

void area(void)
{
	/* section: system calls	*/
	system("clear");											/* Linux system interface */
	system("date");												/* Linux system interface */
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Areas: M^2, FT^2, YD^2, A*****|");
	puts("\t\t\t\t\t\t\t|*****                                             *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	
	/*	section: declaration and initialization	*/
	float msqr = 0.0;
	
	/*      section: input  */
	printf("\n\t\t\t\t\t\t\t\tMax value of METER^2 (-1 to return to menu) :? ");
        
	/*section: computation*/
	while( scanf("%f", &msqr ) ){
		if(msqr == -1) return;
		conversion_area(msqr);       
	}
}
void conversion_area(float arg)
{       
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Areas: M^2, FT^2, YD^2, A*****|");
	puts("\t\t\t\t\t\t\t|*****                                             *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	puts("\n\t\t\t\t\t\t ____________________________________________________________________________");
	puts("\n\t\t\t\t\t\t|        M^2       |      FT^2        |     YD^2         |       A          |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	
	const double MSQR2FTSQR = 10.764;
	const double MSQR2YDSQR = 1.196;
	const double MSQR2A = 0.01;
	
	const float STEP = 20.0;
	float i = 0.0;
        
	while( i <= arg ){
		printf("\t\t\t\t\t\t|%18.2f|%18.2f|%18.2f|%18.2f|\n", i , MSQR2FTSQR * i , MSQR2YDSQR * i , MSQR2A * i);    
		i += STEP;
	}
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|");
	/*	puts("\n\t\t\t\t ____________________________________________________________________________");	*/
	puts("\t\t\t\t\t\t|      M^2         |      FT^2        |      YD^2        |      A           |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	printf("\t\t\t\t\t\t\t\tMax value of METER^2 (-1 to return to menu) :? ");   
}

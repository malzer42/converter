/**
 * File: weight.c
 * Programmer(s): Pierre Abraham Mulamba
 * Date of creation (modification): 20230923 (20240923)
 * Description: Implementation of the weight function
 */

#include "weight.h"

void conversion_weight(float);

void weight(void)
{
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Weights: KILOS, POUNDS   *****|");
	puts("\t\t\t\t\t\t\t|*****                   STONE, OZ                 *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	
	/*	section: declaration and initialization	*/
	float kg = 0.0;
	
	/*      section: input  */
	printf("\n\t\t\t\t\t\t\t\tMax of KILOS (-1 to return to menu) :? ");
        
	/*section: computation*/
	while( scanf("%f", &kg ) ){
		if(kg == -1) return;
		conversion_weight(kg);       
	}
}
void conversion_weight(float arg)
{       
	system("clear");
	system("date");
	puts("\t\t\t\t\t\t\t ________________________________________________________");
	puts("\n\t\t\t\t\t\t\t|***** Program to convert Weights: KILOS, POUNDS   *****|");
	puts("\t\t\t\t\t\t\t|*****                   STONE, OZ                 *****|");
	puts("\t\t\t\t\t\t\t|*****             By P.A. Mulamba                 *****|");
	puts("\t\t\t\t\t\t\t|_______________________________________________________|");
	puts("\n\t\t\t\t\t\t ____________________________________________________________________________");
	puts("\n\t\t\t\t\t\t|      KILOS       |     POUNDS       |      STONE       |      OZ          |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	
	
	const double KG2POUND = 2.20459;
	const double KG2STONE = 0.157473;
	const double KG2OZ = 35.273;
	
	const float STEP = 5.0;
	float i = 0.0;
        
	while( i <= arg ){
		printf("\t\t\t\t\t\t|%18.2f|%18.2f|%18.2f|%18.2f|\n", i , KG2POUND * i , KG2STONE * i , KG2OZ * i);
		i += STEP;
	}
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|");
	/*	puts("\n\t\t\t\t ____________________________________________________________________________");	*/
	puts("\t\t\t\t\t\t|      KILOS       |     POUNDS       |      STONE       |      OZ          |");
	puts("\t\t\t\t\t\t|__________________|__________________|__________________|__________________|\n");
	printf("\t\t\t\t\t\t\t\tMax of KILOS (-1 to return to menu) :? ");   
}

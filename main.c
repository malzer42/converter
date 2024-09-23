/* 
 * File: converter.c
 * Programmer(s): Pierre Abraham Mulamba.... pmulamba@gmail.com (C) 2024
 * Date of creaton (modification): 20240922 (20240922)
 * Description: commander in Chief of the converter program
 *
 */

/* ==========================================================================================================

						main -- entry point

------------------------------------------------------------------------------------------------------------*/
#include "converter.h"

int main(int argc , char* argv[])
{
	system("clear");
	system("date");
	if(argc != 2)
		error();
	//printf("\n\t\t\t\t\t\t\tProvide the password to proceed\n");
	
	const char *psswrd = "kadogo";	/* password to unlock the program */
	if(strcmp( argv[1] , psswrd) == 0 ){
		system("clear");
		printf("\n");
		system("./textanimate");
		menu();	
	}else{
		system("clear");
		//error("");
		printf("\n\t\t\t\t\t\t\tUsage: converter password\n");
		printf("\n\t\t\t\t\t\t\tProgram failed to load : INCORRECT PASSWORD !!!\n");
		printf("\n\t\t\t\t\t\t\tContact: pmulamba@gmail.com for the password\n\n");
		return 1;
	}
		
	return 0;
}/*:~main*/

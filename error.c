/*
*  C Implementation: error
*
* Description: 
*
*
* Author: Pierre Abraham Mulamba,,, <pam@falcon>, (C) 2009
*
* Copyright: See COPYING file that comes with this distribution
*
*/

#include "error.h"

/* error:  print an error message and die */   
void error()
{
	va_list args;
	//va_start(args);
	fprintf(stderr, "Usage: converter password");
//	vprintf(stderr, fmt, args);
	fprintf(stderr, "\n");
	va_end(args);
	exit(1);
}

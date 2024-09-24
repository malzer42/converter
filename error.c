/**
 * File: error.c
 * Programmer(s): Pierre Abraham Mulamba, <pmulamba@gmail.com>, (C) 2024
 * Date creation (modification): 20240923 (20240923)
 * Description: Implementation of the error function
 */

#include "error.h"

/* error:  print an error message and die */   
void error()
{
	va_list args;
	//va_start(args);
	fprintf(stderr, "Usage: converter password");
	//vprintf(stderr, fmt, args);
	fprintf(stderr, "\n");
	va_end(args);
	exit(1);
}

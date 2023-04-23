#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
* struct check - defines a structure for symbols and functions
*
* @type: The operator
* @f: The function associated
*/

typedef struct
{
	char *type;
	void (*f)();
} check;

int _putchar(char c); /* writes the character c to stdout */

int _printf(const char *format, ...); /* printf */

/* Print Functions */
void p_percent(); /* for %% */
void p_string(va_list c); /* for %s */
void p_char(va_list c); /* for %c */

#endif

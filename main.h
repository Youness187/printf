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

int checker(va_list op, char form);
int _putchar(char c); /* writes the character c to stdout */

int _printf(const char *format, ...); /* printf */

/* Print Functions */
int p_percent(void); /* for %% */
int p_string(va_list c); /* for %s */
int p_char(va_list c); /* for %c */

#endif

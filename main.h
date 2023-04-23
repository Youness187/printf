#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct check - Defines a structure for symbols and functions.
 * @type: The operator.
 * @f: The function associated.
 * p_percent - print persentage character
 * p_string - print string
 * p_char - print character
 */

typedef struct
{
	char *type;
	int (*f)();
} check;

int checker(va_list op, char form);
int _putchar(char c); /* writes the character c to stdout */

int _printf(const char *format, ...); /* printf */

/* Print Functions */
int p_percent(void); /* for %% */
int p_string(va_list c); /* for %s */
int p_char(va_list c); /* for %c */

#endif

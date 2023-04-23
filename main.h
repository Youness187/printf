#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct convert - defines a structure for symbols and functions
 *
 * @type: The operator
 * @f: The function associated
 */
struct convert
{
	char *type;
	int (*f)(va_list);
};
typedef struct convert check;


int checker(va_list op, char form);
int _putchar(char c);

int _printf(const char *format, ...);

/* Print Functions */
int p_percent(va_list);
int p_string(va_list);
int p_char(va_list);

#endif

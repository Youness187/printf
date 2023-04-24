#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
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

/*help functions*/
int p_hx(char *str, int len, unsigned int num, char x, int o);
int x_X(int num, char x);
int p_o(char *str, int len, unsigned int num);
int p_b(char *str, int len, unsigned int num);
int print_boxX(va_list op, int base, char x);
unsigned int length_base(unsigned int n, int b);
void _string(char *c);

int checker(va_list op, char form);
int _putchar(char c);

int _printf(const char *format, ...);

/* Print Functions */
int p_percent(va_list);
int p_string(va_list);
int p_char(va_list);
int p_numbers(va_list op);
int p_binary(va_list op);
int p_u_numbers(va_list op);
int p_octal(va_list op);
int p_hexadecimal(va_list op);
int p_Hexadecimal(va_list op);
int Str(va_list op);

unsigned int length_base(unsigned int n, int b);

#endif

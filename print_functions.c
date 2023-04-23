#include "main.h"
/**
 * p_char - print a single character
 * @c: va_list
 * Return: 1
*/

int p_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
/**
 * p_string - print a string of characters
 * @c: va_list
 * Return: length of string
*/

int p_string(va_list c)
{
	int i;
	char *s = va_arg(c, char*);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
/**
 * p_percent - print a percent sign (\% also works)
 * @c: va_list
 * Return: 1
*/

int p_percent(__attribute__((unused))va_list c)
{
	_putchar('%');
	return (1);
}

/**
 * p_binary - prints binary
 * @op: va_list
 * Return: The length of the number printed
*/
int p_binary(va_list op)
{
	return (print_boxX(op, 2, '\0'));
}
/**
 * p_octal - print value in octal format
 * @op: va_list
 * Return: The length of the number printed
*/
int p_octal(va_list op)
{
	return (print_boxX(op, 8, '\0'));
}

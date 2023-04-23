#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: string
 * Return: length of string
*/

int _printf(const char *format, ...)
{
	int i;
	va_list op;

	va_start(op, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			checker(op, format[++i]);
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(op);
	return (i);
}

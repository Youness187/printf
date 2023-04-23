#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: string
 * Return: length of string
*/

int _printf(const char *format, ...)
{
	int i, l = 0;
	va_list op;

	va_start(op, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			l += checker(op, format[++i]);
		}
		else
		{
			l++;
			_putchar(format[i]);
		}
	}
	va_end(op);
	return (l);
}


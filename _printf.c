#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: string
 * Return: length of string
*/

int _printf(const char *format, ...)
{
	int i, o, l = 0;
	va_list op;

	if (format == NULL)
		return (-1);

	va_start(op, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			o = checker(op, format[++i]);
			if (o == -1)
				return (-1);
			l += o;
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

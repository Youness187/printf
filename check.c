#include "main.h"
/**
 * checker - checkes the flag
 * @op: va_list
 * @form: char
 * Return: length
 */
int checker(va_list op, char form)
{
	check list[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{"d", p_numbers},
		{"i", p_numbers},
		{"b", p_binary},
		{"u", p_u_numbers},
		{"o", p_octal},
		{"X", p_Hexadecimal},
		{"x", p_hexadecimal},
		{"S", Str},
		{"p", p_pointer},
		{"r", p_revers},
		{"R", rot13},
		{NULL, NULL}
	};
	int i, l = 0;
	int bo = 1;

	if (form == '\0')
		return (-1);

	for (i = 0; list[i].type != NULL; i++)
	{
		if (form == list[i].type[0])
		{
			bo = 0;
			l = list[i].f(op);
		}
	}
	if (bo == 1)
	{
		_putchar('%');
		_putchar(form);
		l = 2;
	}
	return (l);
}

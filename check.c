#include "main.h"
/**
 * checker - checkes the flag
 * @op: va_list
 * @form: char
 */
void checker(va_list op, char form)
{
	check list[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{NULL, NULL}
	};
	int i;
	int bo = 1;
	for (i = 0; list[i].type != NULL; i++)
	{
		if (form == list[i].type[0])
		{
			bo = 0;
			list[i].f(op);
		}
	}
	if (bo == 1)
	{
		_putchar('%');
		_putchar(form);
	}
}

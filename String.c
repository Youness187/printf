#include "main.h"
/**
 * Str - prints the string.
 * @op: va_list
 * Return: length of a string
 */
int Str(va_list op)
{
	int i, l, len;
	char *str;
	char *s = va_arg(op, char*);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++, l++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = length_base(s[i], 16);
			str = malloc(sizeof(char) * len + 1);
			if (str == NULL)
				return (-1);
			if (len == 1)
				_putchar('0');
			p_hx(str, len, (unsigned int)s[i], 'X', -1);
			l += 3;
		}
		else
			_putchar(s[i]);
	}
	return (l);
}

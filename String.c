#include "main.h"
/**
 * hexa_code - hexa_code
 * @chr: char
 * @str: string p
 * @l: length
 * Return: 3
 */

int hexa_code(char chr, char *str, int l)
{
	char map_to[] = "0123456789ABCDEF";

	if (chr < 0)
		chr *= -1;

	str[l--] = map_to[chr % 16];
	str[l--] = map_to[chr / 16];
	str[l--] = 'x';
	str[l] = '\\';

	return (3);
}

/**
 * Str - prints the string.
 * @op: va_list
 * Return: length of a string
 */
int Str(va_list op)
{
	int i, l = 0, len;
	char *str;
	char *s = va_arg(op, char*);

	if (s == NULL)
	{
		s = "(null)";
		return (6);
	}

	for (i = 0; s[i] != '\0'; i++, l++)
	{
		if (s[i] >= 32 && s[i] < 127)
		{
			_putchar(s[i]);
		}
		else
		{
			len = length_base(s[i], 16);
			str = malloc(sizeof(char) * len + 1);
			if (str == NULL)
				return (-1);
			hexa_code(s[i], str, len + 2);
			_string(str);
			free(str);
			l += 3;
		}
	}
	return (l);
}


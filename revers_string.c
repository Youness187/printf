#include "main.h"
/**
 * length_str - length of string
 * @str: the string
 * Return: length
 */
int length_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * p_revers - reverse and print a string
 * @op: va_list
 * Return: length
 */
int p_revers(va_list op)
{
	int len, i;
	char *str;

	str = va_arg(op, char *);
	if (str == NULL)
		return (-1);

	len = length_str(str);
	for (i = 0; len > 0; len--, i++)
		_putchar(str[len - 1]);
	return (i);
}

/**
 * rot13 - Converts string to rot13
 * @op: va_list
 * Return: length
 */
int rot13(va_list op)
{
	int i, j;
	char *str;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(op, char *);
	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(r[j]);
				break;
			}
		}
	}
	return (i);
}

#include "main.h"
/**
 * length_base - calc length of a Number base of b
 * @n: Number
 * @b: base
 * Return: unsigned integar
 */
unsigned int length_base(unsigned int n, int b)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		n = n / b;
	}
	return (i);
}
/**
 * _string - print string
 * @c: base
 */

void _string(char *c)
{
	int i;

	if (c == NULL)
		c = "(null)";

	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
}
/**
 * p_binary - converts a base 10 Number to binary
 * @op: va_list
 * Return: The length of the number printed
 */
int p_binary(va_list op)
{
	int len, i;
	unsigned int num;
	char *str;

	num = va_arg(op, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (num < 1)
		return (-1);

	len = length_base(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	str[len] = '\0';
	for (i = 1; num > 0; i++)
	{
		if (num % 2 == 0)
			str[len - i] = '0';
		else
			str[len - i] = '1';
		num /= 2;
	}
	_string(str);
	free(str);
	return (len);
}

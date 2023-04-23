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
 * print_boxX - converts a base 10 Number to binary
 * or octal format or hexadecimal format (low or upper)
 * @op: va_list
 * @base: base (2, 8, 16)
 * @x: char
 * Return: The length of the number printed
 */
int print_boxX(va_list op, int base, char x)
{
	int len;
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

	len = length_base(num, base);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	switch (base)
	{
	case 2:
		return (p_b(str, len, num));
	case 8:
		return (p_o(str, len, num));
	case 16:
		return (p_hx(str, len, num, x));
	default:
		return (-1);
	}
	return (-1);
}


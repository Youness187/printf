#include "main.h"
/**
 * p_b - print binary.c
 * @str: string
 * @len: length
 * @num: number
 * Return: the length of the number printed
*/
int p_b(char *str, int len, unsigned int num)
{
	int i;

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
/**
 * p_o - print value in octal format
 * @str: string
 * @len: length
 * @num: Number
 * Return: The length of the number printed
*/
int p_o(char *str, int len, unsigned int num)
{
	int i;

	str[len] = '\0';

	for (i = 1; num > 0; i++)
	{
		str[len - i] = (num % 8) + 48;
		num /= 8;
	}

	_string(str);
	free(str);
	return (len);
}
/**
 * x_X - checks if x or X
 * @num: number
 * @x: char
 * Return: char
*/
int x_X(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
}

/**
 * p_hx - Prints a representation of a decimal number on base16
 * @str: string
 * @len: length
 * @num: number
 * @x: char
 * Return: Number of characters printed
 */
int p_hx(char *str, int len, unsigned int num, char x, int o)
{
	int i, n;

	str[len] = '\0';
	for (i = 1; num > 0; i++)
	{
		n = num % 16;
		if (n > 9)
		{
			n = x_X(n, x);
			str[len - i] = n;
		}
		else
			str[len - i] = n + 48;
		num = num / 16;
	}
	if (o == -1)
		str[2] = '\0';
	_string(str);
	free(str);
	return (len);
}


#include "main.h"
/**
 * length_pointer - calc length of a Number base of b
 * @n: Number
 * Return: length pointer
 */
int length_pointer(unsigned long int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		n /= 16;
	}
	return (i);
}
/**
 * p_pointer - print pointer
 * @op: va_list
 * Return: length
*/
int p_pointer(va_list op)
{
	int len = 2, i;
	char map[] = "0123456789abcdef";
	char str[13];
	void *add = va_arg(op, void *);
	unsigned long int num;

	if (add == NULL)
	{
		_string("(nil)");
		return (5);
	}
	num = (unsigned long int)add;
	i = length_pointer(num);
	str[i--] = '\0';

	while (num > 0)
	{
		str[i--] = map[num % 16];
		num /= 16;
		len++;
	}
	_putchar('0');
	_putchar('x');
	_string(str);
	return (len);
}

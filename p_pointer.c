#include "main.h"
/**
 * p_pointer - print pointer
 * @op: va_list
 * Return: length
*/
int p_pointer(va_list op)
{
	int len = 2, i = 11;
	char map[] = "0123456789abcdef";
	char str[13];
	void *add = va_arg(op, void *);
	unsigned long int num;

	if (add == NULL)
		_string("(nil)");

	str[12] = '\0';
	num = (unsigned long int)add;

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

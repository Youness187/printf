#include "main.h"
/**
 * div - division calculation.
 * @div: the dividor.
 * @num: the devided number.
 * Return: the division result.
 *
 */
int div(int div, int num)
{
	int i;

	for (i = 0; (num / div) > 9 ; i++)
	{
		div *= 10;
	}
	return (div);
}
/**
 * p_numbrs - prints a number.
 * @op: list o f arguments.
 * Return: the length of the numbers.
 */
int p_numbrs(va_list op)
{
	int number, divider = 1, len = 0;

	number = va_arg(op, int);

	if (number < 0)
	{
		len++;
		_putchar('-');
		number *= -1;
	}

	divider = div(divider, number);

	for (; divider != 0; len++)
	{
		_putchar('0' + (number / divider));
		number %= divider;
		divider /= 10;
	}

	return (len);
}

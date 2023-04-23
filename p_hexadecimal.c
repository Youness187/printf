#include "main.h"

/**
 * p_hexadecimal - prints Hexadecimal lowercase
 * @op: va_list
 * Return: The length of the number printed
*/
int p_hexadecimal(va_list op)
{
	return (print_boxX(op, 16, 'x'));
}
/**
 * p_Hexadecimal - prints Hexadecimal uppercase
 * @op: va_list
 * Return: The length of the number printed
*/
int p_Hexadecimal(va_list op)
{
	return (print_boxX(op, 16, 'X'));
}

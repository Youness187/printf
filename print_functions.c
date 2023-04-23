#include "main.h"
/**
 * p_char - print a single character
 * @c: va_list 
*/

void p_char(va_list c)
{
    _putchar(va_arg(c, int));
}
/**
 * p_string - print a string of characters
 * @c: va_list 
*/

void p_string(va_list c)
{
    int i;
    char *s = va_arg(c, char*);

    for (i = 0; s[i] != '\0'; i++)
        _putchar(s[i]);
}
/**
 * p_percent - print a percent sign (\% also works)
*/

void p_percent()
{
    _putchar('%');
}

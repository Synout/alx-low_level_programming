#include "main.h"

/**
 * print_sign - function to check if input + or - or not.
 * @c: input character
 *
 * Return: 1 if character is +, / if -, 0 otherwise.
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

#include "main.h"

/**
 * print_last_digit - function to print last digit of value.
 * @c: input character
 *
 * Return: int.
 */
int print_last_digit(int c)
{
int digit_ = c % 10;
if (c < 0)
{
digit_ *= -1;
}
_putchar(digit_ + '0');
return (digit_);
}

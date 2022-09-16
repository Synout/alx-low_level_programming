#include "main.h"

/**
 * more_numbers - function that prints int from 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
int n = 0;
for (; n <= 9; n++)
{
int i = 0;
for (; i <= 14; i++)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}

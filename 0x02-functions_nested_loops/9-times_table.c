#include <math.h>
#include "main.h"
#include <stdio.h>
/**
 * times_table - function to print number multiplication
 *
 * Return: none.
 */
void times_table(void)
{
int i = 0;
for (; i < 10; i++)
{
int j = 0;
for (; j <= 18; j += i)
{
if (i == 0)
{
for (; j < 10; j++)
{
_putchar('0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
break;
}
_putchar(j + '0');
if ((j % 9) != 0 || j == 0)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

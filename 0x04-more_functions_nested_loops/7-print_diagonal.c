#include "main.h"

/**
 * print_diagonal - function that prints \ line diagonally
 * @n : the number of times to print \
 * Return: void
 */

void print_diagonal(int n)
{
int df = n;
int j = df - n;
while (n > 0)
{
for (; j > 0; j--)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
n--;
j = df - n;
}
if (df <= 0)
{
_putchar('\n');
}
}

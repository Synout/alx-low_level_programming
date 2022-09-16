#include "main.h"

/**
 * print_square - function to print # number of times in number of lines
 * @size : the number of times to print # in how many lines
 * Return: void
 */

void print_square(int size)
{
int j = 0;

for (; j < size; j++)
{
int k = 0;

for (; k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}

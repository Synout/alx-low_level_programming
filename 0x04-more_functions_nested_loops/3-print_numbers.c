#include "main.h"

/**
 * print_numbers - function that prints int from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
int i = 0;

for (; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}

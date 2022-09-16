#include "main.h"

/**
 * print_triangle - function to print # in a right angle triangle
 * @size : size of triangle
 * Return: void
 */

void print_triangle(int size)
{
int ln = 1;
int sp;
int tr;
for (; ln <= size; ln++)
{
sp = size - ln;
tr = ln;
for (; sp > 0; sp--)
{
printf(" ");
}
for (; tr > 0; tr--)
{
printf("#");
}
printf("\n");
}
}

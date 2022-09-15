#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - function to print if number is pos or neg
 * @i : the number to be tested
 * Return: none.
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
if (i < 0)
{
printf("%d is negative\n", i);
}
if (i == 0)
{
printf("%d is zero\n", i);
}
}

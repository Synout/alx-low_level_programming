#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Entry point function
 * Description - prints 0123456789 using putchar
 * Return: 0 (no errors)
 */
int main(void)
{
/* your code goes there */
int i = 0;
for (; i < 10; i++)
{
putchar ((i % 10) + '0');
}
putchar ('\n');
return (0);
}

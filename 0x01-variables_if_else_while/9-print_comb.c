#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Entry point function
 * Description - prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * Return: 0 (no errors)
 */

int main(void)
{
/* your code goes there */
int i = 0;
for (; i < 10; i++)
{
putchar ((i % 10) + '0');
if (i != 9)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}

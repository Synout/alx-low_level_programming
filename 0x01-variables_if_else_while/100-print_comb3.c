#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Entry point function
 * Description - prints combination of two digits numbers
 * Return: 0 (no errors)
 */

int main(void)
{
/* your code goes there */
int i = 0;
int j = 0;

for (; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar (i%10 + '0');
putchar (j%10 + '0');
if (i != 8)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}

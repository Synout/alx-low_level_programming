#include "main.h"

/**
* puts_half - function that returns multiples of 2
* @str: string to iterate over
* Return: int
*/

void puts_half(char *str)
{
int i = 0;
int j = 0;
int n;

for (; str[i];)
{
i++;
}

if (i % 2 != 0)
{
n = (i - 1) / 2;
}
else
{
n = i / 2;
}

j = n;
for (; j >= n && j < i; j++)
{
_putchar(str[j]);
}
printf("\n");
}

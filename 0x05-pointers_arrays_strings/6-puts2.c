#include "main.h"

/**
* puts2 - function that returns multiples of 2
* @str: 
* Return: int
*/

void puts2(char *str)
{
int i = 0;

for (; str[i]; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
printf("\n");
}

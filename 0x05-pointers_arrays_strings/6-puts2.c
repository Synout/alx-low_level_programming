#include "main.h"

/**
* puts2 - function that returns multiples of 2
* @str: 
* Return: int
*/

void puts2(char *str)
{
int i = 0;
int x = 0;
for (; str[i]; i++)
{
x = str[i] - '0';
if (x % 2 == 0)
{
printf("%d", x);
}
}
printf("\n");
}

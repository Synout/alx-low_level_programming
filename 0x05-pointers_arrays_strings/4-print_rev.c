#include "main.h"

/**
* print_rev - function that prints a reversed string with \n
* @s: string to print in reverse
* Return: void
*/

void print_rev(char *s)
{
int i;
for (i = 0; s[i];)
i++;
i--;
for (; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}

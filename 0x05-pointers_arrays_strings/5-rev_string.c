#include "main.h"

/**
* rev_string - function that prints a reversed string with \n
* @s: string to print in reverse
* Return: void
*/

void rev_string(char *s)
{
int i;
int j = 0;
char const *b = &*s;
char *a = s;
char tmp[20];

for (i = 0; s[i];)
{
i++;
}
i--;

for (; i >= 0; i--)
{
tmp[j] = b[i];
j++;
}
for (; j >= 0; j--)
{
a[i] = tmp[i];
i++;
}
}

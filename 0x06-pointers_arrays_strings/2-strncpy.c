#include "main.h"

/**
* *_strncpy - function that concats two strinfes
* @src: string to copy from
* @dest: string to copy to
* @n: the number of bytes to use  from src
* Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{

int i = 0;
int k = 0;

for (; dest[i];)
{
i++;
}

for (; src[k] && k < n; k++)
{
dest[k] = src[k];
}
i = k;
for (; i < n;)
{
dest[i] = '\0';
i++;
}
return (dest);
}

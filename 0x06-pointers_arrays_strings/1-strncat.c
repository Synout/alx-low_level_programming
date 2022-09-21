#include "main.h"

/**
* *_strncat - function that concats two strinfes
* @src: string to concat
* @dest: string to concat
* @n: the number of bytes to use  from src
* Return: char
*/

char *_strncat(char *dest, char *src, int n)
{

int i = 0;
int k = 0;

for (; dest[i];)
{
i++;
}

for (; src[k] && k < n; k++)
{
dest[i + k] = src[k];
}

return (dest);
}

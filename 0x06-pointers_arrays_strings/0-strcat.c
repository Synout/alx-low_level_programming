#include "main.h"

/**
* *_strcat - function that concats two strinfes
* @src: string to concat
* @dest: string to concat
* Return: char
*/

char *_strcat(char *dest, char *src)
{

int i = 0;
int k = 0;

for (; dest[i];)
{
i++;
}

dest[i] = ' ';
i++;

for (; src[k]; k++)
{
dest[i+k] = src[k];
}

return (dest);
}

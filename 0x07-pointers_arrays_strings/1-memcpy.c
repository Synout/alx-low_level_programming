#include "main.h"

/**
* _memcpy(char b, unsigned int n); - function that copies mem with bytes
* @dest: pointer to copy to
* @src: bytes to copy from
* @n : number of bytes to replace
* Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i = 0;


for (; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}

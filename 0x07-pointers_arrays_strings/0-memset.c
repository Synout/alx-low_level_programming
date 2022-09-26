#include "main.h"

/**
* _memset(char b, unsigned int n); - function that fills mem with bytes
* @s: pointer t area
* @b: bytes to replace
* @n : number of bytes to replace
* Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i = 0;


for (; i < n; i++)
{
s[i] = b;
}

return (s);
}

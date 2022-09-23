#include "main.h"

/**
* string_toupper - function that converts string to convert
* @s: string to make upper
* Return: void
*/

char *string_toupper(char *s)
{
int i = 0;

for (; s[i]; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = toupper(s[i]);
}
}
return (s);
}

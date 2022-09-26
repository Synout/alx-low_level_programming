#include "main.h"

/**
* _strchr - function that looks for first occurence of char or NULL
* @s: string to search in
* @c: character to look for
* Return: char or NULL
*/

char *_strchr(char *s, char c)
{

int i = 0;

for (; s[i]; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}

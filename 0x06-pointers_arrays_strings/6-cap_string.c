#include "main.h"

/**
* cap_string - function that converts string to capitalized
* @s: string to make capitalized
* Return: void
*/

char *cap_string(char *s)
{
int i = 0;

for (; s[i]; i++)
{
if (s[i] <= 'z' && s[i] >= 'a')
{
if (!(s[i - 1] <= 'z' && s[i - 1] >= 'a'))
{
if (!(s[i - 1] <= 'Z' && s[i - 1] >= 'A'))
{
s[i] = toupper(s[i]);
}
}
}
}
return (s);
}

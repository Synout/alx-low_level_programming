#include "main.h"

/**
* _strpbrk - function that looks for first occurence of char or NULL
* @s: string to search in
* @accept: character to look for
* Return: char or NULL
*/

char *_strpbrk(char *s, char *accept)
{

int i = 0;

for (; s[i]; i++)
{
int k = 0;
for (; accept[k]; k++)
{
if (s[i] == accept[k])
{
return (s + i);
}
}

}
return ('\0');
}


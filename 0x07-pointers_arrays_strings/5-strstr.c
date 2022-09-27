#include "main.h"

/**
* _strstr - function that looks for first occurence of char or NULL
* @haystack: string to search in
* @needle: characters to look for
* Return: char or NULL
*/

char *_strstr(char *haystack, char *needle)
{

for (; haystack; haystack++)
{
int k = 0;

for (; needle[k]; k++)
{
if (needle[k] != haystack[k])
{
break;
}
if (needle[k + 1] == '\0')
{
return (haystack);
}
}
}
return ('\0');
}


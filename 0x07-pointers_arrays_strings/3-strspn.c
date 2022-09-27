#include "main.h"

/**
* _strspn - function that looks for counts characts from accept
* @s: string to search in
* @accept: characters to count
* Return: int
*/

unsigned int _strspn(char *s, char *accept)
{

int i = 0;
char *empt = " ";
unsigned int tot = 0;
for (; s[i];)
{
unsigned int k = 0;
for (; accept[k]; k++)
{
if (s[i] == accept[k])
{
tot++;
break;
}
}
if (s[i] == *empt)
{
break;
}
i++;
}
return (tot);
}

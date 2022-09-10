#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Entry point function
 * Description - prints 'abcdfghijklmnoprstuvwxyz'
 * Return: 0 (no errors)
 */

int main(void)
{
/* your code goes there */
int i = 0;
char MyArray[24] = "abcdfghijklmnoprstuvwxyz";
for (; i < 24; i++)
{
putchar (MyArray[i]);
}
putchar ('\n');
return (0);
}

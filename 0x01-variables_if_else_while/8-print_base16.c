#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Entry point function
 * Description - prints base 16 numbers
 * Return: 0 (no errors)
 */

int main(void)
{
/* your code goes there */
int i = 0;
 char MyArray[16] = "0123456789abcdef";
for (; i < 16; i++)
{
putchar (MyArray[i]);
}
putchar ('\n');
return (0);
}

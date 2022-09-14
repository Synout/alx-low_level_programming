#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Entry point function
 * Description - prints '_putchar' using putchar and for loop
 * Return: 0 (no errors)
 */

int main(void)
{
/* your code goes there */
int i = 0;
char *MyArray = "_putchar";
for (; i < 8; i++)
{
putchar (MyArray[i]);
}
putchar ('\n');
return (0);
}

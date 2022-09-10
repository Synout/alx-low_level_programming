#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Entry point function
 * Description - prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * Return: 0 (no errors)
 */

int main(void)
{
/* your code goes there */
int i = 0;
char MyArray[28] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
for (; i < 28; i++)
{
putchar (MyArray[i]);
}
putchar ('\n');
return (0);
}

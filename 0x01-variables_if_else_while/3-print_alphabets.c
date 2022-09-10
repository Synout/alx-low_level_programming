#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Entry point function
 * Description - prints alphabet lower and upper
 * Return: 0 (no errors)
 */

int main(void)
{
/* your code goes there */
int i = 0;
char MyArray[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (; i < 52; i++)
{
putchar (MyArray[i]);
}
putchar ('\n');
return (0);
}

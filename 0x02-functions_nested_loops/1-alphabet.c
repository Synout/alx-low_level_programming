#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>
#include "main.h"

/* betty style doc for function main goes there */

/**
 * print_alphabet - print alphabet function
 * Description - prints the alphabet using putchar and for loop
 * Return: nothing (void)
 */

void print_alphabet(void)
{
/* your code goes there */
int i = 'a';
for (; i <= 'z'; i++)
{
putchar(i);
}
putchar ('\n');
}

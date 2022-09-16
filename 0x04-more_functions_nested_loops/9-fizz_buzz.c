#include "main.h"

/**
 * main - function main entry point
 * fizz_buzz - function to print fizz or buzz or fizzbuzz
 *
 * Return: void
 */

void fizz_buzz(void)
{
int i = 1;

for (; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
if (i % 5 == 0)
{
printf("Buzz ");
}
if (i % 3 && i % 5)
{
printf("%d ", i);
}
}
}
int main(void)
{
fizz_buzz();
printf("\n");
return (0);
}

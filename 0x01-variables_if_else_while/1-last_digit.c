#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

/**
 * main - Entry point function
 * Description - Randomly generates two numbers, print avg is > 5, <6 or == 0
 * Return: 0 (no errors)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n % 10 == 0)
{
printf("%d is 0\n", n % 10);
}
else if (n % 10 < 6)
{
printf("%d is less than 6 and not 0\n", n % 10);
}
else if (n % 10 > 5)
{
printf("%d is greater than 5\n", n % 10);    
}
return (0);
}

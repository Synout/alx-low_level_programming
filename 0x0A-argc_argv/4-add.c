#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point function
 * @argc: the array size of inputs
 * @argv: array of inputs
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;

for (; i < argc; i++)
{
if (*argv[i] < '0' || *argv[i] > '9')
{
printf("Error\n");
return (1);
}
}

for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}

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
int multi = 1;
 
for (; i < argc; i++)
{
multi *= atoi(argv[i]);
}

printf("%d\n", multi);

return (0);
}


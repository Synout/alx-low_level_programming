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
int i = 0;

for (; i < argc; i++)
{
printf("%s\n",argv[i]);
}
return (0);
}


#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the arg c
 * @argc: the number of arguments
 * @argv: the argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{

	if (argv)
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments
 * @argc: number of argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

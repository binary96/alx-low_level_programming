#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples the entry
 * @argc: the number of arguments
 * @argv: the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul;

	i = 1;
	if (i < argc)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);
	return (0);
}


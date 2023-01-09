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
	int mul;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else if (argc > 3 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}


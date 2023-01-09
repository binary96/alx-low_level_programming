#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds the numbers
 * @argc: the number of arguments
 * @argv: the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, add;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((atoi(argv[i]) > 0))
			{
			add = add + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	else if (argc < 2)
	{
		printf("0\n");
	}
	return (0);
}




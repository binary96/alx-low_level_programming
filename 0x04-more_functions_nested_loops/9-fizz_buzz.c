#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints numbers from 1 to 100 and filters dem
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) != 0 && (i % 5) != 0)
		{
			printf("%i ", i);
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
	}
	printf("\n");
	return (0);
}



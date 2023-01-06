#include "main.h"

/**
 * is_prime_number - checks if a number is prime number
 * @n: input
 * Return: 1 if number is a prime number
 */
int is_prime_number(int n)
{
	int i;

	if (n > 1)
	{
	for (i = 2; i < (n / 2); i++)
	{
		if ((n % i) == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	}
	return (0);
}

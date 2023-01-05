#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: input
 * Return: the factorial if number is > -1
 */
int factorial(int n)
{
	int b;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	b = n * factorial(n - 1);
	return (b);
}

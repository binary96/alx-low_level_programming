#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer of the first integer
 * @b: pointer of the second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}

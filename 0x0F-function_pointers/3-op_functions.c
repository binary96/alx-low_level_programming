#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - returns adds two integers
 * op_sub - returns subtracts two integers
 * op_mul - returns multiplies two integers
 * op_div - returns divides two integers
 * op_mod - function returns the remainder of division of two integers
 * @a: int input
 * @b: int input
*/

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}

#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - returns adds two integers
 * @a: int input
 * @b: int input
 * Return: the addition of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns subtracts two integers
 * @a: input
 * @b: input
 * Return: the subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number
 * Return: the division on a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * _isdigit - checks if entered input is a digit
 * @c: is the input
 * Return: 1 if input is a digit else 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

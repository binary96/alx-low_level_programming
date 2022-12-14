#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case character
 * @c: the character
 * Return: 0
 */
int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

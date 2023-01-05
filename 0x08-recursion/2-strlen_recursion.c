#include "main.h"

/**
 * _strlen_recursion - function calculates string length
 * @s: input string
 * Return: the string lenght
 */

int _strlen_recursion(char *s)
{
	int b;

	if (*s != '\0')
	{
		s++;
		b = (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
	return (b);
}


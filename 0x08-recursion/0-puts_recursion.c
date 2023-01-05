#include "main.h"
#include <string.h>
/**
 * _puts_recursion - entry point
 * @s: input
 * Return: void
 */
void _puts_recursion(char *s)
{

/*	len = strlen(s);*/

	_putchar(*s);

	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
	_putchar('\n');
	}

}

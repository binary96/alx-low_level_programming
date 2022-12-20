#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverses the inputed string
 * @s: who tf bloody knows
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	for (count--; count >= 0; count--)
	_putchar(s[count]);
	_putchar('\n');
}


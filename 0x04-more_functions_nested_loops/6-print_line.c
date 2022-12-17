#include "main.h"

/**
 * print_line - prints out a line
 * @n: the number of times the line should be printed
 * Return:
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_chessboard - entry
 * @a: input array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j, len;

	len = sizeof(a)/sizeof(a[0]);
	for (i = 0; i < len; i++)
	{
		_putchar(a[i]);
	}
}

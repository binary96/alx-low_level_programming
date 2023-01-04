#include "main.h"

/**
 * print_chessboard - entry
 * @a: input array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j, len;

	len = sizeof(a)/sizeof(a[0][0]);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len;j++)
		{
		_putchar(a[i][j]);
		if (j == len -1)
		{
			_putchar('\n');
		}
		}
	}
}

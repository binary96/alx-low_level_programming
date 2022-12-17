#include "main.h"

/**
 * more_numbers - print out numbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int ln, num;

	for (ln = 0; ln <= 9; ln++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
			_putchar((num / 10) + 48);
			}
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}


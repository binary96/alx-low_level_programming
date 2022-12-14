#include "main.h"

/**
  * print_last_digit - prints out the last digit of a number
  * @n: the number given
  * Return: j
  */

int print_last_digit(int n)
{
	int j = n % 10;

	if (j >= 0)
	{
		_putchar(j + '0');
		return (j);
	}
	else
	{	j *= -1;
		_putchar(j + '0');
		return (j);
	}
}


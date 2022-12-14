#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _abs - funtion prints out the absolute value of a number
  * @n: is the given number
  * Return: n
  */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}


#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
  * _isupper - checks if input is in upper case
  * @c: the input
  * Return: 1 if is upper otherwise it will return 0
  */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

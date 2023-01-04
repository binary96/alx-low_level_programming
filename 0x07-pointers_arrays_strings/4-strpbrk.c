#include "main.h"
#include <string.h>

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return ((char *)s);
		}
		s++;
	}
	return (0);
}

#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory to fill
 * @b: character to fill with
 * @n: number of bytes to fill
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
/*	int len;*/
	unsigned int i;

/*	len = strlen(s);*/
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


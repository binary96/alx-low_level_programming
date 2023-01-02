#include "main.h"
#include <string.h>
/**
 * _strncpy - function copies two strings
 * @dest - destination string
 * @src - source string
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char temp;

	temp = *dest;
	for (i = 0; i < n; i++)
	{
		*dest = src;
		*src = temp;
	}
	return (dest);
}

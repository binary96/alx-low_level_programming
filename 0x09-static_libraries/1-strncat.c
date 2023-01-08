#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: is the number of strings to add
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, l1, l2;

	l1 = strlen(dest);
	l2 = strlen(src);
	for (j = 0; j < n && j < l2; j++)
	{
		dest[j + l1] = src[j];
	}
	return (dest);
}

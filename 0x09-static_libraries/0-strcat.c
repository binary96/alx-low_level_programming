#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: is the destination
 * @src: source string
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int l, l2, j;

	l = strlen(dest);
	l2 = strlen(src);

	for (j = 0; j < l2; j++)
	{
		dest[l + j] = src[j];
	}
	return (dest);
}

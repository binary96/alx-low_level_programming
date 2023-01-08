#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory with of constant byte
 * @dest: destination memory to replace
 * @src: source memory to copy
 * @n: number of bytes to fill
 * Return: pointer to memory dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
/*	int len;*/
	unsigned int i;

/*	len = strlen(s);*/
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


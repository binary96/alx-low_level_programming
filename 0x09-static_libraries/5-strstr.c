#include "main.h"
#include <string.h>

/**
 * _strstr - entry point
 * @haystack: input string
 * @needle: input string to find in haystack
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int len = strlen(needle);

	while (*haystack)
	{
		if (strncmp(haystack, needle, len) == 0)
		{
		return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}

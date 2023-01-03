#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - functions finds a character in a string
 * @s: is the string
 * @c: the character
 * Return: the pointer to s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
		return (&s[i]);
		}
	}
	return (0);
}

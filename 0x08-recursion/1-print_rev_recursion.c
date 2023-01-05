#include "main.h"
#include <string.h>
/**
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{
	int len;

	len = strlen(s);
	if (*s != '\0')
	{
		_putchar(*s + len);
		_print_rev_recursion(s - 1);
	}
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single base10 digits
 * Return: 0 always
 */
int main(void)
{
	int bs = '0';

	while (bs <= '9')
	{
		putchar(bs);
		bs++;
	}
	putchar('\n');
	return (0);
}

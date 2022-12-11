#include <stdio.h>

/**
 * main - prints the alphabets in reverse order
 * Return: 0 always
 */
int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}

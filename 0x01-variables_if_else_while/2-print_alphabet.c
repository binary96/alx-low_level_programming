#include <stdio.h>

/**
 * main - print alphabets in lower case
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - print alphabets in lower case
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';
	char cp = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cp <= 'Z')
	{
		putchar(cp);
		cp++;
	}
	putchar('\n');
	return (0);
}

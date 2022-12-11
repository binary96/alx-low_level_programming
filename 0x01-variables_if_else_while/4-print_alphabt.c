#include <stdio.h>

/**
 * main - prints alphabets except q and e
 * Return: 0 always
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if ((alp != 'q') && (alp != 'e'))
		{
		putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints all hex
 * Return: 0 alfinways
 */
int main(void)
{
	int dgt = '0';
	char alp = 'a';

	while (dgt <= '9')
	{
		putchar(dgt);
		dgt++;
	}
	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds the numbers
 * @argc: the number of arguments
 * @argv: the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c, d, e, f, cent;

	cent = atoi(argv[1]);
	if (argc == 2)
	{
	a = cent / 25;
	b = cent % 25 / 10;
	c = cent % 25 % 10 / 5;
	d = cent % 25 % 10 / 2;
	e = cent % 5 / 2;
	f = a + b + c + d + e;
	if (cent > 0)
	{
		printf("%d\n", f);
	}
	else
	{
		printf("0\n");
	}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}





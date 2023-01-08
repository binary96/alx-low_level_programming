#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out its name
 * @argc: argument number
 * @argv: argument string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

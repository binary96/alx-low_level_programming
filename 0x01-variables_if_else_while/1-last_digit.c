#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that executes statements
 * Return: 0 always
 */
int main(void)
{
	int n;
	int lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is ", n);
	lstdgt = n % 10;
	if (lstdgt > 5)
		{
		printf("%i and is greater than 5\n", lstdgt);
		}
	else if (lstdgt > 0)
		{
		printf("%i and is 0\n", lstdgt);
		}
	else if (lstdgt < 6 && lstdgt != 0)
		{
		printf("%i and is less than 6 and not 0\n", lstdgt);
		}
	return (0);
}

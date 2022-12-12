#include <stdio.h>
/**
 * main - tf..prints out the smallest combination of two digits
 * Return: 0
 */
int main(void)
{
	/* int num = '0';
	int dnum = '0';
	*/

	for (int num = '0'; num <= '9'; num++)
	{
		for (int dnum = '1'; dnum <= '9'; dnum++)
		{
			if (num < dnum)
			{
				putchar(num);
				putchar(dnum);
				if ((num <= '9') && (dnum <= '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar('\n');
	return (0);
}


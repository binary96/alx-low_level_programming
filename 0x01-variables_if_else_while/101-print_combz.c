#include <stdio.h>
/**
 * main - this is to test betty
 * Return: 0 always
 */
int main(void)
{
	int num;
	int dnum;
	int tnum;

	for (int num = '0'; num <=  '9'; num++)
	{
		for (int dnum = '0'; dnum <= '9'; dnum++)
		{
			for (int tnum = '0'; tnum <= '9'; tnum++)
			{
				if ((tnum > dnum) && (dnum > num))
				{
					putchar(num);
					putchar(dnum);
					putchar(tnum);
					if ((num != '9') && (dnum != '8') && (tnum != '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

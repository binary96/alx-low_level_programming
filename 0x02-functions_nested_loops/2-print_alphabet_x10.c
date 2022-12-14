#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int ten;
	char laa;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (laa = 'a'; laa <= 'z'; laa++)
		{
			_putchar(laa);
		}
		_putchar('\n');
	}
}


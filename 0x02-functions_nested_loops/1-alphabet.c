#include "main.h"
/**
* print_alphabet - this prints out the lower case alphabets
* Return: 0 always
*/
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}
	_putchar ('\n');
}

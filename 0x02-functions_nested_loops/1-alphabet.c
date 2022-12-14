#include "main.h"
/**
* main - this prints out the lower case alphabets
* Return: 0 always
*/
int main(void)
{
	char la;

	for (la = 'a'; la < 'z'; la++)
	{
		_putchar(la);
	}
	_putchar ('\n');
	return (0);
}

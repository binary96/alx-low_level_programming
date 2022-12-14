#include "main.h"

/**
  * jack_bauer - function print out all minutes of the day
  * Return: 0
  */

void jack_bauer(void)
{
	char hr = '0';

	for (hr = '0'; hr <= '2'; hr++)
	{
		char hrs = '0';

		for (hrs = '0'; hrs <= '9'; hrs++)
		{
			char min = '0';

		for (min = '0'; min <= '6'; min++)
		{
			char mins = '0';

		for (mins = '0'; mins <= '9'; mins++)
		{
			if ((min <= '5') && (mins <= '9'))
			{
				_putchar(hr);
				_putchar(hrs);
				_putchar(':');
				_putchar(min);
				_putchar(mins);
				_putchar('\n');
				if (hr == '2' && hrs > '3')
				{
					break;
				}
			}
		}
		}
		}
	}
	_putchar('\n');
}

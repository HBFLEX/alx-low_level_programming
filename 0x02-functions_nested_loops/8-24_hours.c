#include "main.h"

/**
 * jack_bauer - prints every minute in 24 hours
 * Return: 0 always
*/
void jack_bauer(void)
{
	int minute = 0;
	int hour = 0;

	while (hour < 24)
	{
		while (minute < 60)
		{
			_putchar(minute + '0');
			_putchar(minute + '0');
			_putchar(':');
			_putchar(hour + '0');
			_putchar(hour + '0');
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}

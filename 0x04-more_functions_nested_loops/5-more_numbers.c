#include "main.h"

/**
 * more_numbers - prints numbers from 0 up to 14, 10 times
*/
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');

}

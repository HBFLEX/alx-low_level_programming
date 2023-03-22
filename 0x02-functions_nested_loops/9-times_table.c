#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: 0 always
*/
void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			res = i * j;

			if (j != 9)
			{
				_putchar(res);
				_putchar(',');
			}

			else
			{
				_putchar(res);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

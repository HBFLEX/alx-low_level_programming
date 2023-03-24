#include "main.h"

/**
 * print_square - prints squares n times
 * @size: n times
 * Return: Always 0
*/
void print_square(int size)
{
	int i, n = 0;

	while (i < size)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}

		while (n < size)
		{
			_putchar('#');
			n++;
		}
		_putchar('\n');
		i++;

	}
}


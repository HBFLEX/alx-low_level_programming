#include "main.h"

/**
 * print_to_98 - prints all numbers from n - 98
 * @n: the number passed
 * Return: 0 always
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}

		else
		{
			_putchar(i + '0');
		}

		i++;
	}
}

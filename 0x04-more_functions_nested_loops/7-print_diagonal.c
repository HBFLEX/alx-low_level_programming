#include "main.h"

/**
 * print_diagonal - prints \ n times
 * @n: n times
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('\\');
		i++;
	}
}

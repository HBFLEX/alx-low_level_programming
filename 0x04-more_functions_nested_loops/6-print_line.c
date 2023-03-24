#include "main.h"


/**
 * print_line - prints lines to the terminal
 * @n: number of lines to be printed
 * Return: Always 0
*/
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

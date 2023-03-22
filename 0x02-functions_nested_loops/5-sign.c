#include "main.h"

/**
 * print_sign - checks if arg is positive, negative
 * or 0
 * @n: the value to be checked
 * Return: 0 always
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}

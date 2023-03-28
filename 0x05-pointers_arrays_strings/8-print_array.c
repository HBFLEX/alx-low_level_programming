#include "main.h"

void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = - n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	if (n / 10)
	{
		printnumber(n / 10);
	}
	putchar(n % 10 + '0');
}

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printnumber((*(a + i)) + '0');
			_putchar('\n');
			break;
		}
		else
		{
			printnumber((*(a + i)) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

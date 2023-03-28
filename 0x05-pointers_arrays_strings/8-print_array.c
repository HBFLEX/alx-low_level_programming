#include "main.h"


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			_putchar(*(a + i));
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(*(a + i));
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

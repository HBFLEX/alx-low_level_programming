#include "main.h"


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			_putchar((10 % *(a + i)) + '0');
			_putchar('\n');
			break;
		}
		else
		{
			_putchar((10 % *(a + i)) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

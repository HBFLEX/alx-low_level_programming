#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - prints all the numbers passed to it separated by separator
 * @separator: the separator
 * @n: total numbers passed
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, current_value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_value = var_arg(args, int);
		if (separator != NULL)

			printf("%d%s ", current_value, separator);
		else
			printf("%d ", current_value);
	}
	var_end(args);
	printf("\n");
}

#include "variadic_functions"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - prints all string passed to it with a separator
 * @separator: the separator to print
 * @n: total number of args
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	int i;
	char *current_string;

	var_start(strings, n);

	for (i = 0; i < n; i++)
	{
		current_string = var_arg(strings, char*);
		if (current_string == NULL)
			printf("nil");
		else
			printf("%s", current_string);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}

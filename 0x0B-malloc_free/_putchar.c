#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: the character to be printed
 * Return: 1 if success, 0 if fails
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

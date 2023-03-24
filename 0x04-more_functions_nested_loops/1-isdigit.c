#include "main.h"

/**
 * _isdigit - prints 1 if character is digit otherwise 0
 * @c: the charcter to be tested
 * Return: 1 or 0
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}

#include "main.h"

/**
 * _isupper - prints 1 if character is uppercase otherwise 0
 * @c: the character to be tested
 * Return: 1 or 0
*/
int _isupper(int c)
{
	return (c >= 97 && c <= 122 ? 1 : 0);
}

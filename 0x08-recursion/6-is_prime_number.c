#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: the iput number
 * Return: 1 or 0
*/
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n != 1)
	{
		if (n % 2 == 0)
			return (0);
	}

	return is_prime_number(n - 1);
}

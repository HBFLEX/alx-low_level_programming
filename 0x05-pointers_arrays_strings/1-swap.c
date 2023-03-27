/**
 * swap_int - swaps two integer
 * @a: the first integer
 * @b: the second integer
 * Return: 0 always
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

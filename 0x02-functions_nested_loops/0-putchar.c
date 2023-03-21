#include <stdio.h>

void print_putchar(void);

/**
 * main - prints _putchar
 * Return: 0 success
*/
int main(void)
{
	print_putchar();
	return (0);
}

/**
 * print_putchar - prints _putchar to the stdout
 * Return: 0 Success
*/
void print_putchar(void)
{
	printf("_putchar\n");
}

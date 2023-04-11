#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
*/
int main(int argc, char **argv)
{
	int firstNumber, secondNumber, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	firstNumber = atoi(argv[1]);
	secondNumber = atoi(argv[2]);
	result = firstNumber * secondNumber;

	printf("%d\n", result);
	return (0);
}

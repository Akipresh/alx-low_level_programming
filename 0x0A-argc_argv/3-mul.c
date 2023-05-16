#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two munbers
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: If the program receives two arguments - 0
 * if the program does not return two arguments - 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("error\n");
			return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

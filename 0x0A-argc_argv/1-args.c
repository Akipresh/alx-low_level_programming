#include <stdio.h>

/**
 * main - prints the number of arguments in a program
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char  __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print 
 *
 * Return: On success 1.
 * On error -1 is returned and errr is set approprietly.
 */
int _putchar9char c)
{
	return (write(1, &c, 1));
}

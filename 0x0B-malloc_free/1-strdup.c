#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: The string to be copied
 * Return: On success return a pointer to the duplicate strings
 * else return null
 */

char *_strdup(char *str)
{
	int k = 0, j;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		k++;

	dup = (char *)malloc((sizeof(char) * k) + 1);

	if (dup == NULL)
		return (NULL);

	for (j = 0; j < k; j++)
		dup[j] = str[j];

	dup[j] = '\0';

	return (dup);
}

#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Function that concatenates 2 strings
 * @s1: The first string
 * @s2: Te second string
 *
 * Return: On success - a pointer to the concatenated string
 *		Else - NULL
 */

char *str_concat(char *s1, char *s2)
{
	int j, k = 0, l = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] || s2[j]; j++)
		l++;

	s3 = (char *)malloc(sizeof(char) * l);

	if (s3 == NULL)
		return (NULL);

	for (j = 0; s1[j]; j++)
		s3[k++] = s1[j];

	for (j = 0; s2[j]; j++)
		s3[k++] = s2[j];

	return (s3);
}

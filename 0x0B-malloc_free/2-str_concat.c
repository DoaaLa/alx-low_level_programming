#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *cc;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; ++i)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	cc = (char *)malloc(sizeof(char) * (i + j));
	if (cc == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		cc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cc[i] = s2[j];
		i++, j++;
	}
	cc[i] = '\0';
	return (cc);
}

#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new allocated spacd in memory.
 * @str: pointer to a new string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *new;
	int i, n;

	n = sizeof(str);
	new = (char *)malloc(sizeof(new) * n);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		new[i] = str[i];
	}
	return (new);
}

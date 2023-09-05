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
	new = (char *)malloc(sizeof(char) * n);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		new[i] = str[i];
	}
	new[i] = '\0';
	return (new);
}
